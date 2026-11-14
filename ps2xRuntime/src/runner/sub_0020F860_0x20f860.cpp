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

// Function: sub_0020F860
// Address: 0x20f860 - 0x20fa20
void sub_0020F860_0x20f860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F860_0x20f860");
#endif

    switch (ctx->pc) {
        case 0x20f890u: goto label_20f890;
        case 0x20f914u: goto label_20f914;
        case 0x20f940u: goto label_20f940;
        case 0x20f94cu: goto label_20f94c;
        case 0x20f968u: goto label_20f968;
        case 0x20f97cu: goto label_20f97c;
        case 0x20f9b8u: goto label_20f9b8;
        case 0x20fa04u: goto label_20fa04;
        default: break;
    }

    ctx->pc = 0x20f860u;

    // 0x20f860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20f860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20f864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20f868: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x20f868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x20f86c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x20f86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x20f870: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f874: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x20f874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x20f878: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20f878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f87c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f880: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x20f880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x20f884: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x20f884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x20f888: 0xc041d58  jal         func_107560
    ctx->pc = 0x20F888u;
    SET_GPR_U32(ctx, 31, 0x20F890u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20F888u, 0x20F890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F890u;
label_20f890:
    // 0x20f890: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20f890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f894: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20f894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f898: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f89c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x20f89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x20f8a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f8a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20f8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f8a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f8ac: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x20f8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x20f8b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f8b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20f8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f8b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f8bc: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x20f8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x20f8c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f8c4: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x20f8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f8c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f8cc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20f8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f8d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20f8d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20f8d4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x20f8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20f8d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f8dc: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x20f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f8e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f8e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20f8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f8e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20f8e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20f8ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x20f8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20f8f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f8f4: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x20f8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f8f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f8fc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x20f8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f900: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20f900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20f904: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x20f904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x20f908: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x20f908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20f90c: 0xc104d24  jal         func_413490
    ctx->pc = 0x20F90Cu;
    SET_GPR_U32(ctx, 31, 0x20F914u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x20F90Cu, 0x20F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F914u;
label_20f914:
    // 0x20f914: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f918: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x20f918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x20f91c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f91cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f920: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f924: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x20f924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x20f928: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f92c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20f930: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x20f930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x20f934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20f934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f938: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x20F938u;
    SET_GPR_U32(ctx, 31, 0x20F940u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x20F938u, 0x20F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F940u;
label_20f940:
    // 0x20f940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20f940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f944: 0xc041874  jal         func_1061D0
    ctx->pc = 0x20F944u;
    SET_GPR_U32(ctx, 31, 0x20F94Cu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x20F944u, 0x20F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F94Cu;
label_20f94c:
    // 0x20f94c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f950: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20f950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f954: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x20f954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x20f958: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20f958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f95c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20f95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f960: 0xc1217cc  jal         func_485F30
    ctx->pc = 0x20F960u;
    SET_GPR_U32(ctx, 31, 0x20F968u);
    ctx->pc = 0x485F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F30u, 0x20F960u, 0x20F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F968u;
label_20f968:
    // 0x20f968: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f96c: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x20f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x20f970: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20f970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f974: 0xc121904  jal         func_486410
    ctx->pc = 0x20F974u;
    SET_GPR_U32(ctx, 31, 0x20F97Cu);
    ctx->pc = 0x486410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486410u, 0x20F974u, 0x20F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F97Cu;
label_20f97c:
    // 0x20f97c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f980: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x20f980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x20f984: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x20f984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x20f988: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x20F988u;
    {
        const bool branch_taken_0x20f988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f988) {
            ctx->pc = 0x20F9C8u;
            goto label_20f9c8;
        }
    }
    ctx->pc = 0x20F990u;
    // 0x20f990: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20f990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f994: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x20f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x20f998: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20F998u;
    {
        const bool branch_taken_0x20f998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f998) {
            ctx->pc = 0x20F9C8u;
            goto label_20f9c8;
        }
    }
    ctx->pc = 0x20F9A0u;
    // 0x20f9a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f9a4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x20f9a8: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x20f9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x20f9ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20f9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f9b0: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x20F9B0u;
    SET_GPR_U32(ctx, 31, 0x20F9B8u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x20F9B0u, 0x20F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F9B8u;
label_20f9b8:
    // 0x20f9b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f9bc: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x20f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x20f9c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20F9C0u;
    {
        const bool branch_taken_0x20f9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f9c0) {
            ctx->pc = 0x20FA0Cu;
            goto label_20fa0c;
        }
    }
    ctx->pc = 0x20F9C8u;
label_20f9c8:
    // 0x20f9c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f9cc: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x20f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x20f9d0: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x20f9d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x20f9d4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20F9D4u;
    {
        const bool branch_taken_0x20f9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f9d4) {
            ctx->pc = 0x20FA0Cu;
            goto label_20fa0c;
        }
    }
    ctx->pc = 0x20F9DCu;
    // 0x20f9dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f9e0: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x20f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x20f9e4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20F9E4u;
    {
        const bool branch_taken_0x20f9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f9e4) {
            ctx->pc = 0x20FA0Cu;
            goto label_20fa0c;
        }
    }
    ctx->pc = 0x20F9ECu;
    // 0x20f9ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f9f0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x20f9f4: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x20f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x20f9f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20f9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f9fc: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x20F9FCu;
    SET_GPR_U32(ctx, 31, 0x20FA04u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x20F9FCu, 0x20FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FA04u;
label_20fa04:
    // 0x20fa04: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fa08: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x20fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
label_20fa0c:
    // 0x20fa0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20fa0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fa10: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20fa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20fa14: 0x3e00008  jr          $ra
    ctx->pc = 0x20FA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FA1Cu;
    // 0x20fa1c: 0x0  nop
    ctx->pc = 0x20fa1cu;
    // NOP
    ctx->pc = 0x20fa20u;
}
