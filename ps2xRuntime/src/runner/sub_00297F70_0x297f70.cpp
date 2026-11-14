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

// Function: sub_00297F70
// Address: 0x297f70 - 0x298220
void sub_00297F70_0x297f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297F70_0x297f70");
#endif

    switch (ctx->pc) {
        case 0x297fb0u: goto label_297fb0;
        case 0x297fc4u: goto label_297fc4;
        case 0x297fd0u: goto label_297fd0;
        case 0x297fdcu: goto label_297fdc;
        case 0x297fecu: goto label_297fec;
        case 0x297ffcu: goto label_297ffc;
        case 0x298028u: goto label_298028;
        case 0x29803cu: goto label_29803c;
        case 0x298078u: goto label_298078;
        case 0x2980b4u: goto label_2980b4;
        case 0x2980ccu: goto label_2980cc;
        case 0x2980f8u: goto label_2980f8;
        case 0x298180u: goto label_298180;
        case 0x2981ecu: goto label_2981ec;
        default: break;
    }

    ctx->pc = 0x297f70u;

    // 0x297f70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x297f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x297f74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x297f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x297f78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x297f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x297f7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x297f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x297f80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x297f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x297f84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x297f88: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x297f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x297f8c: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x297f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x297f90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x297f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x297f94: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x297f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x297f98: 0xac4300c0  sw          $v1, 0xC0($v0)
    ctx->pc = 0x297f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
    // 0x297f9c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x297f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x297fa0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x297fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x297fa4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x297fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x297fa8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x297FA8u;
    SET_GPR_U32(ctx, 31, 0x297FB0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x297FA8u, 0x297FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FB0u;
label_297fb0:
    // 0x297fb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x297fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x297fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fb8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x297fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x297fbc: 0xc090f6c  jal         func_243DB0
    ctx->pc = 0x297FBCu;
    SET_GPR_U32(ctx, 31, 0x297FC4u);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x297FBCu, 0x297FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FC4u;
label_297fc4:
    // 0x297fc4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x297fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297fc8: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x297FC8u;
    SET_GPR_U32(ctx, 31, 0x297FD0u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x297FC8u, 0x297FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FD0u;
label_297fd0:
    // 0x297fd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fd4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x297FD4u;
    {
        const bool branch_taken_0x297fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297fd4) {
            ctx->pc = 0x2980ECu;
            goto label_2980ec;
        }
    }
    ctx->pc = 0x297FDCu;
label_297fdc:
    // 0x297fdc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x297fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297fe0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x297fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x297fe4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x297FE4u;
    SET_GPR_U32(ctx, 31, 0x297FECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x297FE4u, 0x297FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FECu;
label_297fec:
    // 0x297fec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x297fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ff0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ff4: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x297FF4u;
    SET_GPR_U32(ctx, 31, 0x297FFCu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x297FF4u, 0x297FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FFCu;
label_297ffc:
    // 0x297ffc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x297ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298000: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x298000u;
    {
        const bool branch_taken_0x298000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x298000) {
            ctx->pc = 0x298018u;
            goto label_298018;
        }
    }
    ctx->pc = 0x298008u;
    // 0x298008: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298008u;
    {
        const bool branch_taken_0x298008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298008) {
            ctx->pc = 0x298018u;
            goto label_298018;
        }
    }
    ctx->pc = 0x298010u;
    // 0x298010: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x298010u;
    {
        const bool branch_taken_0x298010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298010) {
            ctx->pc = 0x2980E8u;
            goto label_2980e8;
        }
    }
    ctx->pc = 0x298018u;
label_298018:
    // 0x298018: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x298018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29801c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29801cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x298020: 0xc085538  jal         func_2154E0
    ctx->pc = 0x298020u;
    SET_GPR_U32(ctx, 31, 0x298028u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x298020u, 0x298028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298028u;
label_298028:
    // 0x298028: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x298028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29802c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29802cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298030: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x298030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x298034: 0xc090f6c  jal         func_243DB0
    ctx->pc = 0x298034u;
    SET_GPR_U32(ctx, 31, 0x29803Cu);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x298034u, 0x29803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29803Cu;
label_29803c:
    // 0x29803c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x29803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298040: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x298040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298044: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x298044u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x298048: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x298048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29804c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x29804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298050: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x298050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298054: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x298054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x298058: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x298058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x29805c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x29805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298060: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x298060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298064: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x298064u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x298068: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x298068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29806c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x298070: 0xc104d24  jal         func_413490
    ctx->pc = 0x298070u;
    SET_GPR_U32(ctx, 31, 0x298078u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x298070u, 0x298078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298078u;
label_298078:
    // 0x298078: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x298078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x29807c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x29807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298080: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x298080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x298084: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298088: 0x0  nop
    ctx->pc = 0x298088u;
    // NOP
    // 0x29808c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29808cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298090: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x298090u;
    {
        const bool branch_taken_0x298090 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298090) {
            ctx->pc = 0x2980E8u;
            goto label_2980e8;
        }
    }
    ctx->pc = 0x298098u;
    // 0x298098: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x298098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29809c: 0x80630050  lb          $v1, 0x50($v1)
    ctx->pc = 0x29809cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2980a0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2980A0u;
    {
        const bool branch_taken_0x2980a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2980a0) {
            ctx->pc = 0x2980D4u;
            goto label_2980d4;
        }
    }
    ctx->pc = 0x2980A8u;
    // 0x2980a8: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x2980a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x2980ac: 0xc041b40  jal         func_106D00
    ctx->pc = 0x2980ACu;
    SET_GPR_U32(ctx, 31, 0x2980B4u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x2980ACu, 0x2980B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980B4u;
label_2980b4:
    // 0x2980b4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2980b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2980b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2980b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980bc: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x2980bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2980c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2980c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980c4: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2980C4u;
    SET_GPR_U32(ctx, 31, 0x2980CCu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2980C4u, 0x2980CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980CCu;
label_2980cc:
    // 0x2980cc: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2980CCu;
    {
        const bool branch_taken_0x2980cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2980cc) {
            ctx->pc = 0x2981F4u;
            goto label_2981f4;
        }
    }
    ctx->pc = 0x2980D4u;
label_2980d4:
    // 0x2980d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2980d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2980d8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2980d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2980dc: 0xac6400c0  sw          $a0, 0xC0($v1)
    ctx->pc = 0x2980dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 4));
    // 0x2980e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2980E0u;
    {
        const bool branch_taken_0x2980e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2980e0) {
            ctx->pc = 0x298100u;
            goto label_298100;
        }
    }
    ctx->pc = 0x2980E8u;
label_2980e8:
    // 0x2980e8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2980e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2980ec:
    // 0x2980ec: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2980ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2980f0: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x2980F0u;
    SET_GPR_U32(ctx, 31, 0x2980F8u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2980F0u, 0x2980F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980F8u;
label_2980f8:
    // 0x2980f8: 0x1602ffb8  bne         $s0, $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x2980F8u;
    {
        const bool branch_taken_0x2980f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2980f8) {
            ctx->pc = 0x297FDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297fdc;
        }
    }
    ctx->pc = 0x298100u;
label_298100:
    // 0x298100: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x298100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298104: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x298104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x298108: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x298108u;
    {
        const bool branch_taken_0x298108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298108) {
            ctx->pc = 0x2981F4u;
            goto label_2981f4;
        }
    }
    ctx->pc = 0x298110u;
    // 0x298110: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x298110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298114: 0x8c6400c0  lw          $a0, 0xC0($v1)
    ctx->pc = 0x298114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x298118: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x298118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29811c: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x29811Cu;
    {
        const bool branch_taken_0x29811c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29811c) {
            ctx->pc = 0x298194u;
            goto label_298194;
        }
    }
    ctx->pc = 0x298124u;
    // 0x298124: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x298124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298128: 0x8c640074  lw          $a0, 0x74($v1)
    ctx->pc = 0x298128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x29812c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29812cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298130: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x298130u;
    {
        const bool branch_taken_0x298130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x298130) {
            ctx->pc = 0x298180u;
            goto label_298180;
        }
    }
    ctx->pc = 0x298138u;
    // 0x298138: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x298138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29813c: 0x24630098  addiu       $v1, $v1, 0x98
    ctx->pc = 0x29813cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
    // 0x298140: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x298140u;
    {
        const bool branch_taken_0x298140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298140) {
            ctx->pc = 0x298180u;
            goto label_298180;
        }
    }
    ctx->pc = 0x298148u;
    // 0x298148: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x298148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29814c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x298150: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x298150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x298154: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x298154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x298158: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x298158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29815c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x29815cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x298160: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x298160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x298164: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x298164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x298168: 0x24650098  addiu       $a1, $v1, 0x98
    ctx->pc = 0x298168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
    // 0x29816c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x29816cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x298170: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x298170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298174: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x298174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298178: 0xc08f6e4  jal         func_23DB90
    ctx->pc = 0x298178u;
    SET_GPR_U32(ctx, 31, 0x298180u);
    ctx->pc = 0x23DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DB90u, 0x298178u, 0x298180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298180u;
label_298180:
    // 0x298180: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298184: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x298184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298188: 0xac640074  sw          $a0, 0x74($v1)
    ctx->pc = 0x298188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 4));
    // 0x29818c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29818Cu;
    {
        const bool branch_taken_0x29818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29818c) {
            ctx->pc = 0x2981F4u;
            goto label_2981f4;
        }
    }
    ctx->pc = 0x298194u;
label_298194:
    // 0x298194: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x298194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298198: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x298198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x29819c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x29819Cu;
    {
        const bool branch_taken_0x29819c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29819c) {
            ctx->pc = 0x2981ECu;
            goto label_2981ec;
        }
    }
    ctx->pc = 0x2981A4u;
    // 0x2981a4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2981a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2981a8: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x2981a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x2981ac: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2981ACu;
    {
        const bool branch_taken_0x2981ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2981ac) {
            ctx->pc = 0x2981ECu;
            goto label_2981ec;
        }
    }
    ctx->pc = 0x2981B4u;
    // 0x2981b4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2981b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2981b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2981b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2981bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2981bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2981c0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2981c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2981c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2981c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2981c8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2981c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2981cc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2981ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2981d0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2981d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x2981d4: 0x24650078  addiu       $a1, $v1, 0x78
    ctx->pc = 0x2981d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x2981d8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2981d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2981dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2981dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2981e0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2981e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2981e4: 0xc08f6e4  jal         func_23DB90
    ctx->pc = 0x2981E4u;
    SET_GPR_U32(ctx, 31, 0x2981ECu);
    ctx->pc = 0x23DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DB90u, 0x2981E4u, 0x2981ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2981ECu;
label_2981ec:
    // 0x2981ec: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2981ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2981f0: 0xac600074  sw          $zero, 0x74($v1)
    ctx->pc = 0x2981f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 0));
label_2981f4:
    // 0x2981f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2981f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2981f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2981f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2981fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2981fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x298200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298208: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x298208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29820c: 0x3e00008  jr          $ra
    ctx->pc = 0x29820Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29820Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298214u;
    // 0x298214: 0x0  nop
    ctx->pc = 0x298214u;
    // NOP
    // 0x298218: 0x0  nop
    ctx->pc = 0x298218u;
    // NOP
    // 0x29821c: 0x0  nop
    ctx->pc = 0x29821cu;
    // NOP
    ctx->pc = 0x298220u;
}
