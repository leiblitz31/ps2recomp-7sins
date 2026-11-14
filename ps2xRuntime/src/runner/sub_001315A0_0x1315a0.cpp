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

// Function: sub_001315A0
// Address: 0x1315a0 - 0x131640
void sub_001315A0_0x1315a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001315A0_0x1315a0");
#endif

    switch (ctx->pc) {
        case 0x1315d8u: goto label_1315d8;
        case 0x1315f0u: goto label_1315f0;
        case 0x13161cu: goto label_13161c;
        case 0x131628u: goto label_131628;
        default: break;
    }

    ctx->pc = 0x1315a0u;

    // 0x1315a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1315a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1315a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1315a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1315a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1315a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1315ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1315acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1315b0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1315b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1315b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1315b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1315b8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1315B8u;
    {
        const bool branch_taken_0x1315b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1315b8) {
            ctx->pc = 0x131604u;
            goto label_131604;
        }
    }
    ctx->pc = 0x1315C0u;
    // 0x1315c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1315c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1315c4: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1315c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1315c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1315c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1315cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1315ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1315d0: 0xc04c5d4  jal         func_131750
    ctx->pc = 0x1315D0u;
    SET_GPR_U32(ctx, 31, 0x1315D8u);
    ctx->pc = 0x131750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131750u, 0x1315D0u, 0x1315D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315D8u;
label_1315d8:
    // 0x1315d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1315d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1315dc: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1315dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1315e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1315e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1315e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1315e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315e8: 0xc04c5d4  jal         func_131750
    ctx->pc = 0x1315E8u;
    SET_GPR_U32(ctx, 31, 0x1315F0u);
    ctx->pc = 0x131750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131750u, 0x1315E8u, 0x1315F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315F0u;
label_1315f0:
    // 0x1315f0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1315f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1315f4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1315f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1315f8: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x1315f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
    // 0x1315fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1315FCu;
    {
        const bool branch_taken_0x1315fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1315fc) {
            ctx->pc = 0x131628u;
            goto label_131628;
        }
    }
    ctx->pc = 0x131604u;
label_131604:
    // 0x131604: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x131604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131608: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x131608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13160c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x13160cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x131610: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x131610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x131614: 0xc04c590  jal         func_131640
    ctx->pc = 0x131614u;
    SET_GPR_U32(ctx, 31, 0x13161Cu);
    ctx->pc = 0x131640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131640u, 0x131614u, 0x13161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13161Cu;
label_13161c:
    // 0x13161c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13161cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131620: 0xc1169b4  jal         func_45A6D0
    ctx->pc = 0x131620u;
    SET_GPR_U32(ctx, 31, 0x131628u);
    ctx->pc = 0x45A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A6D0u, 0x131620u, 0x131628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131628u;
label_131628:
    // 0x131628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13162c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13162cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x131630: 0x3e00008  jr          $ra
    ctx->pc = 0x131630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131638u;
    // 0x131638: 0x0  nop
    ctx->pc = 0x131638u;
    // NOP
    // 0x13163c: 0x0  nop
    ctx->pc = 0x13163cu;
    // NOP
    ctx->pc = 0x131640u;
}
