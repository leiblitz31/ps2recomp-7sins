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

// Function: sub_00133C50
// Address: 0x133c50 - 0x134070
void sub_00133C50_0x133c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133C50_0x133c50");
#endif

    switch (ctx->pc) {
        case 0x133cbcu: goto label_133cbc;
        case 0x133cc8u: goto label_133cc8;
        case 0x133cecu: goto label_133cec;
        case 0x133cfcu: goto label_133cfc;
        case 0x133d18u: goto label_133d18;
        case 0x133d28u: goto label_133d28;
        case 0x133d4cu: goto label_133d4c;
        case 0x133d6cu: goto label_133d6c;
        case 0x133d8cu: goto label_133d8c;
        case 0x133d98u: goto label_133d98;
        case 0x133dbcu: goto label_133dbc;
        case 0x133dd8u: goto label_133dd8;
        case 0x133e0cu: goto label_133e0c;
        case 0x133e28u: goto label_133e28;
        case 0x133e44u: goto label_133e44;
        case 0x133e50u: goto label_133e50;
        case 0x133e60u: goto label_133e60;
        case 0x133e84u: goto label_133e84;
        case 0x133ea0u: goto label_133ea0;
        case 0x133eb0u: goto label_133eb0;
        case 0x133eccu: goto label_133ecc;
        case 0x133ee0u: goto label_133ee0;
        case 0x133ef4u: goto label_133ef4;
        case 0x133f1cu: goto label_133f1c;
        case 0x133f34u: goto label_133f34;
        case 0x133f54u: goto label_133f54;
        case 0x133f78u: goto label_133f78;
        case 0x133fa8u: goto label_133fa8;
        case 0x133fe8u: goto label_133fe8;
        case 0x134030u: goto label_134030;
        case 0x13403cu: goto label_13403c;
        default: break;
    }

    ctx->pc = 0x133c50u;

    // 0x133c50: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x133c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x133c54: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x133c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x133c58: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x133c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x133c5c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x133c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x133c60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x133c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x133c64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x133c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x133c68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x133c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x133c6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x133c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x133c70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x133c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x133c74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x133c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133c7c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x133c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x133c80: 0xa3a500f0  sb          $a1, 0xF0($sp)
    ctx->pc = 0x133c80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 5));
    // 0x133c84: 0x93a200f0  lbu         $v0, 0xF0($sp)
    ctx->pc = 0x133c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x133c88: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x133C88u;
    {
        const bool branch_taken_0x133c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c88) {
            ctx->pc = 0x133CD0u;
            goto label_133cd0;
        }
    }
    ctx->pc = 0x133C90u;
    // 0x133c90: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x133c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133c94: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x133c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x133c98: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x133C98u;
    {
        const bool branch_taken_0x133c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c98) {
            ctx->pc = 0x133CD0u;
            goto label_133cd0;
        }
    }
    ctx->pc = 0x133CA0u;
    // 0x133ca0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x133ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133ca4: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x133ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x133ca8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x133ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133cac: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x133cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x133cb0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x133cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133cb4: 0xc04d36c  jal         func_134DB0
    ctx->pc = 0x133CB4u;
    SET_GPR_U32(ctx, 31, 0x133CBCu);
    ctx->pc = 0x134DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134DB0u, 0x133CB4u, 0x133CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CBCu;
label_133cbc:
    // 0x133cbc: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x133cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133cc0: 0xc04cea4  jal         func_133A90
    ctx->pc = 0x133CC0u;
    SET_GPR_U32(ctx, 31, 0x133CC8u);
    ctx->pc = 0x133A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133A90u, 0x133CC0u, 0x133CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CC8u;
label_133cc8:
    // 0x133cc8: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x133CC8u;
    {
        const bool branch_taken_0x133cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133cc8) {
            ctx->pc = 0x13403Cu;
            goto label_13403c;
        }
    }
    ctx->pc = 0x133CD0u;
label_133cd0:
    // 0x133cd0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x133cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x133cd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x133cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133cd8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x133cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x133cdc: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x133cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x133ce0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x133ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x133ce4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x133CE4u;
    SET_GPR_U32(ctx, 31, 0x133CECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x133CE4u, 0x133CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CECu;
label_133cec:
    // 0x133cec: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x133cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x133cf0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x133cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x133cf4: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x133CF4u;
    SET_GPR_U32(ctx, 31, 0x133CFCu);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x133CF4u, 0x133CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CFCu;
label_133cfc:
    // 0x133cfc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x133cfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133d00: 0x12e000ce  beqz        $s7, . + 4 + (0xCE << 2)
    ctx->pc = 0x133D00u;
    {
        const bool branch_taken_0x133d00 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d00) {
            ctx->pc = 0x13403Cu;
            goto label_13403c;
        }
    }
    ctx->pc = 0x133D08u;
    // 0x133d08: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x133d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133d0c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x133d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x133d10: 0xc085538  jal         func_2154E0
    ctx->pc = 0x133D10u;
    SET_GPR_U32(ctx, 31, 0x133D18u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x133D10u, 0x133D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D18u;
label_133d18:
    // 0x133d18: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x133d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x133d1c: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x133d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x133d20: 0xc09b03c  jal         func_26C0F0
    ctx->pc = 0x133D20u;
    SET_GPR_U32(ctx, 31, 0x133D28u);
    ctx->pc = 0x26C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C0F0u, 0x133D20u, 0x133D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D28u;
label_133d28:
    // 0x133d28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x133d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133d2c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x133d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133d30: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x133d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x133d34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x133d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x133d38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x133d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x133d3c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x133d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x133d40: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x133d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133d44: 0xc04cc18  jal         func_133060
    ctx->pc = 0x133D44u;
    SET_GPR_U32(ctx, 31, 0x133D4Cu);
    ctx->pc = 0x133060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133060u, 0x133D44u, 0x133D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D4Cu;
label_133d4c:
    // 0x133d4c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x133d4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133d50: 0x93a300f0  lbu         $v1, 0xF0($sp)
    ctx->pc = 0x133d50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x133d54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x133D54u;
    {
        const bool branch_taken_0x133d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d54) {
            ctx->pc = 0x133D6Cu;
            goto label_133d6c;
        }
    }
    ctx->pc = 0x133D5Cu;
    // 0x133d5c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x133d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133d60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133d64: 0xc04d21c  jal         func_134870
    ctx->pc = 0x133D64u;
    SET_GPR_U32(ctx, 31, 0x133D6Cu);
    ctx->pc = 0x134870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134870u, 0x133D64u, 0x133D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D6Cu;
label_133d6c:
    // 0x133d6c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x133d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133d70: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x133d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x133d74: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x133d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x133d78: 0x12c0009b  beqz        $s6, . + 4 + (0x9B << 2)
    ctx->pc = 0x133D78u;
    {
        const bool branch_taken_0x133d78 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d78) {
            ctx->pc = 0x133FE8u;
            goto label_133fe8;
        }
    }
    ctx->pc = 0x133D80u;
    // 0x133d80: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x133d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x133d84: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x133D84u;
    SET_GPR_U32(ctx, 31, 0x133D8Cu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x133D84u, 0x133D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D8Cu;
label_133d8c:
    // 0x133d8c: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x133d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x133d90: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x133D90u;
    {
        const bool branch_taken_0x133d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d90) {
            ctx->pc = 0x133DE4u;
            goto label_133de4;
        }
    }
    ctx->pc = 0x133D98u;
label_133d98:
    // 0x133d98: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x133d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133d9c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x133d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x133da0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x133da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x133da4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x133da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x133da8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x133da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x133dac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x133dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133db0: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x133db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x133db4: 0xc04cc00  jal         func_133000
    ctx->pc = 0x133DB4u;
    SET_GPR_U32(ctx, 31, 0x133DBCu);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x133DB4u, 0x133DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133DBCu;
label_133dbc:
    // 0x133dbc: 0x9042002c  lbu         $v0, 0x2C($v0)
    ctx->pc = 0x133dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x133dc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133DC0u;
    {
        const bool branch_taken_0x133dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133dc0) {
            ctx->pc = 0x133DD8u;
            goto label_133dd8;
        }
    }
    ctx->pc = 0x133DC8u;
    // 0x133dc8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x133dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x133dcc: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x133dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x133dd0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x133DD0u;
    SET_GPR_U32(ctx, 31, 0x133DD8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x133DD0u, 0x133DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133DD8u;
label_133dd8:
    // 0x133dd8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x133dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x133ddc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133de0: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x133de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_133de4:
    // 0x133de4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x133de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x133de8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x133de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x133dec: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x133decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133df0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x133df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x133df4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x133df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x133df8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x133df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x133dfc: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x133dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x133e00: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x133e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133e04: 0xc04cc18  jal         func_133060
    ctx->pc = 0x133E04u;
    SET_GPR_U32(ctx, 31, 0x133E0Cu);
    ctx->pc = 0x133060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133060u, 0x133E04u, 0x133E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E0Cu;
label_133e0c:
    // 0x133e0c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x133e0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x133e10: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x133e10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x133e14: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x133E14u;
    {
        const bool branch_taken_0x133e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133e14) {
            ctx->pc = 0x133D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133d98;
        }
    }
    ctx->pc = 0x133E1Cu;
    // 0x133e1c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x133e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x133e20: 0xc044598  jal         func_111660
    ctx->pc = 0x133E20u;
    SET_GPR_U32(ctx, 31, 0x133E28u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x133E20u, 0x133E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E28u;
label_133e28:
    // 0x133e28: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x133e28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x133e2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e30: 0x12800040  beqz        $s4, . + 4 + (0x40 << 2)
    ctx->pc = 0x133E30u;
    {
        const bool branch_taken_0x133e30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e30) {
            ctx->pc = 0x133F34u;
            goto label_133f34;
        }
    }
    ctx->pc = 0x133E38u;
    // 0x133e38: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x133e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x133e3c: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x133E3Cu;
    SET_GPR_U32(ctx, 31, 0x133E44u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x133E3Cu, 0x133E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E44u;
label_133e44:
    // 0x133e44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x133e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e48: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x133E48u;
    {
        const bool branch_taken_0x133e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e48) {
            ctx->pc = 0x133EB4u;
            goto label_133eb4;
        }
    }
    ctx->pc = 0x133E50u;
label_133e50:
    // 0x133e50: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x133e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x133e54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x133e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e58: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x133E58u;
    SET_GPR_U32(ctx, 31, 0x133E60u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x133E58u, 0x133E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E60u;
label_133e60:
    // 0x133e60: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x133e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133e64: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x133e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x133e68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x133e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x133e6c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x133e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x133e70: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x133e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x133e74: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x133e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x133e78: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x133e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133e7c: 0xc04cc00  jal         func_133000
    ctx->pc = 0x133E7Cu;
    SET_GPR_U32(ctx, 31, 0x133E84u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x133E7Cu, 0x133E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E84u;
label_133e84:
    // 0x133e84: 0x9042002d  lbu         $v0, 0x2D($v0)
    ctx->pc = 0x133e84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 45)));
    // 0x133e88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x133E88u;
    {
        const bool branch_taken_0x133e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e88) {
            ctx->pc = 0x133EB0u;
            goto label_133eb0;
        }
    }
    ctx->pc = 0x133E90u;
    // 0x133e90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x133e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x133e94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x133e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e98: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x133E98u;
    SET_GPR_U32(ctx, 31, 0x133EA0u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x133E98u, 0x133EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EA0u;
label_133ea0:
    // 0x133ea0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x133ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x133ea4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ea8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x133EA8u;
    SET_GPR_U32(ctx, 31, 0x133EB0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x133EA8u, 0x133EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EB0u;
label_133eb0:
    // 0x133eb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x133eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_133eb4:
    // 0x133eb4: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x133eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x133eb8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x133EB8u;
    {
        const bool branch_taken_0x133eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133eb8) {
            ctx->pc = 0x133E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133e50;
        }
    }
    ctx->pc = 0x133EC0u;
    // 0x133ec0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x133ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x133ec4: 0xc044598  jal         func_111660
    ctx->pc = 0x133EC4u;
    SET_GPR_U32(ctx, 31, 0x133ECCu);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x133EC4u, 0x133ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133ECCu;
label_133ecc:
    // 0x133ecc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x133eccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ed0: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x133ED0u;
    {
        const bool branch_taken_0x133ed0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x133ed0) {
            ctx->pc = 0x133F24u;
            goto label_133f24;
        }
    }
    ctx->pc = 0x133ED8u;
    // 0x133ed8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x133ED8u;
    SET_GPR_U32(ctx, 31, 0x133EE0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x133ED8u, 0x133EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EE0u;
label_133ee0:
    // 0x133ee0: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x133ee0u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x133ee4: 0x2810  mfhi        $a1
    ctx->pc = 0x133ee4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x133ee8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x133ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x133eec: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x133EECu;
    SET_GPR_U32(ctx, 31, 0x133EF4u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x133EECu, 0x133EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EF4u;
label_133ef4:
    // 0x133ef4: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x133ef4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133ef8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x133ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133efc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x133efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x133f00: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x133f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x133f04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x133f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x133f08: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x133f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x133f0c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x133f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133f10: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x133f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f14: 0xc04cc00  jal         func_133000
    ctx->pc = 0x133F14u;
    SET_GPR_U32(ctx, 31, 0x133F1Cu);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x133F14u, 0x133F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F1Cu;
label_133f1c:
    // 0x133f1c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x133f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133f20: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x133f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_133f24:
    // 0x133f24: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x133f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x133f28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x133f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133f2c: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x133F2Cu;
    SET_GPR_U32(ctx, 31, 0x133F34u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x133F2Cu, 0x133F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F34u;
label_133f34:
    // 0x133f34: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x133F34u;
    {
        const bool branch_taken_0x133f34 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x133f34) {
            ctx->pc = 0x133F44u;
            goto label_133f44;
        }
    }
    ctx->pc = 0x133F3Cu;
    // 0x133f3c: 0x16600026  bnez        $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x133F3Cu;
    {
        const bool branch_taken_0x133f3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x133f3c) {
            ctx->pc = 0x133FD8u;
            goto label_133fd8;
        }
    }
    ctx->pc = 0x133F44u;
label_133f44:
    // 0x133f44: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x133f44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x133f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f4c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x133F4Cu;
    {
        const bool branch_taken_0x133f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133f4c) {
            ctx->pc = 0x133FC4u;
            goto label_133fc4;
        }
    }
    ctx->pc = 0x133F54u;
label_133f54:
    // 0x133f54: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x133f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133f58: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x133f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x133f5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x133f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x133f60: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x133f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x133f64: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x133f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x133f68: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x133f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133f6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x133f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f70: 0xc04cc00  jal         func_133000
    ctx->pc = 0x133F70u;
    SET_GPR_U32(ctx, 31, 0x133F78u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x133F70u, 0x133F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F78u;
label_133f78:
    // 0x133f78: 0x9042002d  lbu         $v0, 0x2D($v0)
    ctx->pc = 0x133f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 45)));
    // 0x133f7c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x133F7Cu;
    {
        const bool branch_taken_0x133f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133f7c) {
            ctx->pc = 0x133FC0u;
            goto label_133fc0;
        }
    }
    ctx->pc = 0x133F84u;
    // 0x133f84: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x133f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133f88: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x133f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x133f8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x133f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x133f90: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x133f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x133f94: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x133f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x133f98: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x133f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133f9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x133f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133fa0: 0xc04cc00  jal         func_133000
    ctx->pc = 0x133FA0u;
    SET_GPR_U32(ctx, 31, 0x133FA8u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x133FA0u, 0x133FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FA8u;
label_133fa8:
    // 0x133fa8: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x133fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133fac: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x133facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x133fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133fb4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x133fb4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x133fb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x133FB8u;
    {
        const bool branch_taken_0x133fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133fb8) {
            ctx->pc = 0x133FC4u;
            goto label_133fc4;
        }
    }
    ctx->pc = 0x133FC0u;
label_133fc0:
    // 0x133fc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x133fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_133fc4:
    // 0x133fc4: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x133FC4u;
    {
        const bool branch_taken_0x133fc4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x133fc4) {
            ctx->pc = 0x133FD8u;
            goto label_133fd8;
        }
    }
    ctx->pc = 0x133FCCu;
    // 0x133fcc: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x133fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x133fd0: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x133FD0u;
    {
        const bool branch_taken_0x133fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133fd0) {
            ctx->pc = 0x133F54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133f54;
        }
    }
    ctx->pc = 0x133FD8u;
label_133fd8:
    // 0x133fd8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x133fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x133fdc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x133fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133fe0: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x133FE0u;
    SET_GPR_U32(ctx, 31, 0x133FE8u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x133FE0u, 0x133FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FE8u;
label_133fe8:
    // 0x133fe8: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x133fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133fec: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x133fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x133ff0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x133ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133ff4: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x133ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x133ff8: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x133ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133ffc: 0xac640040  sw          $a0, 0x40($v1)
    ctx->pc = 0x133ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
    // 0x134000: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x134000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x134004: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x134004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x134008: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x134008u;
    {
        const bool branch_taken_0x134008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x134008) {
            ctx->pc = 0x13403Cu;
            goto label_13403c;
        }
    }
    ctx->pc = 0x134010u;
    // 0x134010: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x134010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x134014: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x134014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x134018: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x134018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13401c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13401Cu;
    {
        const bool branch_taken_0x13401c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13401c) {
            ctx->pc = 0x13403Cu;
            goto label_13403c;
        }
    }
    ctx->pc = 0x134024u;
    // 0x134024: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x134024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x134028: 0xc04d36c  jal         func_134DB0
    ctx->pc = 0x134028u;
    SET_GPR_U32(ctx, 31, 0x134030u);
    ctx->pc = 0x134DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134DB0u, 0x134028u, 0x134030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134030u;
label_134030:
    // 0x134030: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x134030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x134034: 0xc04cea4  jal         func_133A90
    ctx->pc = 0x134034u;
    SET_GPR_U32(ctx, 31, 0x13403Cu);
    ctx->pc = 0x133A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133A90u, 0x134034u, 0x13403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13403Cu;
label_13403c:
    // 0x13403c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13403cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x134040: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x134040u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x134044: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x134044u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x134048: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x134048u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13404c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13404cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134050: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x134050u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134054: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x134054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134058: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x134058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13405c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13405cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134060: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134064: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x134064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x134068: 0x3e00008  jr          $ra
    ctx->pc = 0x134068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134070u;
}
