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

// Function: sub_003D2E88
// Address: 0x3d2e88 - 0x3d3138
void sub_003D2E88_0x3d2e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2E88_0x3d2e88");
#endif

    switch (ctx->pc) {
        case 0x3d2ed0u: goto label_3d2ed0;
        case 0x3d2ee0u: goto label_3d2ee0;
        case 0x3d2f00u: goto label_3d2f00;
        case 0x3d2f0cu: goto label_3d2f0c;
        case 0x3d2f18u: goto label_3d2f18;
        case 0x3d2f28u: goto label_3d2f28;
        case 0x3d2f30u: goto label_3d2f30;
        case 0x3d2f44u: goto label_3d2f44;
        case 0x3d2f68u: goto label_3d2f68;
        case 0x3d2f7cu: goto label_3d2f7c;
        case 0x3d2fa0u: goto label_3d2fa0;
        case 0x3d3000u: goto label_3d3000;
        case 0x3d300cu: goto label_3d300c;
        case 0x3d3018u: goto label_3d3018;
        case 0x3d3038u: goto label_3d3038;
        case 0x3d3040u: goto label_3d3040;
        case 0x3d3054u: goto label_3d3054;
        case 0x3d3078u: goto label_3d3078;
        case 0x3d308cu: goto label_3d308c;
        case 0x3d30b0u: goto label_3d30b0;
        case 0x3d30f8u: goto label_3d30f8;
        case 0x3d3100u: goto label_3d3100;
        default: break;
    }

    ctx->pc = 0x3d2e88u;

    // 0x3d2e88: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3d2e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3d2e8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d2e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2e90: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x3d2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x3d2e94: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3d2e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x3d2e98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d2e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2e9c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3d2e9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2ea0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3d2ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x3d2ea4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x3d2ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d2ea8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3d2ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3d2eac: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3d2eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x3d2eb0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3d2eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x3d2eb4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3d2eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x3d2eb8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3d2eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3d2ebc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3d2ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x3d2ec0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3d2ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x3d2ec4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d2ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d2ec8: 0xc0f4df6  jal         func_3D37D8
    ctx->pc = 0x3D2EC8u;
    SET_GPR_U32(ctx, 31, 0x3D2ED0u);
    ctx->pc = 0x3D2ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2EC8u;
    // 0x3d2ecc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D37D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D37D8u, 0x3D2EC8u, 0x3D2ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2ED0u;
label_3d2ed0:
    // 0x3d2ed0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3d2ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x3d2ed4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3d2ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d2ed8: 0xc103642  jal         func_40D908
    ctx->pc = 0x3D2ED8u;
    SET_GPR_U32(ctx, 31, 0x3D2EE0u);
    ctx->pc = 0x3D2EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2ED8u;
    // 0x3d2edc: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3D2ED8u, 0x3D2EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2EE0u;
label_3d2ee0:
    // 0x3d2ee0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d2ee0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2ee4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3d2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3d2ee8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3D2EE8u;
    {
        const bool branch_taken_0x3d2ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2EE8u;
        // 0x3d2eec: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2ee8) {
            ctx->pc = 0x3D2FE0u;
            goto label_3d2fe0;
        }
    }
    ctx->pc = 0x3D2EF0u;
    // 0x3d2ef0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x3d2ef0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2ef4: 0x2457b1e0  addiu       $s7, $v0, -0x4E20
    ctx->pc = 0x3d2ef4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x3d2ef8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d2ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d2efc: 0x0  nop
    ctx->pc = 0x3d2efcu;
    // NOP
label_3d2f00:
    // 0x3d2f00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d2f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2f04: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D2F04u;
    SET_GPR_U32(ctx, 31, 0x3D2F0Cu);
    ctx->pc = 0x3D2F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2F04u;
    // 0x3d2f08: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D2F04u, 0x3D2F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2F0Cu;
label_3d2f0c:
    // 0x3d2f0c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3d2f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d2f10: 0xc0c8ea8  jal         func_323AA0
    ctx->pc = 0x3D2F10u;
    SET_GPR_U32(ctx, 31, 0x3D2F18u);
    ctx->pc = 0x3D2F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2F10u;
    // 0x3d2f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AA0u, 0x3D2F10u, 0x3D2F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2F18u;
label_3d2f18:
    // 0x3d2f18: 0x8ee3000c  lw          $v1, 0xC($s7)
    ctx->pc = 0x3d2f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x3d2f1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d2f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2f20: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3d2f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3d2f24: 0x26560001  addiu       $s6, $s2, 0x1
    ctx->pc = 0x3d2f24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3d2f28:
    // 0x3d2f28: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3D2F28u;
    SET_GPR_U32(ctx, 31, 0x3D2F30u);
    ctx->pc = 0x3D2F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2F28u;
    // 0x3d2f2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3D2F28u, 0x3D2F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2F30u;
label_3d2f30:
    // 0x3d2f30: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x3d2f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d2f34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D2F34u;
    {
        const bool branch_taken_0x3d2f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2F34u;
        // 0x3d2f38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2f34) {
            ctx->pc = 0x3D2F54u;
            goto label_3d2f54;
        }
    }
    ctx->pc = 0x3D2F3Cu;
    // 0x3d2f3c: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D2F3Cu;
    SET_GPR_U32(ctx, 31, 0x3D2F44u);
    ctx->pc = 0x3D2F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2F3Cu;
    // 0x3d2f40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D2F3Cu, 0x3D2F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2F44u;
label_3d2f44:
    // 0x3d2f44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3d2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d2f48: 0x5623fff7  bnel        $s1, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3D2F48u;
    {
        const bool branch_taken_0x3d2f48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d2f48) {
            ctx->pc = 0x3D2F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2F48u;
            // 0x3d2f4c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d2f28;
        }
    }
    ctx->pc = 0x3D2F50u;
    // 0x3d2f50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d2f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d2f54:
    // 0x3d2f54: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3D2F54u;
    {
        const bool branch_taken_0x3d2f54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2F54u;
        // 0x3d2f58: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2f54) {
            ctx->pc = 0x3D2FA0u;
            goto label_3d2fa0;
        }
    }
    ctx->pc = 0x3D2F5Cu;
    // 0x3d2f5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d2f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2f60: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3D2F60u;
    SET_GPR_U32(ctx, 31, 0x3D2F68u);
    ctx->pc = 0x3D2F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2F60u;
    // 0x3d2f64: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3D2F60u, 0x3D2F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2F68u;
label_3d2f68:
    // 0x3d2f68: 0x8e120018  lw          $s2, 0x18($s0)
    ctx->pc = 0x3d2f68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3d2f6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d2f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2f70: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3d2f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3d2f74: 0xc0c8d72  jal         func_3235C8
    ctx->pc = 0x3D2F74u;
    SET_GPR_U32(ctx, 31, 0x3D2F7Cu);
    ctx->pc = 0x3D2F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2F74u;
    // 0x3d2f78: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235C8u, 0x3D2F74u, 0x3D2F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2F7Cu;
label_3d2f7c:
    // 0x3d2f7c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D2F7Cu;
    {
        const bool branch_taken_0x3d2f7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2F7Cu;
        // 0x3d2f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2f7c) {
            ctx->pc = 0x3D2FA0u;
            goto label_3d2fa0;
        }
    }
    ctx->pc = 0x3D2F84u;
    // 0x3d2f84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3d2f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d2f88: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3d2f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3d2f8c: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x3d2f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3d2f90: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x3d2f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d2f94: 0x24c60007  addiu       $a2, $a2, 0x7
    ctx->pc = 0x3d2f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x3d2f98: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3D2F98u;
    SET_GPR_U32(ctx, 31, 0x3D2FA0u);
    ctx->pc = 0x3D2F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2F98u;
    // 0x3d2f9c: 0x630c2  srl         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3D2F98u, 0x3D2FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2FA0u;
label_3d2fa0:
    // 0x3d2fa0: 0x5280000a  beql        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3D2FA0u;
    {
        const bool branch_taken_0x3d2fa0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2fa0) {
            ctx->pc = 0x3D2FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2FA0u;
            // 0x3d2fa4: 0xa200000c  sb          $zero, 0xC($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2FCCu;
            goto label_3d2fcc;
        }
    }
    ctx->pc = 0x3D2FA8u;
    // 0x3d2fa8: 0xa21e000c  sb          $fp, 0xC($s0)
    ctx->pc = 0x3d2fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 30));
    // 0x3d2fac: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x3d2facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3d2fb0: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x3d2fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d2fb4: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x3d2fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x3d2fb8: 0xa203000e  sb          $v1, 0xE($s0)
    ctx->pc = 0x3d2fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d2fbc: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x3d2fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x3d2fc0: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x3d2fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d2fc4: 0x92830003  lbu         $v1, 0x3($s4)
    ctx->pc = 0x3d2fc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x3d2fc8: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x3d2fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
label_3d2fcc:
    // 0x3d2fcc: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3d2fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3d2fd0: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x3d2fd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2fd4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3d2fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d2fd8: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x3D2FD8u;
    {
        const bool branch_taken_0x3d2fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2FD8u;
        // 0x3d2fdc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2fd8) {
            ctx->pc = 0x3D2F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d2f00;
        }
    }
    ctx->pc = 0x3D2FE0u;
label_3d2fe0:
    // 0x3d2fe0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3d2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d2fe4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x3D2FE4u;
    {
        const bool branch_taken_0x3d2fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2FE4u;
        // 0x3d2fe8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2fe4) {
            ctx->pc = 0x3D30F0u;
            goto label_3d30f0;
        }
    }
    ctx->pc = 0x3D2FECu;
    // 0x3d2fec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d2ff0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x3d2ff0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2ff4: 0x2457b1e0  addiu       $s7, $v0, -0x4E20
    ctx->pc = 0x3d2ff4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x3d2ff8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d2ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d2ffc: 0x0  nop
    ctx->pc = 0x3d2ffcu;
    // NOP
label_3d3000:
    // 0x3d3000: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d3000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3004: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D3004u;
    SET_GPR_U32(ctx, 31, 0x3D300Cu);
    ctx->pc = 0x3D3008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3004u;
    // 0x3d3008: 0x26560001  addiu       $s6, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D3004u, 0x3D300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D300Cu;
label_3d300c:
    // 0x3d300c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3d300cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d3010: 0xc0c8ecc  jal         func_323B30
    ctx->pc = 0x3D3010u;
    SET_GPR_U32(ctx, 31, 0x3D3018u);
    ctx->pc = 0x3D3014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3010u;
    // 0x3d3014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B30u, 0x3D3010u, 0x3D3018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3018u;
label_3d3018:
    // 0x3d3018: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d3018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d301c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3d301cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3d3020: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3d3020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3d3024: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3d3024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3d3028: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3D3028u;
    {
        const bool branch_taken_0x3d3028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3028u;
        // 0x3d302c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3028) {
            ctx->pc = 0x3D30B0u;
            goto label_3d30b0;
        }
    }
    ctx->pc = 0x3D3030u;
    // 0x3d3030: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d3030u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3034: 0x0  nop
    ctx->pc = 0x3d3034u;
    // NOP
label_3d3038:
    // 0x3d3038: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3D3038u;
    SET_GPR_U32(ctx, 31, 0x3D3040u);
    ctx->pc = 0x3D303Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3038u;
    // 0x3d303c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3D3038u, 0x3D3040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3040u;
label_3d3040:
    // 0x3d3040: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x3d3040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d3044: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D3044u;
    {
        const bool branch_taken_0x3d3044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3044u;
        // 0x3d3048: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3044) {
            ctx->pc = 0x3D3064u;
            goto label_3d3064;
        }
    }
    ctx->pc = 0x3D304Cu;
    // 0x3d304c: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D304Cu;
    SET_GPR_U32(ctx, 31, 0x3D3054u);
    ctx->pc = 0x3D3050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D304Cu;
    // 0x3d3050: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D304Cu, 0x3D3054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3054u;
label_3d3054:
    // 0x3d3054: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3d3054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d3058: 0x5623fff7  bnel        $s1, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3D3058u;
    {
        const bool branch_taken_0x3d3058 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d3058) {
            ctx->pc = 0x3D305Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3058u;
            // 0x3d305c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3038;
        }
    }
    ctx->pc = 0x3D3060u;
    // 0x3d3060: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d3060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3064:
    // 0x3d3064: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3D3064u;
    {
        const bool branch_taken_0x3d3064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3064u;
        // 0x3d3068: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3064) {
            ctx->pc = 0x3D30B0u;
            goto label_3d30b0;
        }
    }
    ctx->pc = 0x3D306Cu;
    // 0x3d306c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d306cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3070: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3D3070u;
    SET_GPR_U32(ctx, 31, 0x3D3078u);
    ctx->pc = 0x3D3074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3070u;
    // 0x3d3074: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3D3070u, 0x3D3078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3078u;
label_3d3078:
    // 0x3d3078: 0x8e120018  lw          $s2, 0x18($s0)
    ctx->pc = 0x3d3078u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3d307c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d307cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3080: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3d3080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3d3084: 0xc0c8d72  jal         func_3235C8
    ctx->pc = 0x3D3084u;
    SET_GPR_U32(ctx, 31, 0x3D308Cu);
    ctx->pc = 0x3D3088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3084u;
    // 0x3d3088: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235C8u, 0x3D3084u, 0x3D308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D308Cu;
label_3d308c:
    // 0x3d308c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D308Cu;
    {
        const bool branch_taken_0x3d308c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D308Cu;
        // 0x3d3090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d308c) {
            ctx->pc = 0x3D30B0u;
            goto label_3d30b0;
        }
    }
    ctx->pc = 0x3D3094u;
    // 0x3d3094: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3d3094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d3098: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3d3098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3d309c: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x3d309cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3d30a0: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x3d30a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d30a4: 0x24c60007  addiu       $a2, $a2, 0x7
    ctx->pc = 0x3d30a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x3d30a8: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3D30A8u;
    SET_GPR_U32(ctx, 31, 0x3D30B0u);
    ctx->pc = 0x3D30ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D30A8u;
    // 0x3d30ac: 0x630c2  srl         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3D30A8u, 0x3D30B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D30B0u;
label_3d30b0:
    // 0x3d30b0: 0x5280000a  beql        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3D30B0u;
    {
        const bool branch_taken_0x3d30b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d30b0) {
            ctx->pc = 0x3D30B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D30B0u;
            // 0x3d30b4: 0xa200000c  sb          $zero, 0xC($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D30DCu;
            goto label_3d30dc;
        }
    }
    ctx->pc = 0x3D30B8u;
    // 0x3d30b8: 0xa21e000c  sb          $fp, 0xC($s0)
    ctx->pc = 0x3d30b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 30));
    // 0x3d30bc: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x3d30bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3d30c0: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x3d30c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d30c4: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x3d30c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x3d30c8: 0xa203000e  sb          $v1, 0xE($s0)
    ctx->pc = 0x3d30c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d30cc: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x3d30ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x3d30d0: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x3d30d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d30d4: 0x92830003  lbu         $v1, 0x3($s4)
    ctx->pc = 0x3d30d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x3d30d8: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x3d30d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
label_3d30dc:
    // 0x3d30dc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3d30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d30e0: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x3d30e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d30e4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3d30e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d30e8: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x3D30E8u;
    {
        const bool branch_taken_0x3d30e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D30E8u;
        // 0x3d30ec: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d30e8) {
            ctx->pc = 0x3D3000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3000;
        }
    }
    ctx->pc = 0x3D30F0u;
label_3d30f0:
    // 0x3d30f0: 0xc103684  jal         func_40DA10
    ctx->pc = 0x3D30F0u;
    SET_GPR_U32(ctx, 31, 0x3D30F8u);
    ctx->pc = 0x3D30F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D30F0u;
    // 0x3d30f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D30F0u, 0x3D30F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D30F8u;
label_3d30f8:
    // 0x3d30f8: 0xc0f5238  jal         func_3D48E0
    ctx->pc = 0x3D30F8u;
    SET_GPR_U32(ctx, 31, 0x3D3100u);
    ctx->pc = 0x3D30FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D30F8u;
    // 0x3d30fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D48E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D48E0u, 0x3D30F8u, 0x3D3100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3100u;
label_3d3100:
    // 0x3d3100: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3d3100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d3104: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3d3104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3d3108: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3d3108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3d310c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3d310cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3d3110: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3d3110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3d3114: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3d3114u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d3118: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3d3118u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d311c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3d311cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d3120: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3d3120u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d3124: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3d3124u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d3128: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d3128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d312c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D312Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D312Cu;
        // 0x3d3130: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D312Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3134u;
    // 0x3d3134: 0x0  nop
    ctx->pc = 0x3d3134u;
    // NOP
    ctx->pc = 0x3d3138u;
}
