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

// Function: sub_00181050
// Address: 0x181050 - 0x181280
void sub_00181050_0x181050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181050_0x181050");
#endif

    switch (ctx->pc) {
        case 0x181154u: goto label_181154;
        case 0x181190u: goto label_181190;
        case 0x1811b0u: goto label_1811b0;
        case 0x1811d4u: goto label_1811d4;
        case 0x181210u: goto label_181210;
        case 0x181238u: goto label_181238;
        case 0x181264u: goto label_181264;
        default: break;
    }

    ctx->pc = 0x181050u;

    // 0x181050: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x181050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x181054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x181054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x181058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18105c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18105cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181060: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x181060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x181064: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x181064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x181068: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x181068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x18106c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x18106cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x181070: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x181070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x181074: 0x1060007b  beqz        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x181074u;
    {
        const bool branch_taken_0x181074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x181074) {
            ctx->pc = 0x181264u;
            goto label_181264;
        }
    }
    ctx->pc = 0x18107Cu;
    // 0x18107c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x18107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181080: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x181080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x181084: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x181084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181088: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x181088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18108c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x18108cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x181090: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x181090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x181094: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x181094u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x181098: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181098u;
    {
        const bool branch_taken_0x181098 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x181098) {
            ctx->pc = 0x1810A8u;
            goto label_1810a8;
        }
    }
    ctx->pc = 0x1810A0u;
    // 0x1810a0: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x1810a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1810a4: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1810a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_1810a8:
    // 0x1810a8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1810a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1810ac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1810acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1810b0: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1810B0u;
    {
        const bool branch_taken_0x1810b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1810b0) {
            ctx->pc = 0x181240u;
            goto label_181240;
        }
    }
    ctx->pc = 0x1810B8u;
    // 0x1810b8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1810b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1810bc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1810bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1810c0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1810c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1810c4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1810c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1810c8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1810c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1810cc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1810ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1810d0: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1810d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1810d4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1810d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1810d8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1810d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1810dc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1810dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1810e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1810e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1810e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1810e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1810e8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1810e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1810ec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1810ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1810f0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1810f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1810f4: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x1810f4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1810f8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1810F8u;
    {
        const bool branch_taken_0x1810f8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1810f8) {
            ctx->pc = 0x181108u;
            goto label_181108;
        }
    }
    ctx->pc = 0x181100u;
    // 0x181100: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x181100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x181104: 0x28903  sra         $s1, $v0, 4
    ctx->pc = 0x181104u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 4));
label_181108:
    // 0x181108: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x181108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18110c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x18110cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181110: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x181110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x181114: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x181114u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x181118: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x181118u;
    {
        const bool branch_taken_0x181118 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181118) {
            ctx->pc = 0x1811B8u;
            goto label_1811b8;
        }
    }
    ctx->pc = 0x181120u;
    // 0x181120: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x181120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181124: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x181124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181128: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x181128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18112c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18112cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x181130: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x181130u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x181134: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x181134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181138: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x181138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18113c: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x18113cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x181140: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x181140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x181144: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x181144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181148: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x181148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x18114c: 0xc0605c4  jal         func_181710
    ctx->pc = 0x18114Cu;
    SET_GPR_U32(ctx, 31, 0x181154u);
    ctx->pc = 0x181710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181710u, 0x18114Cu, 0x181154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181154u;
label_181154:
    // 0x181154: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x181154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181158: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x181158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18115c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x18115cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x181160: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x181160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x181164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181168: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x181168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x18116c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x18116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x181170: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x181170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x181174: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x181174u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x181178: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x181178u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x18117c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18117cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x181180: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x181180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181184: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x181184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x181188: 0xc060590  jal         func_181640
    ctx->pc = 0x181188u;
    SET_GPR_U32(ctx, 31, 0x181190u);
    ctx->pc = 0x181640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181640u, 0x181188u, 0x181190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181190u;
label_181190:
    // 0x181190: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x181190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x181194: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x181194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x181198: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x181198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18119c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x18119cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1811a0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1811a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1811a4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1811a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1811a8: 0xc060578  jal         func_1815E0
    ctx->pc = 0x1811A8u;
    SET_GPR_U32(ctx, 31, 0x1811B0u);
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1811A8u, 0x1811B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1811B0u;
label_1811b0:
    // 0x1811b0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1811B0u;
    {
        const bool branch_taken_0x1811b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1811b0) {
            ctx->pc = 0x181264u;
            goto label_181264;
        }
    }
    ctx->pc = 0x1811B8u;
label_1811b8:
    // 0x1811b8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1811b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1811bc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1811bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1811c0: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1811c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1811c4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1811c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1811c8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1811c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1811cc: 0xc060568  jal         func_1815A0
    ctx->pc = 0x1811CCu;
    SET_GPR_U32(ctx, 31, 0x1811D4u);
    ctx->pc = 0x1815A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815A0u, 0x1811CCu, 0x1811D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1811D4u;
label_1811d4:
    // 0x1811d4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1811d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1811d8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1811d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1811dc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1811dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1811e0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1811e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1811e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1811e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1811e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1811e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1811ec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1811ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1811f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1811f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1811f4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1811f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1811f8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1811f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1811fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1811fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181200: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x181200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181204: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x181204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x181208: 0xc0605c4  jal         func_181710
    ctx->pc = 0x181208u;
    SET_GPR_U32(ctx, 31, 0x181210u);
    ctx->pc = 0x181710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181710u, 0x181208u, 0x181210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181210u;
label_181210:
    // 0x181210: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x181210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181214: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x181214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x181218: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x181218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18121c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18121cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181220: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x181220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x181224: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x181224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x181228: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18122c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18122cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x181230: 0xc060578  jal         func_1815E0
    ctx->pc = 0x181230u;
    SET_GPR_U32(ctx, 31, 0x181238u);
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x181230u, 0x181238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181238u;
label_181238:
    // 0x181238: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x181238u;
    {
        const bool branch_taken_0x181238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181238) {
            ctx->pc = 0x181264u;
            goto label_181264;
        }
    }
    ctx->pc = 0x181240u;
label_181240:
    // 0x181240: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x181240u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x181244: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x181244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181248: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x181248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18124c: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x18124cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x181250: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x181250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x181254: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x181254u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x181258: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x181258u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18125c: 0xc0604a0  jal         func_181280
    ctx->pc = 0x18125Cu;
    SET_GPR_U32(ctx, 31, 0x181264u);
    ctx->pc = 0x181280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181280u, 0x18125Cu, 0x181264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181264u;
label_181264:
    // 0x181264: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18126c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18126cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181270: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x181270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x181274: 0x3e00008  jr          $ra
    ctx->pc = 0x181274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18127Cu;
    // 0x18127c: 0x0  nop
    ctx->pc = 0x18127cu;
    // NOP
    ctx->pc = 0x181280u;
}
