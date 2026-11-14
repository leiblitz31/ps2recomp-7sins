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

// Function: sub_002C4D90
// Address: 0x2c4d90 - 0x2c4f60
void sub_002C4D90_0x2c4d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4D90_0x2c4d90");
#endif

    switch (ctx->pc) {
        case 0x2c4dd8u: goto label_2c4dd8;
        case 0x2c4de8u: goto label_2c4de8;
        case 0x2c4e00u: goto label_2c4e00;
        case 0x2c4e2cu: goto label_2c4e2c;
        case 0x2c4e40u: goto label_2c4e40;
        case 0x2c4e54u: goto label_2c4e54;
        case 0x2c4e68u: goto label_2c4e68;
        case 0x2c4eb4u: goto label_2c4eb4;
        case 0x2c4ed8u: goto label_2c4ed8;
        case 0x2c4f10u: goto label_2c4f10;
        default: break;
    }

    ctx->pc = 0x2c4d90u;

    // 0x2c4d90: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c4d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2c4d94: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c4d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c4d98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c4d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c4d9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c4d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c4da0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c4da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c4da4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c4da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c4da8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c4dac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4db0: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2c4db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2c4db4: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x2c4db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x2c4db8: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x2c4db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x2c4dbc: 0xa3a700b0  sb          $a3, 0xB0($sp)
    ctx->pc = 0x2c4dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 7));
    // 0x2c4dc0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c4dc4: 0x8c52002c  lw          $s2, 0x2C($v0)
    ctx->pc = 0x2c4dc4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c4dc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4dcc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2c4dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c4dd0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C4DD0u;
    SET_GPR_U32(ctx, 31, 0x2C4DD8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C4DD0u, 0x2C4DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4DD8u;
label_2c4dd8:
    // 0x2c4dd8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c4dd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ddc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c4ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4de0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2C4DE0u;
    SET_GPR_U32(ctx, 31, 0x2C4DE8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2C4DE0u, 0x2C4DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4DE8u;
label_2c4de8:
    // 0x2c4de8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c4de8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4dec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2c4decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c4df0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2c4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c4df4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4DF4u;
    {
        const bool branch_taken_0x2c4df4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4df4) {
            ctx->pc = 0x2C4E1Cu;
            goto label_2c4e1c;
        }
    }
    ctx->pc = 0x2C4DFCu;
    // 0x2c4dfc: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x2c4dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_2c4e00:
    // 0x2c4e00: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2c4e00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4e04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c4e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c4e08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c4e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c4e0c: 0x0  nop
    ctx->pc = 0x2c4e0cu;
    // NOP
    // 0x2c4e10: 0x0  nop
    ctx->pc = 0x2c4e10u;
    // NOP
    // 0x2c4e14: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C4E14u;
    {
        const bool branch_taken_0x2c4e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4e14) {
            ctx->pc = 0x2C4E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4e00;
        }
    }
    ctx->pc = 0x2C4E1Cu;
label_2c4e1c:
    // 0x2c4e1c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2c4e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c4e20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c4e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e24: 0xc0968d8  jal         func_25A360
    ctx->pc = 0x2C4E24u;
    SET_GPR_U32(ctx, 31, 0x2C4E2Cu);
    ctx->pc = 0x25A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A360u, 0x2C4E24u, 0x2C4E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E2Cu;
label_2c4e2c:
    // 0x2c4e2c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x2c4e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x2c4e30: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2c4e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c4e34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c4e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4e38: 0xc0968d8  jal         func_25A360
    ctx->pc = 0x2C4E38u;
    SET_GPR_U32(ctx, 31, 0x2C4E40u);
    ctx->pc = 0x25A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A360u, 0x2C4E38u, 0x2C4E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E40u;
label_2c4e40:
    // 0x2c4e40: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x2c4e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x2c4e44: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2c4e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c4e48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c4e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4e4c: 0xc0968d8  jal         func_25A360
    ctx->pc = 0x2C4E4Cu;
    SET_GPR_U32(ctx, 31, 0x2C4E54u);
    ctx->pc = 0x25A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A360u, 0x2C4E4Cu, 0x2C4E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E54u;
label_2c4e54:
    // 0x2c4e54: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x2c4e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x2c4e58: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2c4e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c4e5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c4e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c4e60: 0xc0968d8  jal         func_25A360
    ctx->pc = 0x2C4E60u;
    SET_GPR_U32(ctx, 31, 0x2C4E68u);
    ctx->pc = 0x25A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A360u, 0x2C4E60u, 0x2C4E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E68u;
label_2c4e68:
    // 0x2c4e68: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x2c4e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x2c4e6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c4e6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e70: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2c4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c4e74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4E74u;
    {
        const bool branch_taken_0x2c4e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4e74) {
            ctx->pc = 0x2C4E84u;
            goto label_2c4e84;
        }
    }
    ctx->pc = 0x2C4E7Cu;
    // 0x2c4e7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c4e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4e80: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x2c4e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_2c4e84:
    // 0x2c4e84: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2c4e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c4e88: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x2c4e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2c4e8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4E8Cu;
    {
        const bool branch_taken_0x2c4e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4e8c) {
            ctx->pc = 0x2C4EA4u;
            goto label_2c4ea4;
        }
    }
    ctx->pc = 0x2C4E94u;
    // 0x2c4e94: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2c4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c4e98: 0x28410017  slti        $at, $v0, 0x17
    ctx->pc = 0x2c4e98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x2c4e9c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2C4E9Cu;
    {
        const bool branch_taken_0x2c4e9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4e9c) {
            ctx->pc = 0x2C4EC8u;
            goto label_2c4ec8;
        }
    }
    ctx->pc = 0x2C4EA4u;
label_2c4ea4:
    // 0x2c4ea4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2c4ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c4ea8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c4ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4eac: 0xc0b007c  jal         func_2C01F0
    ctx->pc = 0x2C4EACu;
    SET_GPR_U32(ctx, 31, 0x2C4EB4u);
    ctx->pc = 0x2C01F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C01F0u, 0x2C4EACu, 0x2C4EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4EB4u;
label_2c4eb4:
    // 0x2c4eb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4EB4u;
    {
        const bool branch_taken_0x2c4eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4eb4) {
            ctx->pc = 0x2C4EC8u;
            goto label_2c4ec8;
        }
    }
    ctx->pc = 0x2C4EBCu;
    // 0x2c4ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4ec0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2C4EC0u;
    {
        const bool branch_taken_0x2c4ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4ec0) {
            ctx->pc = 0x2C4F38u;
            goto label_2c4f38;
        }
    }
    ctx->pc = 0x2C4EC8u;
label_2c4ec8:
    // 0x2c4ec8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c4ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ecc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c4eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ed0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C4ED0u;
    {
        const bool branch_taken_0x2c4ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4ed0) {
            ctx->pc = 0x2C4F20u;
            goto label_2c4f20;
        }
    }
    ctx->pc = 0x2C4ED8u;
label_2c4ed8:
    // 0x2c4ed8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c4edc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c4ee0: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x2c4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2c4ee4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C4EE4u;
    {
        const bool branch_taken_0x2c4ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4ee4) {
            ctx->pc = 0x2C4F14u;
            goto label_2c4f14;
        }
    }
    ctx->pc = 0x2C4EECu;
    // 0x2c4eec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c4ef0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c4ef4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2c4ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c4ef8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2c4ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c4efc: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x2c4efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c4f00: 0x93a700b0  lbu         $a3, 0xB0($sp)
    ctx->pc = 0x2c4f00u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c4f04: 0x8c480070  lw          $t0, 0x70($v0)
    ctx->pc = 0x2c4f04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2c4f08: 0xc0b13d8  jal         func_2C4F60
    ctx->pc = 0x2C4F08u;
    SET_GPR_U32(ctx, 31, 0x2C4F10u);
    ctx->pc = 0x2C4F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4F60u, 0x2C4F08u, 0x2C4F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F10u;
label_2c4f10:
    // 0x2c4f10: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2c4f10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c4f14:
    // 0x2c4f14: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4F14u;
    {
        const bool branch_taken_0x2c4f14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4f14) {
            ctx->pc = 0x2C4F2Cu;
            goto label_2c4f2c;
        }
    }
    ctx->pc = 0x2C4F1Cu;
    // 0x2c4f1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c4f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c4f20:
    // 0x2c4f20: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2c4f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c4f24: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C4F24u;
    {
        const bool branch_taken_0x2c4f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4f24) {
            ctx->pc = 0x2C4ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4ed8;
        }
    }
    ctx->pc = 0x2C4F2Cu;
label_2c4f2c:
    // 0x2c4f2c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c4f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c4f30: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2c4f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2c4f34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c4f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4f38:
    // 0x2c4f38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c4f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4f3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c4f3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4f40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c4f40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4f44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c4f44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4f48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c4f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4f4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4f50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4f54: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2c4f54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2c4f58: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4F60u;
}
