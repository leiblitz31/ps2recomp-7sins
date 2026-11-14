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

// Function: sub_001CC880
// Address: 0x1cc880 - 0x1cca80
void sub_001CC880_0x1cc880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC880_0x1cc880");
#endif

    switch (ctx->pc) {
        case 0x1cc924u: goto label_1cc924;
        case 0x1cc93cu: goto label_1cc93c;
        case 0x1cc950u: goto label_1cc950;
        case 0x1cc998u: goto label_1cc998;
        case 0x1cc9d4u: goto label_1cc9d4;
        case 0x1cc9e8u: goto label_1cc9e8;
        case 0x1cca68u: goto label_1cca68;
        default: break;
    }

    ctx->pc = 0x1cc880u;

    // 0x1cc880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1cc880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1cc884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc88c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1cc88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1cc890: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1cc890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1cc894: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1cc894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cc898: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC898u;
    {
        const bool branch_taken_0x1cc898 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1cc898) {
            ctx->pc = 0x1CC8B4u;
            goto label_1cc8b4;
        }
    }
    ctx->pc = 0x1CC8A0u;
    // 0x1cc8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc8a4: 0x0  nop
    ctx->pc = 0x1cc8a4u;
    // NOP
    // 0x1cc8a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc8a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cc8ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC8ACu;
    {
        const bool branch_taken_0x1cc8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc8ac) {
            ctx->pc = 0x1CC8D0u;
            goto label_1cc8d0;
        }
    }
    ctx->pc = 0x1CC8B4u;
label_1cc8b4:
    // 0x1cc8b4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1cc8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1cc8b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cc8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cc8bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1cc8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cc8c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cc8c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc8c4: 0x0  nop
    ctx->pc = 0x1cc8c4u;
    // NOP
    // 0x1cc8c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cc8cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1cc8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1cc8d0:
    // 0x1cc8d0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1cc8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1cc8d4: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1cc8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1cc8d8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1cc8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1cc8dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC8DCu;
    {
        const bool branch_taken_0x1cc8dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1cc8dc) {
            ctx->pc = 0x1CC8F8u;
            goto label_1cc8f8;
        }
    }
    ctx->pc = 0x1CC8E4u;
    // 0x1cc8e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc8e8: 0x0  nop
    ctx->pc = 0x1cc8e8u;
    // NOP
    // 0x1cc8ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc8ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cc8f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC8F0u;
    {
        const bool branch_taken_0x1cc8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc8f0) {
            ctx->pc = 0x1CC914u;
            goto label_1cc914;
        }
    }
    ctx->pc = 0x1CC8F8u;
label_1cc8f8:
    // 0x1cc8f8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1cc8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1cc8fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cc8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cc900: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1cc900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cc904: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cc904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc908: 0x0  nop
    ctx->pc = 0x1cc908u;
    // NOP
    // 0x1cc90c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc90cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cc910: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1cc910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1cc914:
    // 0x1cc914: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1cc914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1cc918: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1cc918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cc91c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CC91Cu;
    SET_GPR_U32(ctx, 31, 0x1CC924u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CC91Cu, 0x1CC924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC924u;
label_1cc924:
    // 0x1cc924: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cc924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc928: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1cc928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cc92c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cc92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1cc930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc934: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CC934u;
    SET_GPR_U32(ctx, 31, 0x1CC93Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CC934u, 0x1CC93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC93Cu;
label_1cc93c:
    // 0x1cc93c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cc93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc944: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1cc944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1cc948: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1CC948u;
    SET_GPR_U32(ctx, 31, 0x1CC950u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1CC948u, 0x1CC950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC950u;
label_1cc950:
    // 0x1cc950: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1cc950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1cc954: 0x248479d0  addiu       $a0, $a0, 0x79D0
    ctx->pc = 0x1cc954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31184));
    // 0x1cc958: 0x27a30048  addiu       $v1, $sp, 0x48
    ctx->pc = 0x1cc958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1cc95c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1cc95cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4E79D0u));
    // 0x1cc960: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1cc960u;
    { uint32_t bits = FAST_READ32(0x4E79D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc964: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1cc964u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1cc968: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cc968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1cc96c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1cc96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc970: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1cc970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1cc974: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1cc974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc978: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cc978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1cc97c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1cc97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1cc980: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1cc980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cc984: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x1cc984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1cc988: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x1cc988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1cc98c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc990: 0xc103c86  jal         func_40F218
    ctx->pc = 0x1CC990u;
    SET_GPR_U32(ctx, 31, 0x1CC998u);
    ctx->pc = 0x40F218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F218u, 0x1CC990u, 0x1CC998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC998u;
label_1cc998:
    // 0x1cc998: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1cc998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1cc99c: 0x248479e0  addiu       $a0, $a0, 0x79E0
    ctx->pc = 0x1cc99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31200));
    // 0x1cc9a0: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x1cc9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1cc9a4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1cc9a4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4E79E0u));
    // 0x1cc9a8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1cc9a8u;
    { uint32_t bits = FAST_READ32(0x4E79E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc9ac: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1cc9acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1cc9b0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cc9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1cc9b4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1cc9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cc9b8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1cc9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cc9bc: 0x8c6400b0  lw          $a0, 0xB0($v1)
    ctx->pc = 0x1cc9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1cc9c0: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1cc9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1cc9c4: 0xc44c00b4  lwc1        $f12, 0xB4($v0)
    ctx->pc = 0x1cc9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cc9c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cc9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc9cc: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x1CC9CCu;
    SET_GPR_U32(ctx, 31, 0x1CC9D4u);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x1CC9CCu, 0x1CC9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9D4u;
label_1cc9d4:
    // 0x1cc9d4: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1cc9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1cc9d8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1cc9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cc9dc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC9DCu;
    {
        const bool branch_taken_0x1cc9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc9dc) {
            ctx->pc = 0x1CCA04u;
            goto label_1cca04;
        }
    }
    ctx->pc = 0x1CC9E4u;
    // 0x1cc9e4: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1cc9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1cc9e8:
    // 0x1cc9e8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1cc9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc9ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cc9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cc9f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cc9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cc9f4: 0x0  nop
    ctx->pc = 0x1cc9f4u;
    // NOP
    // 0x1cc9f8: 0x0  nop
    ctx->pc = 0x1cc9f8u;
    // NOP
    // 0x1cc9fc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CC9FCu;
    {
        const bool branch_taken_0x1cc9fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc9fc) {
            ctx->pc = 0x1CC9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc9e8;
        }
    }
    ctx->pc = 0x1CCA04u;
label_1cca04:
    // 0x1cca04: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1cca04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cca08: 0xc44100f0  lwc1        $f1, 0xF0($v0)
    ctx->pc = 0x1cca08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cca0c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1cca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1cca10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cca10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cca14: 0x0  nop
    ctx->pc = 0x1cca14u;
    // NOP
    // 0x1cca18: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1cca18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cca1c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1cca1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cca20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cca20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cca24: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1cca24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1cca28: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1cca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cca2c: 0xc44100ec  lwc1        $f1, 0xEC($v0)
    ctx->pc = 0x1cca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cca30: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1cca30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1cca34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cca34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cca38: 0x0  nop
    ctx->pc = 0x1cca38u;
    // NOP
    // 0x1cca3c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1cca3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cca40: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1cca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cca44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cca44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cca48: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1cca48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1cca4c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1cca4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1cca50: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1cca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cca54: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x1cca54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1cca58: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x1cca58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1cca5c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cca5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cca60: 0xc103d16  jal         func_40F458
    ctx->pc = 0x1CCA60u;
    SET_GPR_U32(ctx, 31, 0x1CCA68u);
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x1CCA60u, 0x1CCA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA68u;
label_1cca68:
    // 0x1cca68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cca68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cca6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cca6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cca70: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1cca70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cca74: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCA7Cu;
    // 0x1cca7c: 0x0  nop
    ctx->pc = 0x1cca7cu;
    // NOP
    ctx->pc = 0x1cca80u;
}
