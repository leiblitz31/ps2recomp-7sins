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

// Function: sub_00177880
// Address: 0x177880 - 0x1778f0
void sub_00177880_0x177880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177880_0x177880");
#endif

    switch (ctx->pc) {
        case 0x1778bcu: goto label_1778bc;
        case 0x1778dcu: goto label_1778dc;
        default: break;
    }

    ctx->pc = 0x177880u;

    // 0x177880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x177888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17788c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x17788cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x177890: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x177890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177894: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x177894u;
    {
        const bool branch_taken_0x177894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177894) {
            ctx->pc = 0x1778DCu;
            goto label_1778dc;
        }
    }
    ctx->pc = 0x17789Cu;
    // 0x17789c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17789cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1778a0: 0x24633e48  addiu       $v1, $v1, 0x3E48
    ctx->pc = 0x1778a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15944));
    // 0x1778a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1778a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1778a8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1778a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1778ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1778acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1778b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1778b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778b4: 0xc05de3c  jal         func_1778F0
    ctx->pc = 0x1778B4u;
    SET_GPR_U32(ctx, 31, 0x1778BCu);
    ctx->pc = 0x1778F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778F0u, 0x1778B4u, 0x1778BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778BCu;
label_1778bc:
    // 0x1778bc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1778bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1778c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1778c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1778c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1778c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1778c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1778C8u;
    {
        const bool branch_taken_0x1778c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1778c8) {
            ctx->pc = 0x1778DCu;
            goto label_1778dc;
        }
    }
    ctx->pc = 0x1778D0u;
    // 0x1778d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1778d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1778d4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1778D4u;
    SET_GPR_U32(ctx, 31, 0x1778DCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1778D4u, 0x1778DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778DCu;
label_1778dc:
    // 0x1778dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1778dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1778e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1778e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1778e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1778e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1778e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1778E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1778E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1778F0u;
}
