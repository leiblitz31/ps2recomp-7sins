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

// Function: sub_00216ED0
// Address: 0x216ed0 - 0x2170f0
void sub_00216ED0_0x216ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216ED0_0x216ed0");
#endif

    switch (ctx->pc) {
        case 0x216fc4u: goto label_216fc4;
        case 0x217000u: goto label_217000;
        case 0x217020u: goto label_217020;
        case 0x217044u: goto label_217044;
        case 0x217080u: goto label_217080;
        case 0x2170a8u: goto label_2170a8;
        case 0x2170d4u: goto label_2170d4;
        default: break;
    }

    ctx->pc = 0x216ed0u;

    // 0x216ed0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x216ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x216ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x216ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x216ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x216ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x216edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x216edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x216ee0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x216ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x216ee4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x216ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x216ee8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x216ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x216eec: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x216eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x216ef0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x216ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x216ef4: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x216EF4u;
    {
        const bool branch_taken_0x216ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x216ef4) {
            ctx->pc = 0x2170D4u;
            goto label_2170d4;
        }
    }
    ctx->pc = 0x216EFCu;
    // 0x216efc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x216efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216f00: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x216f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x216f04: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x216f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216f08: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x216f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x216f0c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x216f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216f10: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x216f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x216f14: 0x418c3  sra         $v1, $a0, 3
    ctx->pc = 0x216f14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
    // 0x216f18: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216F18u;
    {
        const bool branch_taken_0x216f18 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x216f18) {
            ctx->pc = 0x216F28u;
            goto label_216f28;
        }
    }
    ctx->pc = 0x216F20u;
    // 0x216f20: 0x24820007  addiu       $v0, $a0, 0x7
    ctx->pc = 0x216f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x216f24: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x216f24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_216f28:
    // 0x216f28: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x216f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x216f2c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x216f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x216f30: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x216F30u;
    {
        const bool branch_taken_0x216f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216f30) {
            ctx->pc = 0x2170B0u;
            goto label_2170b0;
        }
    }
    ctx->pc = 0x216F38u;
    // 0x216f38: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x216f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x216f3c: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x216f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x216f40: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x216f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216f44: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x216f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216f48: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x216f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x216f4c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x216f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x216f50: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x216f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216f54: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x216f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x216f58: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x216f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x216f5c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x216f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216f60: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x216f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x216f64: 0x388c3  sra         $s1, $v1, 3
    ctx->pc = 0x216f64u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 3));
    // 0x216f68: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x216F68u;
    {
        const bool branch_taken_0x216f68 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x216f68) {
            ctx->pc = 0x216F78u;
            goto label_216f78;
        }
    }
    ctx->pc = 0x216F70u;
    // 0x216f70: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x216f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x216f74: 0x288c3  sra         $s1, $v0, 3
    ctx->pc = 0x216f74u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 3));
label_216f78:
    // 0x216f78: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x216f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216f7c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x216f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x216f80: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x216f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x216f84: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x216f84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x216f88: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x216F88u;
    {
        const bool branch_taken_0x216f88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x216f88) {
            ctx->pc = 0x217028u;
            goto label_217028;
        }
    }
    ctx->pc = 0x216F90u;
    // 0x216f90: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x216f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216f94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x216f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x216f98: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x216f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x216f9c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x216f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x216fa0: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x216fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216fa4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x216fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216fa8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x216fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216fac: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x216facu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x216fb0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x216fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x216fb4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x216fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x216fb8: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x216fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x216fbc: 0xc085d5c  jal         func_217570
    ctx->pc = 0x216FBCu;
    SET_GPR_U32(ctx, 31, 0x216FC4u);
    ctx->pc = 0x217570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217570u, 0x216FBCu, 0x216FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216FC4u;
label_216fc4:
    // 0x216fc4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x216fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216fc8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x216fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x216fcc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x216fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x216fd0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x216fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x216fd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x216fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x216fd8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x216fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x216fdc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x216fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x216fe0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x216fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x216fe4: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x216fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x216fe8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x216fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x216fec: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x216fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x216ff0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x216ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ff4: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x216ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x216ff8: 0xc085d28  jal         func_2174A0
    ctx->pc = 0x216FF8u;
    SET_GPR_U32(ctx, 31, 0x217000u);
    ctx->pc = 0x2174A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A0u, 0x216FF8u, 0x217000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217000u;
label_217000:
    // 0x217000: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x217000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x217004: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x217004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x217008: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x217008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21700c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x21700cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217010: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x217010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x217014: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x217014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x217018: 0xc085d10  jal         func_217440
    ctx->pc = 0x217018u;
    SET_GPR_U32(ctx, 31, 0x217020u);
    ctx->pc = 0x217440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217440u, 0x217018u, 0x217020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217020u;
label_217020:
    // 0x217020: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x217020u;
    {
        const bool branch_taken_0x217020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217020) {
            ctx->pc = 0x2170D4u;
            goto label_2170d4;
        }
    }
    ctx->pc = 0x217028u;
label_217028:
    // 0x217028: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x217028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21702c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x21702cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x217030: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x217030u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x217034: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x217034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x217038: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x217038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x21703c: 0xc085d00  jal         func_217400
    ctx->pc = 0x21703Cu;
    SET_GPR_U32(ctx, 31, 0x217044u);
    ctx->pc = 0x217400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217400u, 0x21703Cu, 0x217044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217044u;
label_217044:
    // 0x217044: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x217044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x217048: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x217048u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21704c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x21704cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x217050: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x217050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x217054: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x217054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x217058: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x217058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21705c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x21705cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x217060: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x217060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x217064: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x217064u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x217068: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x217068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21706c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21706cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217070: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x217070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x217074: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x217074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x217078: 0xc085d5c  jal         func_217570
    ctx->pc = 0x217078u;
    SET_GPR_U32(ctx, 31, 0x217080u);
    ctx->pc = 0x217570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217570u, 0x217078u, 0x217080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217080u;
label_217080:
    // 0x217080: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x217080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x217084: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x217084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x217088: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x217088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21708c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217090: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x217090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x217094: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x217094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x217098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21709c: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x21709cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2170a0: 0xc085d10  jal         func_217440
    ctx->pc = 0x2170A0u;
    SET_GPR_U32(ctx, 31, 0x2170A8u);
    ctx->pc = 0x217440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217440u, 0x2170A0u, 0x2170A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170A8u;
label_2170a8:
    // 0x2170a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2170A8u;
    {
        const bool branch_taken_0x2170a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2170a8) {
            ctx->pc = 0x2170D4u;
            goto label_2170d4;
        }
    }
    ctx->pc = 0x2170B0u;
label_2170b0:
    // 0x2170b0: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x2170b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x2170b4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2170b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2170b8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2170b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2170bc: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x2170bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2170c0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2170c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2170c4: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x2170c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2170c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2170c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2170cc: 0xc085c3c  jal         func_2170F0
    ctx->pc = 0x2170CCu;
    SET_GPR_U32(ctx, 31, 0x2170D4u);
    ctx->pc = 0x2170F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2170F0u, 0x2170CCu, 0x2170D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170D4u;
label_2170d4:
    // 0x2170d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2170d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2170d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2170d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2170dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2170dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2170e0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2170e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2170e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2170E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2170E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2170ECu;
    // 0x2170ec: 0x0  nop
    ctx->pc = 0x2170ecu;
    // NOP
    ctx->pc = 0x2170f0u;
}
