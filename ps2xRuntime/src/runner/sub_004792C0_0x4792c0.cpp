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

// Function: sub_004792C0
// Address: 0x4792c0 - 0x479350
void sub_004792C0_0x4792c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004792C0_0x4792c0");
#endif

    switch (ctx->pc) {
        case 0x4792ecu: goto label_4792ec;
        case 0x47930cu: goto label_47930c;
        case 0x47931cu: goto label_47931c;
        case 0x479338u: goto label_479338;
        default: break;
    }

    ctx->pc = 0x4792c0u;

    // 0x4792c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4792c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4792c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4792c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4792c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4792c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4792cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4792ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4792d0: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x4792d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x4792d4: 0xa3a70040  sb          $a3, 0x40($sp)
    ctx->pc = 0x4792d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 7));
    // 0x4792d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4792d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4792dc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x4792dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4792e0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x4792e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4792e4: 0xc11e3bc  jal         func_478EF0
    ctx->pc = 0x4792E4u;
    SET_GPR_U32(ctx, 31, 0x4792ECu);
    ctx->pc = 0x478EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478EF0u, 0x4792E4u, 0x4792ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4792ECu;
label_4792ec:
    // 0x4792ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4792ECu;
    {
        const bool branch_taken_0x4792ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4792ec) {
            ctx->pc = 0x479324u;
            goto label_479324;
        }
    }
    ctx->pc = 0x4792F4u;
    // 0x4792f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4792f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4792f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4792f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4792fc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4792fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479300: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x479300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x479304: 0xc11e4d4  jal         func_479350
    ctx->pc = 0x479304u;
    SET_GPR_U32(ctx, 31, 0x47930Cu);
    ctx->pc = 0x479350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479350u, 0x479304u, 0x47930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47930Cu;
label_47930c:
    // 0x47930c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47930cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479310: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x479310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x479314: 0xc11dd5c  jal         func_477570
    ctx->pc = 0x479314u;
    SET_GPR_U32(ctx, 31, 0x47931Cu);
    ctx->pc = 0x477570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477570u, 0x479314u, 0x47931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47931Cu;
label_47931c:
    // 0x47931c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x47931Cu;
    {
        const bool branch_taken_0x47931c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47931c) {
            ctx->pc = 0x479338u;
            goto label_479338;
        }
    }
    ctx->pc = 0x479324u;
label_479324:
    // 0x479324: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x479324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479328: 0xdfa50030  ld          $a1, 0x30($sp)
    ctx->pc = 0x479328u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47932c: 0x83a60040  lb          $a2, 0x40($sp)
    ctx->pc = 0x47932cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479330: 0xc11e3f4  jal         func_478FD0
    ctx->pc = 0x479330u;
    SET_GPR_U32(ctx, 31, 0x479338u);
    ctx->pc = 0x478FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478FD0u, 0x479330u, 0x479338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479338u;
label_479338:
    // 0x479338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x479338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47933c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x47933cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x479340: 0x3e00008  jr          $ra
    ctx->pc = 0x479340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479348u;
    // 0x479348: 0x0  nop
    ctx->pc = 0x479348u;
    // NOP
    // 0x47934c: 0x0  nop
    ctx->pc = 0x47934cu;
    // NOP
    ctx->pc = 0x479350u;
}
