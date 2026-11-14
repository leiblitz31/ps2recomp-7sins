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

// Function: sub_00173EE0
// Address: 0x173ee0 - 0x1741a0
void sub_00173EE0_0x173ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173EE0_0x173ee0");
#endif

    switch (ctx->pc) {
        case 0x173f10u: goto label_173f10;
        case 0x173f1cu: goto label_173f1c;
        case 0x173f38u: goto label_173f38;
        case 0x173f44u: goto label_173f44;
        case 0x173f5cu: goto label_173f5c;
        case 0x173f6cu: goto label_173f6c;
        case 0x173f80u: goto label_173f80;
        case 0x173f9cu: goto label_173f9c;
        case 0x173fb8u: goto label_173fb8;
        case 0x173fd0u: goto label_173fd0;
        case 0x174068u: goto label_174068;
        case 0x174084u: goto label_174084;
        case 0x17409cu: goto label_17409c;
        case 0x1740ccu: goto label_1740cc;
        case 0x1740f8u: goto label_1740f8;
        case 0x17411cu: goto label_17411c;
        case 0x174130u: goto label_174130;
        case 0x174150u: goto label_174150;
        case 0x17416cu: goto label_17416c;
        case 0x17417cu: goto label_17417c;
        default: break;
    }

    ctx->pc = 0x173ee0u;

    // 0x173ee0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x173ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x173ee4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x173ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x173ee8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x173ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x173eec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x173eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x173ef0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x173ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x173ef4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173efc: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x173efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x173f00: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x173f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x173f04: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x173f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x173f08: 0xc0495d4  jal         func_125750
    ctx->pc = 0x173F08u;
    SET_GPR_U32(ctx, 31, 0x173F10u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x173F08u, 0x173F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F10u;
label_173f10:
    // 0x173f10: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x173f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x173f14: 0xc0495d4  jal         func_125750
    ctx->pc = 0x173F14u;
    SET_GPR_U32(ctx, 31, 0x173F1Cu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x173F14u, 0x173F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F1Cu;
label_173f1c:
    // 0x173f1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x173f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f20: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x173f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x173f24: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x173f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x173f28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x173f28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x173f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f30: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x173F30u;
    {
        const bool branch_taken_0x173f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173f30) {
            ctx->pc = 0x174120u;
            goto label_174120;
        }
    }
    ctx->pc = 0x173F38u;
label_173f38:
    // 0x173f38: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x173f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x173f3c: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x173F3Cu;
    SET_GPR_U32(ctx, 31, 0x173F44u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x173F3Cu, 0x173F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F44u;
label_173f44:
    // 0x173f44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x173f44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f48: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x173f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x173f4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x173f4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x173f50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f54: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x173F54u;
    {
        const bool branch_taken_0x173f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173f54) {
            ctx->pc = 0x1740BCu;
            goto label_1740bc;
        }
    }
    ctx->pc = 0x173F5Cu;
label_173f5c:
    // 0x173f5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x173f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x173f60: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x173f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x173f64: 0xc056368  jal         func_158DA0
    ctx->pc = 0x173F64u;
    SET_GPR_U32(ctx, 31, 0x173F6Cu);
    ctx->pc = 0x158DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158DA0u, 0x173F64u, 0x173F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F6Cu;
label_173f6c:
    // 0x173f6c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x173f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x173f70: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x173f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x173f74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f78: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x173F78u;
    SET_GPR_U32(ctx, 31, 0x173F80u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x173F78u, 0x173F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F80u;
label_173f80:
    // 0x173f80: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x173f80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173f84: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x173f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x173f88: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x173f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x173f8c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x173f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f90: 0x8fa7008c  lw          $a3, 0x8C($sp)
    ctx->pc = 0x173f90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x173f94: 0xc056334  jal         func_158CD0
    ctx->pc = 0x173F94u;
    SET_GPR_U32(ctx, 31, 0x173F9Cu);
    ctx->pc = 0x158CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158CD0u, 0x173F94u, 0x173F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F9Cu;
label_173f9c:
    // 0x173f9c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x173f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x173fa0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x173fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x173fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x173fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fa8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x173fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x173fac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x173facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173fb0: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x173FB0u;
    SET_GPR_U32(ctx, 31, 0x173FB8u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x173FB0u, 0x173FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FB8u;
label_173fb8:
    // 0x173fb8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x173fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x173fbc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x173fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x173fc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x173fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fc4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x173fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x173fc8: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x173FC8u;
    SET_GPR_U32(ctx, 31, 0x173FD0u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x173FC8u, 0x173FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FD0u;
label_173fd0:
    // 0x173fd0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x173fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x173fd4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x173fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x173fd8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173FD8u;
    {
        const bool branch_taken_0x173fd8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x173fd8) {
            ctx->pc = 0x173FF4u;
            goto label_173ff4;
        }
    }
    ctx->pc = 0x173FE0u;
    // 0x173fe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173fe4: 0x0  nop
    ctx->pc = 0x173fe4u;
    // NOP
    // 0x173fe8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x173fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x173fec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x173FECu;
    {
        const bool branch_taken_0x173fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173fec) {
            ctx->pc = 0x174010u;
            goto label_174010;
        }
    }
    ctx->pc = 0x173FF4u;
label_173ff4:
    // 0x173ff4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x173ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x173ff8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x173ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x173ffc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x173ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x174000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x174000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174004: 0x0  nop
    ctx->pc = 0x174004u;
    // NOP
    // 0x174008: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x174008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17400c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17400cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_174010:
    // 0x174010: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x174010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x174014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174018: 0x0  nop
    ctx->pc = 0x174018u;
    // NOP
    // 0x17401c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x17401cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x174020: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x174020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174024: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x174024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x174028: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x174028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x17402c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x174030: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x174030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x174034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174038: 0x0  nop
    ctx->pc = 0x174038u;
    // NOP
    // 0x17403c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17403cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x174040: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x174040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174044: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x174044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174048: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x174048u;
    {
        const bool branch_taken_0x174048 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x174048) {
            ctx->pc = 0x1740B0u;
            goto label_1740b0;
        }
    }
    ctx->pc = 0x174050u;
    // 0x174050: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x174050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x174054: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x174054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x174058: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x174058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17405c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17405cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174060: 0xc056334  jal         func_158CD0
    ctx->pc = 0x174060u;
    SET_GPR_U32(ctx, 31, 0x174068u);
    ctx->pc = 0x158CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158CD0u, 0x174060u, 0x174068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174068u;
label_174068:
    // 0x174068: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x174068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17406c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17406cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x174070: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x174070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174074: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x174074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x174078: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x174078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17407c: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x17407Cu;
    SET_GPR_U32(ctx, 31, 0x174084u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x17407Cu, 0x174084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174084u;
label_174084:
    // 0x174084: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x174084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x174088: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x174088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17408c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17408cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174090: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x174090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174094: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x174094u;
    SET_GPR_U32(ctx, 31, 0x17409Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x174094u, 0x17409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17409Cu;
label_17409c:
    // 0x17409c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17409cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1740a0: 0x26530001  addiu       $s3, $s2, 0x1
    ctx->pc = 0x1740a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1740a4: 0xafb3008c  sw          $s3, 0x8C($sp)
    ctx->pc = 0x1740a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 19));
    // 0x1740a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1740A8u;
    {
        const bool branch_taken_0x1740a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1740a8) {
            ctx->pc = 0x1740BCu;
            goto label_1740bc;
        }
    }
    ctx->pc = 0x1740B0u;
label_1740b0:
    // 0x1740b0: 0x8fb2008c  lw          $s2, 0x8C($sp)
    ctx->pc = 0x1740b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1740b4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1740b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1740b8: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1740b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_1740bc:
    // 0x1740bc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1740bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1740c0: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x1740c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1740c4: 0xc05611c  jal         func_158470
    ctx->pc = 0x1740C4u;
    SET_GPR_U32(ctx, 31, 0x1740CCu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1740C4u, 0x1740CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1740CCu;
label_1740cc:
    // 0x1740cc: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1740ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1740d0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1740D0u;
    {
        const bool branch_taken_0x1740d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1740d0) {
            ctx->pc = 0x1740E8u;
            goto label_1740e8;
        }
    }
    ctx->pc = 0x1740D8u;
    // 0x1740d8: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1740d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1740dc: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x1740dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1740e0: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1740E0u;
    {
        const bool branch_taken_0x1740e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1740e0) {
            ctx->pc = 0x173F5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173f5c;
        }
    }
    ctx->pc = 0x1740E8u;
label_1740e8:
    // 0x1740e8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1740e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1740ec: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x1740ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1740f0: 0xc05611c  jal         func_158470
    ctx->pc = 0x1740F0u;
    SET_GPR_U32(ctx, 31, 0x1740F8u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1740F0u, 0x1740F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1740F8u;
label_1740f8:
    // 0x1740f8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1740f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1740fc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1740FCu;
    {
        const bool branch_taken_0x1740fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1740fc) {
            ctx->pc = 0x17411Cu;
            goto label_17411c;
        }
    }
    ctx->pc = 0x174104u;
    // 0x174104: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x174104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x174108: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x174108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17410c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17410cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174110: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x174110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174114: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x174114u;
    SET_GPR_U32(ctx, 31, 0x17411Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x174114u, 0x17411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17411Cu;
label_17411c:
    // 0x17411c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17411cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_174120:
    // 0x174120: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x174120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x174124: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x174124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x174128: 0xc05611c  jal         func_158470
    ctx->pc = 0x174128u;
    SET_GPR_U32(ctx, 31, 0x174130u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x174128u, 0x174130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174130u;
label_174130:
    // 0x174130: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x174130u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174134: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x174134u;
    {
        const bool branch_taken_0x174134 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174134) {
            ctx->pc = 0x17415Cu;
            goto label_17415c;
        }
    }
    ctx->pc = 0x17413Cu;
    // 0x17413c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17413cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x174140: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x174140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x174144: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x174144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x174148: 0xc056358  jal         func_158D60
    ctx->pc = 0x174148u;
    SET_GPR_U32(ctx, 31, 0x174150u);
    ctx->pc = 0x158D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D60u, 0x174148u, 0x174150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174150u;
label_174150:
    // 0x174150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174154: 0x1043ff78  beq         $v0, $v1, . + 4 + (-0x88 << 2)
    ctx->pc = 0x174154u;
    {
        const bool branch_taken_0x174154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x174154) {
            ctx->pc = 0x173F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173f38;
        }
    }
    ctx->pc = 0x17415Cu;
label_17415c:
    // 0x17415c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17415cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x174160: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x174160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174164: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x174164u;
    SET_GPR_U32(ctx, 31, 0x17416Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x174164u, 0x17416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17416Cu;
label_17416c:
    // 0x17416c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17416cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x174170: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x174170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174174: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x174174u;
    SET_GPR_U32(ctx, 31, 0x17417Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x174174u, 0x17417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17417Cu;
label_17417c:
    // 0x17417c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17417cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174180: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x174180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174184: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174188: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17418c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17418cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174194: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x174194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x174198: 0x3e00008  jr          $ra
    ctx->pc = 0x174198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1741A0u;
}
