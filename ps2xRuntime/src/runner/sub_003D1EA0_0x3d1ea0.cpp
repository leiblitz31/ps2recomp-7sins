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

// Function: sub_003D1EA0
// Address: 0x3d1ea0 - 0x3d2270
void sub_003D1EA0_0x3d1ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1EA0_0x3d1ea0");
#endif

    switch (ctx->pc) {
        case 0x3d1f68u: goto label_3d1f68;
        case 0x3d1f74u: goto label_3d1f74;
        case 0x3d1f80u: goto label_3d1f80;
        case 0x3d1fb0u: goto label_3d1fb0;
        case 0x3d1fd0u: goto label_3d1fd0;
        case 0x3d1ff8u: goto label_3d1ff8;
        case 0x3d2110u: goto label_3d2110;
        case 0x3d2238u: goto label_3d2238;
        default: break;
    }

    ctx->pc = 0x3d1ea0u;

    // 0x3d1ea0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3d1ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3d1ea4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3d1ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x3d1ea8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3d1ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3d1eac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3d1eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1eb0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3d1eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3d1eb4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3d1eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x3d1eb8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3d1eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3d1ebc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3d1ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3d1ec0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3d1ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x3d1ec4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3d1ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3d1ec8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3d1ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x3d1ecc: 0x108000da  beqz        $a0, . + 4 + (0xDA << 2)
    ctx->pc = 0x3D1ECCu;
    {
        const bool branch_taken_0x3d1ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1ECCu;
        // 0x3d1ed0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1ecc) {
            ctx->pc = 0x3D2238u;
            goto label_3d2238;
        }
    }
    ctx->pc = 0x3D1ED4u;
    // 0x3d1ed4: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x3d1ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d1ed8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3d1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3d1edc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3d1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3d1ee0: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x3d1ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3d1ee4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3d1ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3d1ee8: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x3d1ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3d1eec: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D1EECu;
    {
        const bool branch_taken_0x3d1eec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D1EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1EECu;
        // 0x3d1ef0: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1eec) {
            ctx->pc = 0x3D1F04u;
            goto label_3d1f04;
        }
    }
    ctx->pc = 0x3D1EF4u;
    // 0x3d1ef4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d1ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d1ef8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d1ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3d1efc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D1EFCu;
    {
        const bool branch_taken_0x3d1efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1efc) {
            ctx->pc = 0x3D1F1Cu;
            goto label_3d1f1c;
        }
    }
    ctx->pc = 0x3D1F04u;
label_3d1f04:
    // 0x3d1f04: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3d1f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3d1f08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d1f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d1f0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d1f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3d1f10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d1f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d1f14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d1f14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3d1f18: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3d1f18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3d1f1c:
    // 0x3d1f1c: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D1F1Cu;
    {
        const bool branch_taken_0x3d1f1c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3D1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1F1Cu;
        // 0x3d1f20: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1f1c) {
            ctx->pc = 0x3D1F34u;
            goto label_3d1f34;
        }
    }
    ctx->pc = 0x3D1F24u;
    // 0x3d1f24: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3d1f24u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1f28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d1f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d1f2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D1F2Cu;
    {
        const bool branch_taken_0x3d1f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1f2c) {
            ctx->pc = 0x3D1F48u;
            goto label_3d1f48;
        }
    }
    ctx->pc = 0x3D1F34u;
label_3d1f34:
    // 0x3d1f34: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x3d1f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x3d1f38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d1f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3d1f3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1f40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d1f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d1f44: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d1f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d1f48:
    // 0x3d1f48: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3d1f48u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3d1f4c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3d1f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d1f50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d1f50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d1f54: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x3d1f54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x3d1f58: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3d1f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d1f5c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x3d1f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x3d1f60: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x3D1F60u;
    SET_GPR_U32(ctx, 31, 0x3D1F68u);
    ctx->pc = 0x3D1F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1F60u;
    // 0x3d1f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3D1F60u, 0x3D1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1F68u;
label_3d1f68:
    // 0x3d1f68: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d1f68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1f6c: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x3D1F6Cu;
    SET_GPR_U32(ctx, 31, 0x3D1F74u);
    ctx->pc = 0x3D1F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1F6Cu;
    // 0x3d1f70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3D1F6Cu, 0x3D1F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1F74u;
label_3d1f74:
    // 0x3d1f74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d1f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1f78: 0xc1073a8  jal         func_41CEA0
    ctx->pc = 0x3D1F78u;
    SET_GPR_U32(ctx, 31, 0x3D1F80u);
    ctx->pc = 0x3D1F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1F78u;
    // 0x3d1f7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEA0u, 0x3D1F78u, 0x3D1F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1F80u;
label_3d1f80:
    // 0x3d1f80: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x3d1f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3d1f84: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x3d1f84u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1f88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3d1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x3d1f8c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d1f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d1f90: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x3d1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x3d1f94: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x3d1f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x3d1f98: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x3d1f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x3d1f9c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3d1f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3d1fa0: 0x8e730014  lw          $s3, 0x14($s3)
    ctx->pc = 0x3d1fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3d1fa4: 0x108000a0  beqz        $a0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x3D1FA4u;
    {
        const bool branch_taken_0x3d1fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1FA4u;
        // 0x3d1fa8: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1fa4) {
            ctx->pc = 0x3D2228u;
            goto label_3d2228;
        }
    }
    ctx->pc = 0x3D1FACu;
    // 0x3d1fac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d1facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1fb0:
    // 0x3d1fb0: 0x12000098  beqz        $s0, . + 4 + (0x98 << 2)
    ctx->pc = 0x3D1FB0u;
    {
        const bool branch_taken_0x3d1fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1FB0u;
        // 0x3d1fb4: 0x271e0001  addiu       $fp, $t8, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1fb0) {
            ctx->pc = 0x3D2214u;
            goto label_3d2214;
        }
    }
    ctx->pc = 0x3D1FB8u;
    // 0x3d1fb8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3d1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3d1fbc: 0x302b818  mult        $s7, $t8, $v0
    ctx->pc = 0x3d1fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
    // 0x3d1fc0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3d1fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d1fc4: 0x302b018  mult        $s6, $t8, $v0
    ctx->pc = 0x3d1fc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x3d1fc8: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x3d1fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x3d1fcc: 0x0  nop
    ctx->pc = 0x3d1fccu;
    // NOP
label_3d1fd0:
    // 0x3d1fd0: 0x24940001  addiu       $s4, $a0, 0x1
    ctx->pc = 0x3d1fd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d1fd4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3d1fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d1fd8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3d1fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3d1fdc: 0x800013  mtlo        $a0
    ctx->pc = 0x3d1fdcu;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x3d1fe0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3d1fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d1fe4: 0x773021  addu        $a2, $v1, $s7
    ctx->pc = 0x3d1fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x3d1fe8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3d1fe8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1fec: 0x12200085  beqz        $s1, . + 4 + (0x85 << 2)
    ctx->pc = 0x3D1FECu;
    {
        const bool branch_taken_0x3d1fec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1FECu;
        // 0x3d1ff0: 0x70445800  madd        $t3, $v0, $a0 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 11, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1fec) {
            ctx->pc = 0x3D2204u;
            goto label_3d2204;
        }
    }
    ctx->pc = 0x3D1FF4u;
    // 0x3d1ff4: 0x311c818  mult        $t9, $t8, $s1
    ctx->pc = 0x3d1ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_3d1ff8:
    // 0x3d1ff8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3d1ff8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1ffc: 0x24d30004  addiu       $s3, $a2, 0x4
    ctx->pc = 0x3d1ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3d2000: 0x1200007c  beqz        $s0, . + 4 + (0x7C << 2)
    ctx->pc = 0x3D2000u;
    {
        const bool branch_taken_0x3d2000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2000u;
        // 0x3d2004: 0x24720001  addiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2000) {
            ctx->pc = 0x3D21F4u;
            goto label_3d21f4;
        }
    }
    ctx->pc = 0x3D2008u;
    // 0x3d2008: 0x3231021  addu        $v0, $t9, $v1
    ctx->pc = 0x3d2008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3d200c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x3d200cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d2010: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3d2010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d2014: 0x304e0007  andi        $t6, $v0, 0x7
    ctx->pc = 0x3d2014u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3d2018: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3d2018u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3d201c: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3d201cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2020: 0x626821  addu        $t5, $v1, $v0
    ctx->pc = 0x3d2020u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d2024: 0x1a000025  blez        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3D2024u;
    {
        const bool branch_taken_0x3d2024 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3D2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2024u;
        // 0x3d2028: 0x32030003  andi        $v1, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2024) {
            ctx->pc = 0x3D20BCu;
            goto label_3d20bc;
        }
    }
    ctx->pc = 0x3D202Cu;
    // 0x3d202c: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3D202Cu;
    {
        const bool branch_taken_0x3d202c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D202Cu;
        // 0x3d2030: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d202c) {
            ctx->pc = 0x3D2100u;
            goto label_3d2100;
        }
    }
    ctx->pc = 0x3D2034u;
    // 0x3d2034: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x3D2034u;
    {
        const bool branch_taken_0x3d2034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2034) {
            ctx->pc = 0x3D2038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2034u;
            // 0x3d2038: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D20C0u;
            goto label_3d20c0;
        }
    }
    ctx->pc = 0x3D203Cu;
    // 0x3d203c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d203cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3d2040: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D2040u;
    {
        const bool branch_taken_0x3d2040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2040u;
        // 0x3d2044: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2040) {
            ctx->pc = 0x3D2084u;
            goto label_3d2084;
        }
    }
    ctx->pc = 0x3D2048u;
    // 0x3d2048: 0xa1620000  sb          $v0, 0x0($t3)
    ctx->pc = 0x3d2048u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d204c: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3d204cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3d2050: 0xa1630001  sb          $v1, 0x1($t3)
    ctx->pc = 0x3d2050u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d2054: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3d2054u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3d2058: 0xa1640002  sb          $a0, 0x2($t3)
    ctx->pc = 0x3d2058u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d205c: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x3d205cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3d2060: 0x1c21007  srav        $v0, $v0, $t6
    ctx->pc = 0x3d2060u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d2064: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d2064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d2068: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D2068u;
    {
        const bool branch_taken_0x3d2068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2068) {
            ctx->pc = 0x3D206Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2068u;
            // 0x3d206c: 0xa1600003  sb          $zero, 0x3($t3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2074u;
            goto label_3d2074;
        }
    }
    ctx->pc = 0x3D2070u;
    // 0x3d2070: 0xa16f0003  sb          $t7, 0x3($t3)
    ctx->pc = 0x3d2070u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 15));
label_3d2074:
    // 0x3d2074: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3d2074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3d2078: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3d2078u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3d207c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3d207cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3d2080: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3d2080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3d2084:
    // 0x3d2084: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3d2084u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d2088: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3d2088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3d208c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x3d208cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d2090: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3d2090u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3d2094: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x3d2094u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d2098: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x3d2098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3d209c: 0x1c21007  srav        $v0, $v0, $t6
    ctx->pc = 0x3d209cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d20a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d20a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d20a4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D20A4u;
    {
        const bool branch_taken_0x3d20a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d20a4) {
            ctx->pc = 0x3D20A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D20A4u;
            // 0x3d20a8: 0xa0a00003  sb          $zero, 0x3($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D20B0u;
            goto label_3d20b0;
        }
    }
    ctx->pc = 0x3D20ACu;
    // 0x3d20ac: 0xa0af0003  sb          $t7, 0x3($a1)
    ctx->pc = 0x3d20acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 15));
label_3d20b0:
    // 0x3d20b0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3d20b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3d20b4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3d20b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3d20b8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3d20b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_3d20bc:
    // 0x3d20bc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3d20bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3d20c0:
    // 0x3d20c0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3d20c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d20c4: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3d20c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3d20c8: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x3d20c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d20cc: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3d20ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3d20d0: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x3d20d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d20d4: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x3d20d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3d20d8: 0x1c21007  srav        $v0, $v0, $t6
    ctx->pc = 0x3d20d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d20dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d20dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d20e0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D20E0u;
    {
        const bool branch_taken_0x3d20e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d20e0) {
            ctx->pc = 0x3D20E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D20E0u;
            // 0x3d20e4: 0xa0a00003  sb          $zero, 0x3($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D20ECu;
            goto label_3d20ec;
        }
    }
    ctx->pc = 0x3D20E8u;
    // 0x3d20e8: 0xa0af0003  sb          $t7, 0x3($a1)
    ctx->pc = 0x3d20e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 15));
label_3d20ec:
    // 0x3d20ec: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3d20ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3d20f0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3d20f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3d20f4: 0x190102b  sltu        $v0, $t4, $s0
    ctx->pc = 0x3d20f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3d20f8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3D20F8u;
    {
        const bool branch_taken_0x3d20f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D20F8u;
        // 0x3d20fc: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d20f8) {
            ctx->pc = 0x3D21F4u;
            goto label_3d21f4;
        }
    }
    ctx->pc = 0x3D2100u;
label_3d2100:
    // 0x3d2100: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3d2100u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2104: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3d2104u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2108: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3d2108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d210c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3d210cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d2110:
    // 0x3d2110: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3d2110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d2114: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3d2114u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d2118: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3d2118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3d211c: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x3d211cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d2120: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3d2120u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3d2124: 0xa1240002  sb          $a0, 0x2($t1)
    ctx->pc = 0x3d2124u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d2128: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x3d2128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3d212c: 0x1c21007  srav        $v0, $v0, $t6
    ctx->pc = 0x3d212cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d2130: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d2130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d2134: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D2134u;
    {
        const bool branch_taken_0x3d2134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2134) {
            ctx->pc = 0x3D2138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2134u;
            // 0x3d2138: 0xa0a00003  sb          $zero, 0x3($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2140u;
            goto label_3d2140;
        }
    }
    ctx->pc = 0x3D213Cu;
    // 0x3d213c: 0xa14f0003  sb          $t7, 0x3($t2)
    ctx->pc = 0x3d213cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 15));
label_3d2140:
    // 0x3d2140: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3d2140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d2144: 0xa0e20004  sb          $v0, 0x4($a3)
    ctx->pc = 0x3d2144u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d2148: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3d2148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3d214c: 0xa1030005  sb          $v1, 0x5($t0)
    ctx->pc = 0x3d214cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d2150: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3d2150u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3d2154: 0xa1240006  sb          $a0, 0x6($t1)
    ctx->pc = 0x3d2154u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d2158: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x3d2158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3d215c: 0x1c21007  srav        $v0, $v0, $t6
    ctx->pc = 0x3d215cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d2160: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d2160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d2164: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D2164u;
    {
        const bool branch_taken_0x3d2164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2164) {
            ctx->pc = 0x3D2168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2164u;
            // 0x3d2168: 0xa0a00007  sb          $zero, 0x7($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2170u;
            goto label_3d2170;
        }
    }
    ctx->pc = 0x3D216Cu;
    // 0x3d216c: 0xa14f0007  sb          $t7, 0x7($t2)
    ctx->pc = 0x3d216cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 7), (uint8_t)GPR_U32(ctx, 15));
label_3d2170:
    // 0x3d2170: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3d2170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d2174: 0xa0e20008  sb          $v0, 0x8($a3)
    ctx->pc = 0x3d2174u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d2178: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3d2178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3d217c: 0xa1030009  sb          $v1, 0x9($t0)
    ctx->pc = 0x3d217cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d2180: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3d2180u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3d2184: 0xa124000a  sb          $a0, 0xA($t1)
    ctx->pc = 0x3d2184u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d2188: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x3d2188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3d218c: 0x1c21007  srav        $v0, $v0, $t6
    ctx->pc = 0x3d218cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d2190: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d2190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d2194: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D2194u;
    {
        const bool branch_taken_0x3d2194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2194) {
            ctx->pc = 0x3D2198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2194u;
            // 0x3d2198: 0xa0a0000b  sb          $zero, 0xB($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D21A0u;
            goto label_3d21a0;
        }
    }
    ctx->pc = 0x3D219Cu;
    // 0x3d219c: 0xa14f000b  sb          $t7, 0xB($t2)
    ctx->pc = 0x3d219cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 11), (uint8_t)GPR_U32(ctx, 15));
label_3d21a0:
    // 0x3d21a0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3d21a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d21a4: 0xa0e2000c  sb          $v0, 0xC($a3)
    ctx->pc = 0x3d21a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d21a8: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3d21a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3d21ac: 0xa103000d  sb          $v1, 0xD($t0)
    ctx->pc = 0x3d21acu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d21b0: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3d21b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3d21b4: 0xa124000e  sb          $a0, 0xE($t1)
    ctx->pc = 0x3d21b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 14), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d21b8: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x3d21b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3d21bc: 0x1c21007  srav        $v0, $v0, $t6
    ctx->pc = 0x3d21bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d21c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d21c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d21c4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D21C4u;
    {
        const bool branch_taken_0x3d21c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d21c4) {
            ctx->pc = 0x3D21C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D21C4u;
            // 0x3d21c8: 0xa0a0000f  sb          $zero, 0xF($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D21D0u;
            goto label_3d21d0;
        }
    }
    ctx->pc = 0x3D21CCu;
    // 0x3d21cc: 0xa14f000f  sb          $t7, 0xF($t2)
    ctx->pc = 0x3d21ccu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 15), (uint8_t)GPR_U32(ctx, 15));
label_3d21d0:
    // 0x3d21d0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x3d21d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x3d21d4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3d21d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3d21d8: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3d21d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3d21dc: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x3d21dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x3d21e0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x3d21e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x3d21e4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3d21e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3d21e8: 0x190102b  sltu        $v0, $t4, $s0
    ctx->pc = 0x3d21e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3d21ec: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x3D21ECu;
    {
        const bool branch_taken_0x3d21ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D21ECu;
        // 0x3d21f0: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d21ec) {
            ctx->pc = 0x3D2110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d2110;
        }
    }
    ctx->pc = 0x3D21F4u;
label_3d21f4:
    // 0x3d21f4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x3d21f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d21f8: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x3d21f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d21fc: 0x1440ff7e  bnez        $v0, . + 4 + (-0x82 << 2)
    ctx->pc = 0x3D21FCu;
    {
        const bool branch_taken_0x3d21fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D21FCu;
        // 0x3d2200: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d21fc) {
            ctx->pc = 0x3D1FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1ff8;
        }
    }
    ctx->pc = 0x3D2204u;
label_3d2204:
    // 0x3d2204: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d2204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2208: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x3d2208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3d220c: 0x1440ff70  bnez        $v0, . + 4 + (-0x90 << 2)
    ctx->pc = 0x3D220Cu;
    {
        const bool branch_taken_0x3d220c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D220Cu;
        // 0x3d2210: 0x2c41021  addu        $v0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d220c) {
            ctx->pc = 0x3D1FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1fd0;
        }
    }
    ctx->pc = 0x3D2214u;
label_3d2214:
    // 0x3d2214: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d2214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d2218: 0x3c0c02d  daddu       $t8, $fp, $zero
    ctx->pc = 0x3d2218u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d221c: 0x304102b  sltu        $v0, $t8, $a0
    ctx->pc = 0x3d221cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d2220: 0x1440ff63  bnez        $v0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x3D2220u;
    {
        const bool branch_taken_0x3d2220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2220u;
        // 0x3d2224: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2220) {
            ctx->pc = 0x3D1FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1fb0;
        }
    }
    ctx->pc = 0x3D2228u;
label_3d2228:
    // 0x3d2228: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D2228u;
    {
        const bool branch_taken_0x3d2228 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2228u;
        // 0x3d222c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2228) {
            ctx->pc = 0x3D223Cu;
            goto label_3d223c;
        }
    }
    ctx->pc = 0x3D2230u;
    // 0x3d2230: 0xc10705c  jal         func_41C170
    ctx->pc = 0x3D2230u;
    SET_GPR_U32(ctx, 31, 0x3D2238u);
    ctx->pc = 0x3D2234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2230u;
    // 0x3d2234: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D2230u, 0x3D2238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2238u;
label_3d2238:
    // 0x3d2238: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3d2238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3d223c:
    // 0x3d223c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2240: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3d2240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3d2244: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3d2244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3d2248: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3d2248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d224c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3d224cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d2250: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3d2250u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d2254: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3d2254u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d2258: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3d2258u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d225c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3d225cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d2260: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d2260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d2264: 0x3e00008  jr          $ra
    ctx->pc = 0x3D2264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2264u;
        // 0x3d2268: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D226Cu;
    // 0x3d226c: 0x0  nop
    ctx->pc = 0x3d226cu;
    // NOP
    ctx->pc = 0x3d2270u;
}
