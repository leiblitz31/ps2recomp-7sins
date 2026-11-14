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

// Function: sub_00242B80
// Address: 0x242b80 - 0x242df0
void sub_00242B80_0x242b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242B80_0x242b80");
#endif

    switch (ctx->pc) {
        case 0x242bc4u: goto label_242bc4;
        case 0x242bd8u: goto label_242bd8;
        case 0x242be4u: goto label_242be4;
        case 0x242c14u: goto label_242c14;
        case 0x242c3cu: goto label_242c3c;
        case 0x242c68u: goto label_242c68;
        case 0x242c78u: goto label_242c78;
        case 0x242ca8u: goto label_242ca8;
        case 0x242cd4u: goto label_242cd4;
        case 0x242ce0u: goto label_242ce0;
        case 0x242d1cu: goto label_242d1c;
        case 0x242d30u: goto label_242d30;
        case 0x242d44u: goto label_242d44;
        case 0x242d54u: goto label_242d54;
        case 0x242d80u: goto label_242d80;
        case 0x242da8u: goto label_242da8;
        case 0x242db8u: goto label_242db8;
        default: break;
    }

    ctx->pc = 0x242b80u;

    // 0x242b80: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x242b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x242b84: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x242b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x242b88: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x242b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x242b8c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x242b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x242b90: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x242b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x242b94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x242b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x242b98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x242b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x242b9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x242b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x242ba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x242ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x242ba4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x242ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x242ba8: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x242ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x242bac: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x242bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x242bb0: 0xafa600f0  sw          $a2, 0xF0($sp)
    ctx->pc = 0x242bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
    // 0x242bb4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x242bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x242bb8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x242bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x242bbc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x242BBCu;
    SET_GPR_U32(ctx, 31, 0x242BC4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x242BBCu, 0x242BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242BC4u;
label_242bc4:
    // 0x242bc4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x242bc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242bc8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x242bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x242bcc: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x242bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x242bd0: 0xc090cac  jal         func_2432B0
    ctx->pc = 0x242BD0u;
    SET_GPR_U32(ctx, 31, 0x242BD8u);
    ctx->pc = 0x2432B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2432B0u, 0x242BD0u, 0x242BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242BD8u;
label_242bd8:
    // 0x242bd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x242bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242bdc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x242BDCu;
    {
        const bool branch_taken_0x242bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242bdc) {
            ctx->pc = 0x242C04u;
            goto label_242c04;
        }
    }
    ctx->pc = 0x242BE4u;
label_242be4:
    // 0x242be4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x242be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x242be8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x242be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x242bec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242BECu;
    {
        const bool branch_taken_0x242bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x242bec) {
            ctx->pc = 0x242C00u;
            goto label_242c00;
        }
    }
    ctx->pc = 0x242BF4u;
    // 0x242bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242bf8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x242BF8u;
    {
        const bool branch_taken_0x242bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242bf8) {
            ctx->pc = 0x242DBCu;
            goto label_242dbc;
        }
    }
    ctx->pc = 0x242C00u;
label_242c00:
    // 0x242c00: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x242c00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_242c04:
    // 0x242c04: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x242c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x242c08: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x242c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x242c0c: 0xc090ca4  jal         func_243290
    ctx->pc = 0x242C0Cu;
    SET_GPR_U32(ctx, 31, 0x242C14u);
    ctx->pc = 0x243290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243290u, 0x242C0Cu, 0x242C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C14u;
label_242c14:
    // 0x242c14: 0x1642fff3  bne         $s2, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x242C14u;
    {
        const bool branch_taken_0x242c14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x242c14) {
            ctx->pc = 0x242BE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242be4;
        }
    }
    ctx->pc = 0x242C1Cu;
    // 0x242c1c: 0x10130066  beq         $zero, $s3, . + 4 + (0x66 << 2)
    ctx->pc = 0x242C1Cu;
    {
        const bool branch_taken_0x242c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x242c1c) {
            ctx->pc = 0x242DB8u;
            goto label_242db8;
        }
    }
    ctx->pc = 0x242C24u;
    // 0x242c24: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x242c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x242c28: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x242c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x242c2c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x242c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x242c30: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x242C30u;
    {
        const bool branch_taken_0x242c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x242c30) {
            ctx->pc = 0x242C58u;
            goto label_242c58;
        }
    }
    ctx->pc = 0x242C38u;
    // 0x242c38: 0x60b021  addu        $s6, $v1, $zero
    ctx->pc = 0x242c38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_242c3c:
    // 0x242c3c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x242c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x242c40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x242c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x242c44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x242c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x242c48: 0x0  nop
    ctx->pc = 0x242c48u;
    // NOP
    // 0x242c4c: 0x0  nop
    ctx->pc = 0x242c4cu;
    // NOP
    // 0x242c50: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x242C50u;
    {
        const bool branch_taken_0x242c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242c50) {
            ctx->pc = 0x242C3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242c3c;
        }
    }
    ctx->pc = 0x242C58u;
label_242c58:
    // 0x242c58: 0x24840034  addiu       $a0, $a0, 0x34
    ctx->pc = 0x242c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x242c5c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x242c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242c60: 0xc090b88  jal         func_242E20
    ctx->pc = 0x242C60u;
    SET_GPR_U32(ctx, 31, 0x242C68u);
    ctx->pc = 0x242E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242E20u, 0x242C60u, 0x242C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C68u;
label_242c68:
    // 0x242c68: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x242c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x242c6c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x242c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x242c70: 0xc090b7c  jal         func_242DF0
    ctx->pc = 0x242C70u;
    SET_GPR_U32(ctx, 31, 0x242C78u);
    ctx->pc = 0x242DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242DF0u, 0x242C70u, 0x242C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C78u;
label_242c78:
    // 0x242c78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x242c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242c7c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x242c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x242c80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x242c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x242c84: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x242c84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x242c88: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x242c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x242c8c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x242c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x242c90: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x242c90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
    // 0x242c94: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x242c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x242c98: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x242c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x242c9c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x242C9Cu;
    {
        const bool branch_taken_0x242c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x242c9c) {
            ctx->pc = 0x242CC4u;
            goto label_242cc4;
        }
    }
    ctx->pc = 0x242CA4u;
    // 0x242ca4: 0x60b821  addu        $s7, $v1, $zero
    ctx->pc = 0x242ca4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_242ca8:
    // 0x242ca8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x242ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x242cac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x242cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x242cb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x242cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x242cb4: 0x0  nop
    ctx->pc = 0x242cb4u;
    // NOP
    // 0x242cb8: 0x0  nop
    ctx->pc = 0x242cb8u;
    // NOP
    // 0x242cbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x242CBCu;
    {
        const bool branch_taken_0x242cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242cbc) {
            ctx->pc = 0x242CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242ca8;
        }
    }
    ctx->pc = 0x242CC4u;
label_242cc4:
    // 0x242cc4: 0x26640034  addiu       $a0, $s3, 0x34
    ctx->pc = 0x242cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x242cc8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x242cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ccc: 0xc090b88  jal         func_242E20
    ctx->pc = 0x242CCCu;
    SET_GPR_U32(ctx, 31, 0x242CD4u);
    ctx->pc = 0x242E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242E20u, 0x242CCCu, 0x242CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CD4u;
label_242cd4:
    // 0x242cd4: 0x26640034  addiu       $a0, $s3, 0x34
    ctx->pc = 0x242cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x242cd8: 0xc090b7c  jal         func_242DF0
    ctx->pc = 0x242CD8u;
    SET_GPR_U32(ctx, 31, 0x242CE0u);
    ctx->pc = 0x242DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242DF0u, 0x242CD8u, 0x242CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CE0u;
label_242ce0:
    // 0x242ce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x242ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ce4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x242ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x242ce8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x242ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x242cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242cf0: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x242cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x242cf4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x242cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x242cf8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x242cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x242cfc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x242cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x242d00: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x242d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x242d04: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x242d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x242d08: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x242d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x242d0c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x242d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x242d10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x242d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x242d14: 0xc085538  jal         func_2154E0
    ctx->pc = 0x242D14u;
    SET_GPR_U32(ctx, 31, 0x242D1Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x242D14u, 0x242D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D1Cu;
label_242d1c:
    // 0x242d1c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x242d1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d20: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x242d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x242d24: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x242d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x242d28: 0xc085538  jal         func_2154E0
    ctx->pc = 0x242D28u;
    SET_GPR_U32(ctx, 31, 0x242D30u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x242D28u, 0x242D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D30u;
label_242d30:
    // 0x242d30: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x242d30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x242d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d3c: 0xc09102c  jal         func_2440B0
    ctx->pc = 0x242D3Cu;
    SET_GPR_U32(ctx, 31, 0x242D44u);
    ctx->pc = 0x2440B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2440B0u, 0x242D3Cu, 0x242D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D44u;
label_242d44:
    // 0x242d44: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x242d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x242d48: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x242d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d4c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x242D4Cu;
    SET_GPR_U32(ctx, 31, 0x242D54u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x242D4Cu, 0x242D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D54u;
label_242d54:
    // 0x242d54: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x242d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x242d58: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x242d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x242d5c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x242d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x242d60: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x242d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242d64: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x242d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242d68: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x242d68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x242d6c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x242d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x242d70: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x242d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x242d74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x242d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d78: 0xc09107c  jal         func_2441F0
    ctx->pc = 0x242D78u;
    SET_GPR_U32(ctx, 31, 0x242D80u);
    ctx->pc = 0x2441F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441F0u, 0x242D78u, 0x242D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D80u;
label_242d80:
    // 0x242d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x242d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242d84: 0x0  nop
    ctx->pc = 0x242d84u;
    // NOP
    // 0x242d88: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x242d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x242d8c: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x242d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242d90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x242d90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x242d94: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x242d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x242d98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x242d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d9c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x242d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x242da0: 0xc090f14  jal         func_243C50
    ctx->pc = 0x242DA0u;
    SET_GPR_U32(ctx, 31, 0x242DA8u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x242DA0u, 0x242DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242DA8u;
label_242da8:
    // 0x242da8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x242da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242dac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242db0: 0xc09102c  jal         func_2440B0
    ctx->pc = 0x242DB0u;
    SET_GPR_U32(ctx, 31, 0x242DB8u);
    ctx->pc = 0x2440B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2440B0u, 0x242DB0u, 0x242DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242DB8u;
label_242db8:
    // 0x242db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242dbc:
    // 0x242dbc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x242dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x242dc0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x242dc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x242dc4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x242dc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x242dc8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x242dc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x242dcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x242dccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x242dd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x242dd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242dd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x242dd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242dd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242de0: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x242de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x242de4: 0x3e00008  jr          $ra
    ctx->pc = 0x242DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242DECu;
    // 0x242dec: 0x0  nop
    ctx->pc = 0x242decu;
    // NOP
    ctx->pc = 0x242df0u;
}
