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

// Function: sub_003A6AE0
// Address: 0x3a6ae0 - 0x3a6c08
void sub_003A6AE0_0x3a6ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6AE0_0x3a6ae0");
#endif

    switch (ctx->pc) {
        case 0x3a6b1cu: goto label_3a6b1c;
        case 0x3a6b3cu: goto label_3a6b3c;
        case 0x3a6b5cu: goto label_3a6b5c;
        case 0x3a6b70u: goto label_3a6b70;
        case 0x3a6b84u: goto label_3a6b84;
        default: break;
    }

    ctx->pc = 0x3a6ae0u;

    // 0x3a6ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a6ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a6ae4: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x3a6ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x3a6ae8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a6ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a6aec: 0x25086e38  addiu       $t0, $t0, 0x6E38
    ctx->pc = 0x3a6aecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28216));
    // 0x3a6af0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a6af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a6af4: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x3a6af4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x3a6af8: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x3a6af8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x3a6afc: 0x26106de8  addiu       $s0, $s0, 0x6DE8
    ctx->pc = 0x3a6afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28136));
    // 0x3a6b00: 0x26316df8  addiu       $s1, $s1, 0x6DF8
    ctx->pc = 0x3a6b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28152));
    // 0x3a6b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a6b08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a6b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6b0c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3a6b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6b10: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3a6b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a6b14: 0xc0e344a  jal         func_38D128
    ctx->pc = 0x3A6B14u;
    SET_GPR_U32(ctx, 31, 0x3A6B1Cu);
    ctx->pc = 0x3A6B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6B14u;
    // 0x3a6b18: 0x2405050f  addiu       $a1, $zero, 0x50F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D128u, 0x3A6B14u, 0x3A6B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6B1Cu;
label_3a6b1c:
    // 0x3a6b1c: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x3a6b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x3a6b20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a6b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6b24: 0x25086ec0  addiu       $t0, $t0, 0x6EC0
    ctx->pc = 0x3a6b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28352));
    // 0x3a6b28: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3a6b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6b2c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3a6b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a6b30: 0x2405050f  addiu       $a1, $zero, 0x50F
    ctx->pc = 0x3a6b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    // 0x3a6b34: 0xc0e28ec  jal         func_38A3B0
    ctx->pc = 0x3A6B34u;
    SET_GPR_U32(ctx, 31, 0x3A6B3Cu);
    ctx->pc = 0x3A6B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6B34u;
    // 0x3a6b38: 0xaf82bd78  sw          $v0, -0x4288($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950264), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x3A6B34u, 0x3A6B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6B3Cu;
label_3a6b3c:
    // 0x3a6b3c: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x3a6b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x3a6b40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a6b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6b44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3a6b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6b48: 0x25086f58  addiu       $t0, $t0, 0x6F58
    ctx->pc = 0x3a6b48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28504));
    // 0x3a6b4c: 0x2405050f  addiu       $a1, $zero, 0x50F
    ctx->pc = 0x3a6b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    // 0x3a6b50: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3a6b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a6b54: 0xc0e63a2  jal         func_398E88
    ctx->pc = 0x3A6B54u;
    SET_GPR_U32(ctx, 31, 0x3A6B5Cu);
    ctx->pc = 0x3A6B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6B54u;
    // 0x3a6b58: 0xaf82bd7c  sw          $v0, -0x4284($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E88u, 0x3A6B54u, 0x3A6B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6B5Cu;
label_3a6b5c:
    // 0x3a6b5c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x3a6b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x3a6b60: 0x2404050f  addiu       $a0, $zero, 0x50F
    ctx->pc = 0x3a6b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    // 0x3a6b64: 0x24a56fe0  addiu       $a1, $a1, 0x6FE0
    ctx->pc = 0x3a6b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28640));
    // 0x3a6b68: 0xc0e291e  jal         func_38A478
    ctx->pc = 0x3A6B68u;
    SET_GPR_U32(ctx, 31, 0x3A6B70u);
    ctx->pc = 0x3A6B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6B68u;
    // 0x3a6b6c: 0xaf82bd80  sw          $v0, -0x4280($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950272), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A478u, 0x3A6B68u, 0x3A6B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6B70u;
label_3a6b70:
    // 0x3a6b70: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x3a6b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x3a6b74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a6b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6b78: 0x24a570b0  addiu       $a1, $a1, 0x70B0
    ctx->pc = 0x3a6b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28848));
    // 0x3a6b7c: 0xc0e63c2  jal         func_398F08
    ctx->pc = 0x3A6B7Cu;
    SET_GPR_U32(ctx, 31, 0x3A6B84u);
    ctx->pc = 0x3A6B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6B7Cu;
    // 0x3a6b80: 0x2404050f  addiu       $a0, $zero, 0x50F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398F08u, 0x3A6B7Cu, 0x3A6B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6B84u;
label_3a6b84:
    // 0x3a6b84: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3a6b84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3a6b88: 0x8f83bd78  lw          $v1, -0x4288($gp)
    ctx->pc = 0x3a6b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x3a6b8c: 0x8f82bd7c  lw          $v0, -0x4284($gp)
    ctx->pc = 0x3a6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950268)));
    // 0x3a6b90: 0x8f84bd80  lw          $a0, -0x4280($gp)
    ctx->pc = 0x3a6b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950272)));
    // 0x3a6b94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a6b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a6b98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a6b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6b9c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a6b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a6ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6ba4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x3a6ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x3a6ba8: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x3a6ba8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3a6bac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a6bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a6bb0: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x3a6bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3a6bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6BB4u;
        // 0x3a6bb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6BBCu;
    // 0x3a6bbc: 0x0  nop
    ctx->pc = 0x3a6bbcu;
    // NOP
    // 0x3a6bc0: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x3a6bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x3a6bc4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a6bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3a6bc8: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3a6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x3a6bcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a6bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a6bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6BD0u;
        // 0x3a6bd4: 0x8c62005c  lw          $v0, 0x5C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6BD8u;
    // 0x3a6bd8: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x3a6bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x3a6bdc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a6bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3a6be0: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3a6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x3a6be4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a6be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a6be8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6BE8u;
        // 0x3a6bec: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6BF0u;
    // 0x3a6bf0: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x3a6bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x3a6bf4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3a6bf8: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3a6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x3a6bfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a6bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a6c00: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C00u;
        // 0x3a6c04: 0x8c620058  lw          $v0, 0x58($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6C08u;
}
