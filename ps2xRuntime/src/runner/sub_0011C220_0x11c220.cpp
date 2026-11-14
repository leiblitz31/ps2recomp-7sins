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

// Function: sub_0011C220
// Address: 0x11c220 - 0x11c290
void sub_0011C220_0x11c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C220_0x11c220");
#endif

    switch (ctx->pc) {
        case 0x11c25cu: goto label_11c25c;
        case 0x11c27cu: goto label_11c27c;
        default: break;
    }

    ctx->pc = 0x11c220u;

    // 0x11c220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c228: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11c228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11c22c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11c22cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x11c230: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11c230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c234: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11C234u;
    {
        const bool branch_taken_0x11c234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c234) {
            ctx->pc = 0x11C27Cu;
            goto label_11c27c;
        }
    }
    ctx->pc = 0x11C23Cu;
    // 0x11c23c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x11c240: 0x246333b0  addiu       $v1, $v1, 0x33B0
    ctx->pc = 0x11c240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13232));
    // 0x11c244: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11c244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c248: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11c248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11c24c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c254: 0xc08ed8c  jal         func_23B630
    ctx->pc = 0x11C254u;
    SET_GPR_U32(ctx, 31, 0x11C25Cu);
    ctx->pc = 0x23B630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B630u, 0x11C254u, 0x11C25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C25Cu;
label_11c25c:
    // 0x11c25c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x11c25cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c260: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x11c260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x11c264: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x11c264u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x11c268: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C268u;
    {
        const bool branch_taken_0x11c268 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11c268) {
            ctx->pc = 0x11C27Cu;
            goto label_11c27c;
        }
    }
    ctx->pc = 0x11C270u;
    // 0x11c270: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11c270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c274: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x11C274u;
    SET_GPR_U32(ctx, 31, 0x11C27Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x11C274u, 0x11C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C27Cu;
label_11c27c:
    // 0x11c27c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c284: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11c284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11c288: 0x3e00008  jr          $ra
    ctx->pc = 0x11C288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C290u;
}
