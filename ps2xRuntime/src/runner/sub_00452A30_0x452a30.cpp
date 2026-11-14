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

// Function: sub_00452A30
// Address: 0x452a30 - 0x452bb0
void sub_00452A30_0x452a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452A30_0x452a30");
#endif

    switch (ctx->pc) {
        case 0x452a58u: goto label_452a58;
        case 0x452a68u: goto label_452a68;
        case 0x452a78u: goto label_452a78;
        case 0x452aa0u: goto label_452aa0;
        case 0x452aacu: goto label_452aac;
        case 0x452accu: goto label_452acc;
        case 0x452ad8u: goto label_452ad8;
        case 0x452afcu: goto label_452afc;
        case 0x452b0cu: goto label_452b0c;
        case 0x452b38u: goto label_452b38;
        case 0x452b48u: goto label_452b48;
        case 0x452b70u: goto label_452b70;
        case 0x452b80u: goto label_452b80;
        case 0x452b90u: goto label_452b90;
        default: break;
    }

    ctx->pc = 0x452a30u;

    // 0x452a30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x452a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x452a34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x452a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x452a38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x452a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x452a3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x452a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x452a40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x452a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x452a44: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x452a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x452a48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x452a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452a4c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x452a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x452a50: 0xc115014  jal         func_454050
    ctx->pc = 0x452A50u;
    SET_GPR_U32(ctx, 31, 0x452A58u);
    ctx->pc = 0x454050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x454050u, 0x452A50u, 0x452A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452A58u;
label_452a58:
    // 0x452a58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x452a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452a5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x452a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452a60: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x452A60u;
    {
        const bool branch_taken_0x452a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x452a60) {
            ctx->pc = 0x452AE0u;
            goto label_452ae0;
        }
    }
    ctx->pc = 0x452A68u;
label_452a68:
    // 0x452a68: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x452a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x452a6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x452a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452a70: 0xc114a74  jal         func_4529D0
    ctx->pc = 0x452A70u;
    SET_GPR_U32(ctx, 31, 0x452A78u);
    ctx->pc = 0x4529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529D0u, 0x452A70u, 0x452A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452A78u;
label_452a78:
    // 0x452a78: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x452a78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x452a7c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x452a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x452a80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x452A80u;
    {
        const bool branch_taken_0x452a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x452a80) {
            ctx->pc = 0x452AB0u;
            goto label_452ab0;
        }
    }
    ctx->pc = 0x452A88u;
    // 0x452a88: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x452a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x452a8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x452A8Cu;
    {
        const bool branch_taken_0x452a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x452a8c) {
            ctx->pc = 0x452AB0u;
            goto label_452ab0;
        }
    }
    ctx->pc = 0x452A94u;
    // 0x452a94: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x452a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x452a98: 0xc1148dc  jal         func_452370
    ctx->pc = 0x452A98u;
    SET_GPR_U32(ctx, 31, 0x452AA0u);
    ctx->pc = 0x452370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452370u, 0x452A98u, 0x452AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452AA0u;
label_452aa0:
    // 0x452aa0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x452aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x452aa4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x452AA4u;
    SET_GPR_U32(ctx, 31, 0x452AACu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x452AA4u, 0x452AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452AACu;
label_452aac:
    // 0x452aac: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x452aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_452ab0:
    // 0x452ab0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x452AB0u;
    {
        const bool branch_taken_0x452ab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x452ab0) {
            ctx->pc = 0x452ADCu;
            goto label_452adc;
        }
    }
    ctx->pc = 0x452AB8u;
    // 0x452ab8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x452AB8u;
    {
        const bool branch_taken_0x452ab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x452ab8) {
            ctx->pc = 0x452ADCu;
            goto label_452adc;
        }
    }
    ctx->pc = 0x452AC0u;
    // 0x452ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x452ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452ac4: 0xc114a68  jal         func_4529A0
    ctx->pc = 0x452AC4u;
    SET_GPR_U32(ctx, 31, 0x452ACCu);
    ctx->pc = 0x4529A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4529A0u, 0x452AC4u, 0x452ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452ACCu;
label_452acc:
    // 0x452acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x452accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452ad0: 0xc119c5c  jal         func_467170
    ctx->pc = 0x452AD0u;
    SET_GPR_U32(ctx, 31, 0x452AD8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x452AD0u, 0x452AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452AD8u;
label_452ad8:
    // 0x452ad8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x452ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_452adc:
    // 0x452adc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x452adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_452ae0:
    // 0x452ae0: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x452ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x452ae4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x452AE4u;
    {
        const bool branch_taken_0x452ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x452ae4) {
            ctx->pc = 0x452A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_452a68;
        }
    }
    ctx->pc = 0x452AECu;
    // 0x452aec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x452aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x452af0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x452af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x452af4: 0xc114a58  jal         func_452960
    ctx->pc = 0x452AF4u;
    SET_GPR_U32(ctx, 31, 0x452AFCu);
    ctx->pc = 0x452960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452960u, 0x452AF4u, 0x452AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452AFCu;
label_452afc:
    // 0x452afc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x452afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452b00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x452b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452b04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x452B04u;
    {
        const bool branch_taken_0x452b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x452b04) {
            ctx->pc = 0x452B10u;
            goto label_452b10;
        }
    }
    ctx->pc = 0x452B0Cu;
label_452b0c:
    // 0x452b0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x452b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_452b10:
    // 0x452b10: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x452b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x452b14: 0x0  nop
    ctx->pc = 0x452b14u;
    // NOP
    // 0x452b18: 0x0  nop
    ctx->pc = 0x452b18u;
    // NOP
    // 0x452b1c: 0x0  nop
    ctx->pc = 0x452b1cu;
    // NOP
    // 0x452b20: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x452B20u;
    {
        const bool branch_taken_0x452b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x452b20) {
            ctx->pc = 0x452B0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_452b0c;
        }
    }
    ctx->pc = 0x452B28u;
    // 0x452b28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x452b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x452b2c: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x452b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x452b30: 0xc114a58  jal         func_452960
    ctx->pc = 0x452B30u;
    SET_GPR_U32(ctx, 31, 0x452B38u);
    ctx->pc = 0x452960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452960u, 0x452B30u, 0x452B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452B38u;
label_452b38:
    // 0x452b38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x452b38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452b3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x452b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452b40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x452B40u;
    {
        const bool branch_taken_0x452b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x452b40) {
            ctx->pc = 0x452B4Cu;
            goto label_452b4c;
        }
    }
    ctx->pc = 0x452B48u;
label_452b48:
    // 0x452b48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x452b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_452b4c:
    // 0x452b4c: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x452b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x452b50: 0x0  nop
    ctx->pc = 0x452b50u;
    // NOP
    // 0x452b54: 0x0  nop
    ctx->pc = 0x452b54u;
    // NOP
    // 0x452b58: 0x0  nop
    ctx->pc = 0x452b58u;
    // NOP
    // 0x452b5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x452B5Cu;
    {
        const bool branch_taken_0x452b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x452b5c) {
            ctx->pc = 0x452B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_452b48;
        }
    }
    ctx->pc = 0x452B64u;
    // 0x452b64: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x452b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x452b68: 0xc114aec  jal         func_452BB0
    ctx->pc = 0x452B68u;
    SET_GPR_U32(ctx, 31, 0x452B70u);
    ctx->pc = 0x452BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452BB0u, 0x452B68u, 0x452B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452B70u;
label_452b70:
    // 0x452b70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x452b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x452b74: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x452b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x452b78: 0xc114aec  jal         func_452BB0
    ctx->pc = 0x452B78u;
    SET_GPR_U32(ctx, 31, 0x452B80u);
    ctx->pc = 0x452BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452BB0u, 0x452B78u, 0x452B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452B80u;
label_452b80:
    // 0x452b80: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x452b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x452b84: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x452b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x452b88: 0xc114aec  jal         func_452BB0
    ctx->pc = 0x452B88u;
    SET_GPR_U32(ctx, 31, 0x452B90u);
    ctx->pc = 0x452BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452BB0u, 0x452B88u, 0x452B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452B90u;
label_452b90:
    // 0x452b90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x452b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x452b94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x452b94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452b98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x452b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452b9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x452b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x452ba0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x452ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x452ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x452BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452BACu;
    // 0x452bac: 0x0  nop
    ctx->pc = 0x452bacu;
    // NOP
    ctx->pc = 0x452bb0u;
}
