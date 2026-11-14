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

// Function: sub_00378288
// Address: 0x378288 - 0x3782e8
void sub_00378288_0x378288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378288_0x378288");
#endif

    switch (ctx->pc) {
        case 0x3782a8u: goto label_3782a8;
        case 0x3782b4u: goto label_3782b4;
        case 0x3782d0u: goto label_3782d0;
        default: break;
    }

    ctx->pc = 0x378288u;

    // 0x378288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x378288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37828c: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x37828Cu;
    {
        const bool branch_taken_0x37828c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x378290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37828Cu;
        // 0x378290: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37828c) {
            ctx->pc = 0x3782BCu;
            goto label_3782bc;
        }
    }
    ctx->pc = 0x378294u;
    // 0x378294: 0x2402012a  addiu       $v0, $zero, 0x12A
    ctx->pc = 0x378294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x378298: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x378298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x37829c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37829cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3782a0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3782A0u;
    SET_GPR_U32(ctx, 31, 0x3782A8u);
    ctx->pc = 0x3782A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3782A0u;
    // 0x3782a4: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3782A0u, 0x3782A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3782A8u;
label_3782a8:
    // 0x3782a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3782a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3782ac: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3782ACu;
    SET_GPR_U32(ctx, 31, 0x3782B4u);
    ctx->pc = 0x3782B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3782ACu;
    // 0x3782b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3782ACu, 0x3782B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3782B4u;
label_3782b4:
    // 0x3782b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3782B4u;
    {
        const bool branch_taken_0x3782b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3782B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3782B4u;
        // 0x3782b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3782b4) {
            ctx->pc = 0x3782D8u;
            goto label_3782d8;
        }
    }
    ctx->pc = 0x3782BCu;
label_3782bc:
    // 0x3782bc: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x3782bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x3782c0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3782c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x3782c4: 0x24a582e8  addiu       $a1, $a1, -0x7D18
    ctx->pc = 0x3782c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935272));
    // 0x3782c8: 0xc0e6984  jal         func_39A610
    ctx->pc = 0x3782C8u;
    SET_GPR_U32(ctx, 31, 0x3782D0u);
    ctx->pc = 0x3782CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3782C8u;
    // 0x3782cc: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x3782C8u, 0x3782D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3782D0u;
label_3782d0:
    // 0x3782d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3782d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3782d4: 0x0  nop
    ctx->pc = 0x3782d4u;
    // NOP
label_3782d8:
    // 0x3782d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3782d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3782dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3782DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3782E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3782DCu;
        // 0x3782e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3782DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3782E4u;
    // 0x3782e4: 0x0  nop
    ctx->pc = 0x3782e4u;
    // NOP
    ctx->pc = 0x3782e8u;
}
