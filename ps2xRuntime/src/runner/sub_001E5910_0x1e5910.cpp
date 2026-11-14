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

// Function: sub_001E5910
// Address: 0x1e5910 - 0x1e5ad0
void sub_001E5910_0x1e5910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5910_0x1e5910");
#endif

    switch (ctx->pc) {
        case 0x1e5984u: goto label_1e5984;
        case 0x1e5990u: goto label_1e5990;
        case 0x1e59c4u: goto label_1e59c4;
        case 0x1e5a64u: goto label_1e5a64;
        case 0x1e5aa0u: goto label_1e5aa0;
        default: break;
    }

    ctx->pc = 0x1e5910u;

    // 0x1e5910: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e5910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e5914: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e5914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e5918: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e5918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e591c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e591cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e5920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5924: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e5928: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1e5928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1e592c: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1e592cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x1e5930: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x1e5930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x1e5934: 0xe7ac0090  swc1        $f12, 0x90($sp)
    ctx->pc = 0x1e5934u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e5938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e593c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5940: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e5940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e5944: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1e5944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x1e5948: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e594c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1e594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5950: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e5950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e5954: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e5954u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e5958: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1e5958u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1e595c: 0x0  nop
    ctx->pc = 0x1e595cu;
    // NOP
    // 0x1e5960: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x1e5960u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e5964: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5964u;
    {
        const bool branch_taken_0x1e5964 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5964) {
            ctx->pc = 0x1E5970u;
            goto label_1e5970;
        }
    }
    ctx->pc = 0x1E596Cu;
    // 0x1e596c: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x1e596cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e5970:
    // 0x1e5970: 0x2101018  mult        $v0, $s0, $s0
    ctx->pc = 0x1e5970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e5974: 0x2453fffb  addiu       $s3, $v0, -0x5
    ctx->pc = 0x1e5974u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x1e5978: 0x109023  negu        $s2, $s0
    ctx->pc = 0x1e5978u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x1e597c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1E597Cu;
    {
        const bool branch_taken_0x1e597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e597c) {
            ctx->pc = 0x1E59F8u;
            goto label_1e59f8;
        }
    }
    ctx->pc = 0x1E5984u;
label_1e5984:
    // 0x1e5984: 0x108823  negu        $s1, $s0
    ctx->pc = 0x1e5984u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x1e5988: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E5988u;
    {
        const bool branch_taken_0x1e5988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5988) {
            ctx->pc = 0x1E59E8u;
            goto label_1e59e8;
        }
    }
    ctx->pc = 0x1E5990u;
label_1e5990:
    // 0x1e5990: 0x2521818  mult        $v1, $s2, $s2
    ctx->pc = 0x1e5990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e5994: 0x2311018  mult        $v0, $s1, $s1
    ctx->pc = 0x1e5994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e5998: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e5998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e599c: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x1e599cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1e59a0: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E59A0u;
    {
        const bool branch_taken_0x1e59a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e59a0) {
            ctx->pc = 0x1E59E4u;
            goto label_1e59e4;
        }
    }
    ctx->pc = 0x1E59A8u;
    // 0x1e59a8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e59a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e59ac: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x1e59acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e59b0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e59b4: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x1e59b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e59b8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e59b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e59bc: 0xc0796b4  jal         func_1E5AD0
    ctx->pc = 0x1E59BCu;
    SET_GPR_U32(ctx, 31, 0x1E59C4u);
    ctx->pc = 0x1E5AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AD0u, 0x1E59BCu, 0x1E59C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E59C4u;
label_1e59c4:
    // 0x1e59c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e59c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e59c8: 0x0  nop
    ctx->pc = 0x1e59c8u;
    // NOP
    // 0x1e59cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e59ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e59d0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e59d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e59d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e59d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e59d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e59d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e59dc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e59dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e59e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e59e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1e59e4:
    // 0x1e59e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e59e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e59e8:
    // 0x1e59e8: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x1e59e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1e59ec: 0x1020ffe8  beqz        $at, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1E59ECu;
    {
        const bool branch_taken_0x1e59ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e59ec) {
            ctx->pc = 0x1E5990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5990;
        }
    }
    ctx->pc = 0x1E59F4u;
    // 0x1e59f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e59f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e59f8:
    // 0x1e59f8: 0x212082a  slt         $at, $s0, $s2
    ctx->pc = 0x1e59f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1e59fc: 0x1020ffe1  beqz        $at, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1E59FCu;
    {
        const bool branch_taken_0x1e59fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e59fc) {
            ctx->pc = 0x1E5984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5984;
        }
    }
    ctx->pc = 0x1E5A04u;
    // 0x1e5a04: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e5a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5a08: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e5a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5a0c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e5a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5a10: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x1e5a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5a14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e5a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e5a18: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5a1c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e5a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e5a20: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e5a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5a24: 0x3c024473  lui         $v0, 0x4473
    ctx->pc = 0x1e5a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17523 << 16));
    // 0x1e5a28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5a2c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e5a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5a30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e5a30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e5a34: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5a38: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e5a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e5a3c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5a40: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e5a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5a44: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5a4c: 0x0  nop
    ctx->pc = 0x1e5a4cu;
    // NOP
    // 0x1e5a50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e5a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e5a54: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1e5a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1e5a58: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x1e5a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e5a5c: 0xc0c39dc  jal         func_30E770
    ctx->pc = 0x1E5A5Cu;
    SET_GPR_U32(ctx, 31, 0x1E5A64u);
    ctx->pc = 0x30E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E770u, 0x1E5A5Cu, 0x1E5A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5A64u;
label_1e5a64:
    // 0x1e5a64: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e5a68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5a6c: 0x0  nop
    ctx->pc = 0x1e5a6cu;
    // NOP
    // 0x1e5a70: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e5a70u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e5a74: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1e5a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1e5a78: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5a7c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e5a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5a80: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1e5a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5a84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e5a84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e5a88: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5a8c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e5a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e5a90: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5a94: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1e5a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e5a98: 0xc0c3930  jal         func_30E4C0
    ctx->pc = 0x1E5A98u;
    SET_GPR_U32(ctx, 31, 0x1E5AA0u);
    ctx->pc = 0x30E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E4C0u, 0x1E5A98u, 0x1E5AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5AA0u;
label_1e5aa0:
    // 0x1e5aa0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5aa4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e5aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1e5aa8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e5aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5aac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e5aacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5ab0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5ab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5ab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5abc: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1e5abcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e5ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5AC8u;
    // 0x1e5ac8: 0x0  nop
    ctx->pc = 0x1e5ac8u;
    // NOP
    // 0x1e5acc: 0x0  nop
    ctx->pc = 0x1e5accu;
    // NOP
    ctx->pc = 0x1e5ad0u;
}
