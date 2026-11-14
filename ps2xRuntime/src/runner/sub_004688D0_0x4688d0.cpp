#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004688D0
// Address: 0x4688d0 - 0x468940
void sub_004688D0_0x4688d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004688D0_0x4688d0");
#endif

    switch (ctx->pc) {
        case 0x46890cu: goto label_46890c;
        case 0x46892cu: goto label_46892c;
        default: break;
    }

    ctx->pc = 0x4688d0u;

    // 0x4688d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4688d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4688d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4688d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4688d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4688d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4688dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x4688dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x4688e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4688e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4688e4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4688E4u;
    {
        const bool branch_taken_0x4688e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4688e4) {
            ctx->pc = 0x46892Cu;
            goto label_46892c;
        }
    }
    ctx->pc = 0x4688ECu;
    // 0x4688ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x4688ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x4688f0: 0x24636ca0  addiu       $v1, $v1, 0x6CA0
    ctx->pc = 0x4688f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27808));
    // 0x4688f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4688f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4688f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4688f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4688fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4688fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x468900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468904: 0xc11a250  jal         func_468940
    ctx->pc = 0x468904u;
    SET_GPR_U32(ctx, 31, 0x46890Cu);
    ctx->pc = 0x468940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468940u, 0x468904u, 0x46890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46890Cu;
label_46890c:
    // 0x46890c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x46890cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x468910: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x468910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x468914: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x468914u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x468918: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x468918u;
    {
        const bool branch_taken_0x468918 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x468918) {
            ctx->pc = 0x46892Cu;
            goto label_46892c;
        }
    }
    ctx->pc = 0x468920u;
    // 0x468920: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x468920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468924: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x468924u;
    SET_GPR_U32(ctx, 31, 0x46892Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x468924u, 0x46892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46892Cu;
label_46892c:
    // 0x46892c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x468930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x468934: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x468934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x468938: 0x3e00008  jr          $ra
    ctx->pc = 0x468938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468940u;
}
