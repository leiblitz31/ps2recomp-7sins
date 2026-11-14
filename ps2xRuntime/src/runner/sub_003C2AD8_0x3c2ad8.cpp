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

// Function: sub_003C2AD8
// Address: 0x3c2ad8 - 0x3c2bc8
void sub_003C2AD8_0x3c2ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2AD8_0x3c2ad8");
#endif

    switch (ctx->pc) {
        case 0x3c2b14u: goto label_3c2b14;
        case 0x3c2b2cu: goto label_3c2b2c;
        case 0x3c2b40u: goto label_3c2b40;
        case 0x3c2b64u: goto label_3c2b64;
        case 0x3c2b80u: goto label_3c2b80;
        case 0x3c2ba8u: goto label_3c2ba8;
        default: break;
    }

    ctx->pc = 0x3c2ad8u;

    // 0x3c2ad8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c2ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c2adc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c2adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c2ae0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c2ae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2ae4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3c2ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3c2ae8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3c2ae8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2aec: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3c2aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x3c2af0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c2af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3c2af4: 0x24a59af0  addiu       $a1, $a1, -0x6510
    ctx->pc = 0x3c2af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941424));
    // 0x3c2af8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c2af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3c2afc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2b00: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3c2b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3c2b04: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3c2b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c2b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c2b0c: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x3C2B0Cu;
    SET_GPR_U32(ctx, 31, 0x3C2B14u);
    ctx->pc = 0x3C2B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2B0Cu;
    // 0x3c2b10: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x3C2B0Cu, 0x3C2B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2B14u;
label_3c2b14:
    // 0x3c2b14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c2b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2b18: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3c2b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x3c2b1c: 0x202980b  movn        $s3, $s0, $v0
    ctx->pc = 0x3c2b1cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
    // 0x3c2b20: 0x24a59af8  addiu       $a1, $a1, -0x6508
    ctx->pc = 0x3c2b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941432));
    // 0x3c2b24: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x3C2B24u;
    SET_GPR_U32(ctx, 31, 0x3C2B2Cu);
    ctx->pc = 0x3C2B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2B24u;
    // 0x3c2b28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x3C2B24u, 0x3C2B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2B2Cu;
label_3c2b2c:
    // 0x3c2b2c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3c2b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x3c2b30: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x3c2b30u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x3c2b34: 0x24a59b00  addiu       $a1, $a1, -0x6500
    ctx->pc = 0x3c2b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941440));
    // 0x3c2b38: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x3C2B38u;
    SET_GPR_U32(ctx, 31, 0x3C2B40u);
    ctx->pc = 0x3C2B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2B38u;
    // 0x3c2b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x3C2B38u, 0x3C2B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2B40u;
label_3c2b40:
    // 0x3c2b40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2B40u;
    {
        const bool branch_taken_0x3c2b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B40u;
        // 0x3c2b44: 0x3c050061  lui         $a1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2b40) {
            ctx->pc = 0x3C2B58u;
            goto label_3c2b58;
        }
    }
    ctx->pc = 0x3C2B48u;
    // 0x3c2b48: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2B48u;
    {
        const bool branch_taken_0x3c2b48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B48u;
        // 0x3c2b4c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2b48) {
            ctx->pc = 0x3C2B58u;
            goto label_3c2b58;
        }
    }
    ctx->pc = 0x3C2B50u;
    // 0x3c2b50: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x3c2b50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3c2b54: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3c2b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3c2b58:
    // 0x3c2b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2b5c: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x3C2B5Cu;
    SET_GPR_U32(ctx, 31, 0x3C2B64u);
    ctx->pc = 0x3C2B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2B5Cu;
    // 0x3c2b60: 0x24a59b08  addiu       $a1, $a1, -0x64F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x3C2B5Cu, 0x3C2B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2B64u;
label_3c2b64:
    // 0x3c2b64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2B64u;
    {
        const bool branch_taken_0x3c2b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B64u;
        // 0x3c2b68: 0x3c050061  lui         $a1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2b64) {
            ctx->pc = 0x3C2B74u;
            goto label_3c2b74;
        }
    }
    ctx->pc = 0x3C2B6Cu;
    // 0x3c2b6c: 0x36310006  ori         $s1, $s1, 0x6
    ctx->pc = 0x3c2b6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
    // 0x3c2b70: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x3c2b70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
label_3c2b74:
    // 0x3c2b74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2b78: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x3C2B78u;
    SET_GPR_U32(ctx, 31, 0x3C2B80u);
    ctx->pc = 0x3C2B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2B78u;
    // 0x3c2b7c: 0x24a59b10  addiu       $a1, $a1, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x3C2B78u, 0x3C2B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2B80u;
label_3c2b80:
    // 0x3c2b80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2B80u;
    {
        const bool branch_taken_0x3c2b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B80u;
        // 0x3c2b84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2b80) {
            ctx->pc = 0x3C2B98u;
            goto label_3c2b98;
        }
    }
    ctx->pc = 0x3C2B88u;
    // 0x3c2b88: 0x3631000a  ori         $s1, $s1, 0xA
    ctx->pc = 0x3c2b88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)10);
    // 0x3c2b8c: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x3c2b8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
    // 0x3c2b90: 0x36220004  ori         $v0, $s1, 0x4
    ctx->pc = 0x3c2b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
    // 0x3c2b94: 0x50880b  movn        $s1, $v0, $s0
    ctx->pc = 0x3c2b94u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3c2b98:
    // 0x3c2b98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c2b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c2b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2ba0: 0xc0f09a8  jal         func_3C26A0
    ctx->pc = 0x3C2BA0u;
    SET_GPR_U32(ctx, 31, 0x3C2BA8u);
    ctx->pc = 0x3C2BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2BA0u;
    // 0x3c2ba4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C26A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C26A0u, 0x3C2BA0u, 0x3C2BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2BA8u;
label_3c2ba8:
    // 0x3c2ba8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3c2ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c2bac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3c2bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c2bb0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c2bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c2bb4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3c2bb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c2bb8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3c2bb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c2bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c2bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2BC0u;
        // 0x3c2bc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2BC8u;
}
