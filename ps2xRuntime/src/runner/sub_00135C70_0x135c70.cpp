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

// Function: sub_00135C70
// Address: 0x135c70 - 0x135dd0
void sub_00135C70_0x135c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135C70_0x135c70");
#endif

    switch (ctx->pc) {
        case 0x135ca4u: goto label_135ca4;
        case 0x135cb8u: goto label_135cb8;
        case 0x135cdcu: goto label_135cdc;
        case 0x135d04u: goto label_135d04;
        case 0x135d28u: goto label_135d28;
        case 0x135d50u: goto label_135d50;
        case 0x135d80u: goto label_135d80;
        case 0x135d90u: goto label_135d90;
        case 0x135db4u: goto label_135db4;
        default: break;
    }

    ctx->pc = 0x135c70u;

    // 0x135c70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x135c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x135c74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x135c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x135c78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x135c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x135c7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135c80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135c84: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x135c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x135c88: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x135c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x135c8c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x135c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x135c90: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x135c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x135c94: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x135c94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x135c98: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x135c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135c9c: 0xc04cc18  jal         func_133060
    ctx->pc = 0x135C9Cu;
    SET_GPR_U32(ctx, 31, 0x135CA4u);
    ctx->pc = 0x133060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133060u, 0x135C9Cu, 0x135CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135CA4u;
label_135ca4:
    // 0x135ca4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x135ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x135ca8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x135ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x135cac: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x135cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x135cb0: 0xc041954  jal         func_106550
    ctx->pc = 0x135CB0u;
    SET_GPR_U32(ctx, 31, 0x135CB8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x135CB0u, 0x135CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135CB8u;
label_135cb8:
    // 0x135cb8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x135cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x135cbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x135cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135cc0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x135cc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135cc4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x135cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135cc8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x135cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x135ccc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x135cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135cd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x135cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135cd4: 0xc04d890  jal         func_136240
    ctx->pc = 0x135CD4u;
    SET_GPR_U32(ctx, 31, 0x135CDCu);
    ctx->pc = 0x136240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136240u, 0x135CD4u, 0x135CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135CDCu;
label_135cdc:
    // 0x135cdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x135cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ce0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x135ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ce4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x135ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135ce8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x135ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x135cec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x135cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135cf0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x135cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x135cf4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x135cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135cf8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x135cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x135cfc: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x135CFCu;
    SET_GPR_U32(ctx, 31, 0x135D04u);
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x135CFCu, 0x135D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D04u;
label_135d04:
    // 0x135d04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x135d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d08: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x135d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135d10: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x135D10u;
    {
        const bool branch_taken_0x135d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x135d10) {
            ctx->pc = 0x135D34u;
            goto label_135d34;
        }
    }
    ctx->pc = 0x135D18u;
    // 0x135d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d1c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x135d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135d20: 0xc04d7c4  jal         func_135F10
    ctx->pc = 0x135D20u;
    SET_GPR_U32(ctx, 31, 0x135D28u);
    ctx->pc = 0x135F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F10u, 0x135D20u, 0x135D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D28u;
label_135d28:
    // 0x135d28: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x135d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x135d2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x135D2Cu;
    {
        const bool branch_taken_0x135d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135d2c) {
            ctx->pc = 0x135D54u;
            goto label_135d54;
        }
    }
    ctx->pc = 0x135D34u;
label_135d34:
    // 0x135d34: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x135d34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x135d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d3c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x135d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135d40: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x135d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135d44: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x135d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x135d48: 0xc04d7a4  jal         func_135E90
    ctx->pc = 0x135D48u;
    SET_GPR_U32(ctx, 31, 0x135D50u);
    ctx->pc = 0x135E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135E90u, 0x135D48u, 0x135D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D50u;
label_135d50:
    // 0x135d50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x135d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135d54:
    // 0x135d54: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x135d54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135d58: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x135D58u;
    {
        const bool branch_taken_0x135d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135d58) {
            ctx->pc = 0x135D84u;
            goto label_135d84;
        }
    }
    ctx->pc = 0x135D60u;
    // 0x135d60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x135d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135d64: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x135d64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x135d68: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x135d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x135d6c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x135d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135d70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x135d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d74: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x135d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135d78: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x135D78u;
    SET_GPR_U32(ctx, 31, 0x135D80u);
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x135D78u, 0x135D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D80u;
label_135d80:
    // 0x135d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x135d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135d84:
    // 0x135d84: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x135d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135d88: 0xc04d788  jal         func_135E20
    ctx->pc = 0x135D88u;
    SET_GPR_U32(ctx, 31, 0x135D90u);
    ctx->pc = 0x135E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135E20u, 0x135D88u, 0x135D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D90u;
label_135d90:
    // 0x135d90: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x135d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x135d94: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x135d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x135d98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x135d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135d9c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x135d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x135da0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x135da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135da4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x135da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135da8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x135da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135dac: 0xc04d774  jal         func_135DD0
    ctx->pc = 0x135DACu;
    SET_GPR_U32(ctx, 31, 0x135DB4u);
    ctx->pc = 0x135DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DD0u, 0x135DACu, 0x135DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135DB4u;
label_135db4:
    // 0x135db4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x135db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135db8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x135db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135dbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135dc4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x135dc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x135dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x135DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135DD0u;
}
