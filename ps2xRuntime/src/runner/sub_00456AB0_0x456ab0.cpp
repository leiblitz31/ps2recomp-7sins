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

// Function: sub_00456AB0
// Address: 0x456ab0 - 0x456b90
void sub_00456AB0_0x456ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456AB0_0x456ab0");
#endif

    switch (ctx->pc) {
        case 0x456adcu: goto label_456adc;
        case 0x456aecu: goto label_456aec;
        case 0x456b10u: goto label_456b10;
        case 0x456b20u: goto label_456b20;
        case 0x456b2cu: goto label_456b2c;
        case 0x456b3cu: goto label_456b3c;
        case 0x456b54u: goto label_456b54;
        case 0x456b64u: goto label_456b64;
        default: break;
    }

    ctx->pc = 0x456ab0u;

    // 0x456ab0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x456ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x456ab4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x456ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x456ab8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x456ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x456abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x456abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x456ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x456ac4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x456ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x456ac8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x456ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456acc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x456accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456ad0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x456ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x456ad4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x456AD4u;
    SET_GPR_U32(ctx, 31, 0x456ADCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x456AD4u, 0x456ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456ADCu;
label_456adc:
    // 0x456adc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x456adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456ae0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x456ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x456ae4: 0xc1159c4  jal         func_456710
    ctx->pc = 0x456AE4u;
    SET_GPR_U32(ctx, 31, 0x456AECu);
    ctx->pc = 0x456710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456710u, 0x456AE4u, 0x456AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456AECu;
label_456aec:
    // 0x456aec: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x456aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x456af0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x456af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x456af4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x456af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x456af8: 0x24a5e490  addiu       $a1, $a1, -0x1B70
    ctx->pc = 0x456af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960272));
    // 0x456afc: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x456afcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x456b00: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x456b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456b04: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x456b04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456b08: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x456B08u;
    SET_GPR_U32(ctx, 31, 0x456B10u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x456B08u, 0x456B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456B10u;
label_456b10:
    // 0x456b10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x456b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x456b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x456b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456b18: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x456B18u;
    SET_GPR_U32(ctx, 31, 0x456B20u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x456B18u, 0x456B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456B20u;
label_456b20:
    // 0x456b20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x456b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456b24: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x456B24u;
    {
        const bool branch_taken_0x456b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456b24) {
            ctx->pc = 0x456B58u;
            goto label_456b58;
        }
    }
    ctx->pc = 0x456B2Cu;
label_456b2c:
    // 0x456b2c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x456b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x456b30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x456b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456b34: 0xc1159d0  jal         func_456740
    ctx->pc = 0x456B34u;
    SET_GPR_U32(ctx, 31, 0x456B3Cu);
    ctx->pc = 0x456740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456740u, 0x456B34u, 0x456B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456B3Cu;
label_456b3c:
    // 0x456b3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x456b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456b40: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x456B40u;
    {
        const bool branch_taken_0x456b40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x456b40) {
            ctx->pc = 0x456B54u;
            goto label_456b54;
        }
    }
    ctx->pc = 0x456B48u;
    // 0x456b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x456b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456b4c: 0xc113cdc  jal         func_44F370
    ctx->pc = 0x456B4Cu;
    SET_GPR_U32(ctx, 31, 0x456B54u);
    ctx->pc = 0x44F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F370u, 0x456B4Cu, 0x456B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456B54u;
label_456b54:
    // 0x456b54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x456b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_456b58:
    // 0x456b58: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x456b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x456b5c: 0xc1159c4  jal         func_456710
    ctx->pc = 0x456B5Cu;
    SET_GPR_U32(ctx, 31, 0x456B64u);
    ctx->pc = 0x456710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456710u, 0x456B5Cu, 0x456B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456B64u;
label_456b64:
    // 0x456b64: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x456b64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x456b68: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x456B68u;
    {
        const bool branch_taken_0x456b68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x456b68) {
            ctx->pc = 0x456B2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456b2c;
        }
    }
    ctx->pc = 0x456B70u;
    // 0x456b70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x456b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x456b74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x456b74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x456b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x456b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x456b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x456b80: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x456b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x456b84: 0x3e00008  jr          $ra
    ctx->pc = 0x456B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x456B8Cu;
    // 0x456b8c: 0x0  nop
    ctx->pc = 0x456b8cu;
    // NOP
    ctx->pc = 0x456b90u;
}
