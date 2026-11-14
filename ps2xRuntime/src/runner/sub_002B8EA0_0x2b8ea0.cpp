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

// Function: sub_002B8EA0
// Address: 0x2b8ea0 - 0x2b9060
void sub_002B8EA0_0x2b8ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8EA0_0x2b8ea0");
#endif

    switch (ctx->pc) {
        case 0x2b8ed4u: goto label_2b8ed4;
        case 0x2b8ef8u: goto label_2b8ef8;
        case 0x2b8f0cu: goto label_2b8f0c;
        case 0x2b8f24u: goto label_2b8f24;
        case 0x2b8f38u: goto label_2b8f38;
        case 0x2b8f48u: goto label_2b8f48;
        case 0x2b8f58u: goto label_2b8f58;
        case 0x2b8f64u: goto label_2b8f64;
        case 0x2b8f70u: goto label_2b8f70;
        case 0x2b8f9cu: goto label_2b8f9c;
        case 0x2b8fd4u: goto label_2b8fd4;
        case 0x2b9000u: goto label_2b9000;
        case 0x2b9018u: goto label_2b9018;
        case 0x2b9034u: goto label_2b9034;
        default: break;
    }

    ctx->pc = 0x2b8ea0u;

    // 0x2b8ea0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b8ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b8ea4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b8ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b8ea8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b8ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b8eac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b8eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b8eb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b8eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b8eb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b8eb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b8eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b8ebc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2b8ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2b8ec0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2b8ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2b8ec4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2b8ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b8ec8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2b8ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b8ecc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2B8ECCu;
    SET_GPR_U32(ctx, 31, 0x2B8ED4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B8ECCu, 0x2B8ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8ED4u;
label_2b8ed4:
    // 0x2b8ed4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b8ed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8ed8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8edc: 0x90420005  lbu         $v0, 0x5($v0)
    ctx->pc = 0x2b8edcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x2b8ee0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B8EE0u;
    {
        const bool branch_taken_0x2b8ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8ee0) {
            ctx->pc = 0x2B8F14u;
            goto label_2b8f14;
        }
    }
    ctx->pc = 0x2B8EE8u;
    // 0x2b8ee8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b8ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8eec: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2b8eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b8ef0: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x2B8EF0u;
    SET_GPR_U32(ctx, 31, 0x2B8EF8u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x2B8EF0u, 0x2B8EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8EF8u;
label_2b8ef8:
    // 0x2b8ef8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2b8ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8efc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b8efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b8f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f04: 0xc0ae4bc  jal         func_2B92F0
    ctx->pc = 0x2B8F04u;
    SET_GPR_U32(ctx, 31, 0x2B8F0Cu);
    ctx->pc = 0x2B92F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92F0u, 0x2B8F04u, 0x2B8F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F0Cu;
label_2b8f0c:
    // 0x2b8f0c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2B8F0Cu;
    {
        const bool branch_taken_0x2b8f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f0c) {
            ctx->pc = 0x2B9020u;
            goto label_2b9020;
        }
    }
    ctx->pc = 0x2B8F14u;
label_2b8f14:
    // 0x2b8f14: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b8f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8f18: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2b8f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b8f1c: 0xc041a68  jal         func_1069A0
    ctx->pc = 0x2B8F1Cu;
    SET_GPR_U32(ctx, 31, 0x2B8F24u);
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x2B8F1Cu, 0x2B8F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F24u;
label_2b8f24:
    // 0x2b8f24: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2b8f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8f28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b8f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b8f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f30: 0xc0ae4bc  jal         func_2B92F0
    ctx->pc = 0x2B8F30u;
    SET_GPR_U32(ctx, 31, 0x2B8F38u);
    ctx->pc = 0x2B92F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92F0u, 0x2B8F30u, 0x2B8F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F38u;
label_2b8f38:
    // 0x2b8f38: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8f3c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2b8f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b8f40: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x2B8F40u;
    SET_GPR_U32(ctx, 31, 0x2B8F48u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x2B8F40u, 0x2B8F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F48u;
label_2b8f48:
    // 0x2b8f48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b8f48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b8f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f50: 0xc041a60  jal         func_106980
    ctx->pc = 0x2B8F50u;
    SET_GPR_U32(ctx, 31, 0x2B8F58u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2B8F50u, 0x2B8F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F58u;
label_2b8f58:
    // 0x2b8f58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b8f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f5c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2B8F5Cu;
    {
        const bool branch_taken_0x2b8f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f5c) {
            ctx->pc = 0x2B900Cu;
            goto label_2b900c;
        }
    }
    ctx->pc = 0x2B8F64u;
label_2b8f64:
    // 0x2b8f64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b8f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b8f68: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x2B8F68u;
    SET_GPR_U32(ctx, 31, 0x2B8F70u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B8F68u, 0x2B8F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F70u;
label_2b8f70:
    // 0x2b8f70: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2b8f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b8f74: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B8F74u;
    {
        const bool branch_taken_0x2b8f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b8f74) {
            ctx->pc = 0x2B9008u;
            goto label_2b9008;
        }
    }
    ctx->pc = 0x2B8F7Cu;
    // 0x2b8f7c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8f80: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2b8f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b8f84: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2b8f84u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b8f88: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b8f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b8f8c: 0x24050483  addiu       $a1, $zero, 0x483
    ctx->pc = 0x2b8f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
    // 0x2b8f90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b8f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f94: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2B8F94u;
    SET_GPR_U32(ctx, 31, 0x2B8F9Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2B8F94u, 0x2B8F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F9Cu;
label_2b8f9c:
    // 0x2b8f9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b8f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b8fa0: 0x16820019  bne         $s4, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B8FA0u;
    {
        const bool branch_taken_0x2b8fa0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b8fa0) {
            ctx->pc = 0x2B9008u;
            goto label_2b9008;
        }
    }
    ctx->pc = 0x2B8FA8u;
    // 0x2b8fa8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b8fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8fac: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b8facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b8fb0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2b8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b8fb4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B8FB4u;
    {
        const bool branch_taken_0x2b8fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8fb4) {
            ctx->pc = 0x2B9008u;
            goto label_2b9008;
        }
    }
    ctx->pc = 0x2B8FBCu;
    // 0x2b8fbc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8fc0: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b8fc4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2b8fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b8fc8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2b8fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b8fcc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2B8FCCu;
    SET_GPR_U32(ctx, 31, 0x2B8FD4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B8FCCu, 0x2B8FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8FD4u;
label_2b8fd4:
    // 0x2b8fd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b8fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8fd8: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B8FD8u;
    {
        const bool branch_taken_0x2b8fd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8fd8) {
            ctx->pc = 0x2B9020u;
            goto label_2b9020;
        }
    }
    ctx->pc = 0x2B8FE0u;
    // 0x2b8fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b8fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8fe4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2b8fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2b8fe8: 0x24a5e048  addiu       $a1, $a1, -0x1FB8
    ctx->pc = 0x2b8fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959176));
    // 0x2b8fec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b8fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8ff0: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x2b8ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b8ff4: 0x240801f4  addiu       $t0, $zero, 0x1F4
    ctx->pc = 0x2b8ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2b8ff8: 0xc0a8484  jal         func_2A1210
    ctx->pc = 0x2B8FF8u;
    SET_GPR_U32(ctx, 31, 0x2B9000u);
    ctx->pc = 0x2A1210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1210u, 0x2B8FF8u, 0x2B9000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9000u;
label_2b9000:
    // 0x2b9000: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9000u;
    {
        const bool branch_taken_0x2b9000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9000) {
            ctx->pc = 0x2B9020u;
            goto label_2b9020;
        }
    }
    ctx->pc = 0x2B9008u;
label_2b9008:
    // 0x2b9008: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b9008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2b900c:
    // 0x2b900c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b900cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9010: 0xc041a14  jal         func_106850
    ctx->pc = 0x2B9010u;
    SET_GPR_U32(ctx, 31, 0x2B9018u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2B9010u, 0x2B9018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9018u;
label_2b9018:
    // 0x2b9018: 0x1602ffd2  bne         $s0, $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2B9018u;
    {
        const bool branch_taken_0x2b9018 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9018) {
            ctx->pc = 0x2B8F64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8f64;
        }
    }
    ctx->pc = 0x2B9020u;
label_2b9020:
    // 0x2b9020: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2b9020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b9024: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b9024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b9028: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x2b9028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b902c: 0xc08d48c  jal         func_235230
    ctx->pc = 0x2B902Cu;
    SET_GPR_U32(ctx, 31, 0x2B9034u);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x2B902Cu, 0x2B9034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9034u;
label_2b9034:
    // 0x2b9034: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b9034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b9038: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b9038u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b903c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b903cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b9040: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b9040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b9044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b904c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2b904cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b9050: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9058u;
    // 0x2b9058: 0x0  nop
    ctx->pc = 0x2b9058u;
    // NOP
    // 0x2b905c: 0x0  nop
    ctx->pc = 0x2b905cu;
    // NOP
    ctx->pc = 0x2b9060u;
}
