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

// Function: sub_00273D60
// Address: 0x273d60 - 0x274080
void sub_00273D60_0x273d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273D60_0x273d60");
#endif

    switch (ctx->pc) {
        case 0x273da4u: goto label_273da4;
        case 0x273db8u: goto label_273db8;
        case 0x273dccu: goto label_273dcc;
        case 0x273e04u: goto label_273e04;
        case 0x273e18u: goto label_273e18;
        case 0x273e40u: goto label_273e40;
        case 0x273e54u: goto label_273e54;
        case 0x273e90u: goto label_273e90;
        case 0x273ea0u: goto label_273ea0;
        case 0x273ef4u: goto label_273ef4;
        case 0x273f14u: goto label_273f14;
        case 0x273f20u: goto label_273f20;
        case 0x273f30u: goto label_273f30;
        case 0x273f40u: goto label_273f40;
        case 0x273f4cu: goto label_273f4c;
        case 0x273f6cu: goto label_273f6c;
        case 0x273f84u: goto label_273f84;
        case 0x273f98u: goto label_273f98;
        case 0x27400cu: goto label_27400c;
        case 0x274040u: goto label_274040;
        default: break;
    }

    ctx->pc = 0x273d60u;

    // 0x273d60: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x273d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x273d64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x273d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x273d68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x273d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x273d6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x273d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x273d70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x273d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x273d74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x273d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x273d78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x273d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x273d7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x273d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x273d80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x273d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x273d84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x273d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x273d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x273d8c: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x273d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x273d90: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x273d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x273d94: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x273d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x273d98: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x273d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x273d9c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x273D9Cu;
    SET_GPR_U32(ctx, 31, 0x273DA4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x273D9Cu, 0x273DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273DA4u;
label_273da4:
    // 0x273da4: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x273da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x273da8: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x273da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x273dac: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x273dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x273db0: 0xc090f6c  jal         func_243DB0
    ctx->pc = 0x273DB0u;
    SET_GPR_U32(ctx, 31, 0x273DB8u);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x273DB0u, 0x273DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273DB8u;
label_273db8:
    // 0x273db8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x273db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x273dbc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x273dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x273dc0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x273DC0u;
    {
        const bool branch_taken_0x273dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x273dc0) {
            ctx->pc = 0x273DE8u;
            goto label_273de8;
        }
    }
    ctx->pc = 0x273DC8u;
    // 0x273dc8: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x273dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_273dcc:
    // 0x273dcc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x273dccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x273dd0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x273dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x273dd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x273dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x273dd8: 0x0  nop
    ctx->pc = 0x273dd8u;
    // NOP
    // 0x273ddc: 0x0  nop
    ctx->pc = 0x273ddcu;
    // NOP
    // 0x273de0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x273DE0u;
    {
        const bool branch_taken_0x273de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273de0) {
            ctx->pc = 0x273DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273dcc;
        }
    }
    ctx->pc = 0x273DE8u;
label_273de8:
    // 0x273de8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x273de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273dec: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x273decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x273df0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x273df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273df4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x273df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x273df8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x273df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x273dfc: 0xc090864  jal         func_242190
    ctx->pc = 0x273DFCu;
    SET_GPR_U32(ctx, 31, 0x273E04u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x273DFCu, 0x273E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E04u;
label_273e04:
    // 0x273e04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e08: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x273e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x273e0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e10: 0xc09088c  jal         func_242230
    ctx->pc = 0x273E10u;
    SET_GPR_U32(ctx, 31, 0x273E18u);
    ctx->pc = 0x242230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242230u, 0x273E10u, 0x273E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E18u;
label_273e18:
    // 0x273e18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x273e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e1c: 0x14110004  bne         $zero, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x273E1Cu;
    {
        const bool branch_taken_0x273e1c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 17));
        if (branch_taken_0x273e1c) {
            ctx->pc = 0x273E30u;
            goto label_273e30;
        }
    }
    ctx->pc = 0x273E24u;
    // 0x273e24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e28: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x273E28u;
    {
        const bool branch_taken_0x273e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273e28) {
            ctx->pc = 0x27404Cu;
            goto label_27404c;
        }
    }
    ctx->pc = 0x273E30u;
label_273e30:
    // 0x273e30: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x273e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x273e34: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x273e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x273e38: 0xc085538  jal         func_2154E0
    ctx->pc = 0x273E38u;
    SET_GPR_U32(ctx, 31, 0x273E40u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x273E38u, 0x273E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E40u;
label_273e40:
    // 0x273e40: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x273e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x273e44: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x273e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x273e48: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x273e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x273e4c: 0xc090f6c  jal         func_243DB0
    ctx->pc = 0x273E4Cu;
    SET_GPR_U32(ctx, 31, 0x273E54u);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x273E4Cu, 0x273E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E54u;
label_273e54:
    // 0x273e54: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x273e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273e58: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x273e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273e5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x273e5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273e60: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x273e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x273e64: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x273e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273e68: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x273e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273e6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x273e6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273e70: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x273e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x273e74: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x273e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273e78: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x273e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273e7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x273e7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273e80: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x273e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x273e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e88: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x273E88u;
    SET_GPR_U32(ctx, 31, 0x273E90u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x273E88u, 0x273E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E90u;
label_273e90:
    // 0x273e90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x273e90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x273e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e98: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x273E98u;
    SET_GPR_U32(ctx, 31, 0x273EA0u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x273E98u, 0x273EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EA0u;
label_273ea0:
    // 0x273ea0: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x273ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x273ea4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x273ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x273ea8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x273ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273eac: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x273eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273eb0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x273eb0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x273eb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x273eb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x273eb8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x273eb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x273ebc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x273ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x273ec0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x273ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273ec4: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x273ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273ec8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x273ec8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x273ecc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x273eccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x273ed0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x273ed0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x273ed4: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x273ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x273ed8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x273ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x273edc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x273edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273ee0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x273ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x273ee4: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x273ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x273ee8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x273ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273eec: 0xc064774  jal         func_191DD0
    ctx->pc = 0x273EECu;
    SET_GPR_U32(ctx, 31, 0x273EF4u);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x273EECu, 0x273EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EF4u;
label_273ef4:
    // 0x273ef4: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x273ef4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x273ef8: 0x14160004  bne         $zero, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x273EF8u;
    {
        const bool branch_taken_0x273ef8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 22));
        if (branch_taken_0x273ef8) {
            ctx->pc = 0x273F0Cu;
            goto label_273f0c;
        }
    }
    ctx->pc = 0x273F00u;
    // 0x273f00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f04: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x273F04u;
    {
        const bool branch_taken_0x273f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273f04) {
            ctx->pc = 0x27404Cu;
            goto label_27404c;
        }
    }
    ctx->pc = 0x273F0Cu;
label_273f0c:
    // 0x273f0c: 0xc090864  jal         func_242190
    ctx->pc = 0x273F0Cu;
    SET_GPR_U32(ctx, 31, 0x273F14u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x273F0Cu, 0x273F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F14u;
label_273f14:
    // 0x273f14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f18: 0xc090590  jal         func_241640
    ctx->pc = 0x273F18u;
    SET_GPR_U32(ctx, 31, 0x273F20u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x273F18u, 0x273F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F20u;
label_273f20:
    // 0x273f20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f24: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x273f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x273f28: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x273F28u;
    SET_GPR_U32(ctx, 31, 0x273F30u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x273F28u, 0x273F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F30u;
label_273f30:
    // 0x273f30: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x273f30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x273f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f38: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x273F38u;
    SET_GPR_U32(ctx, 31, 0x273F40u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x273F38u, 0x273F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F40u;
label_273f40:
    // 0x273f40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f44: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x273F44u;
    {
        const bool branch_taken_0x273f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273f44) {
            ctx->pc = 0x274034u;
            goto label_274034;
        }
    }
    ctx->pc = 0x273F4Cu;
label_273f4c:
    // 0x273f4c: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x273f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x273f50: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x273f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x273f54: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x273f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x273f58: 0x12420035  beq         $s2, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x273F58u;
    {
        const bool branch_taken_0x273f58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x273f58) {
            ctx->pc = 0x274030u;
            goto label_274030;
        }
    }
    ctx->pc = 0x273F60u;
    // 0x273f60: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x273f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x273f64: 0xc096880  jal         func_25A200
    ctx->pc = 0x273F64u;
    SET_GPR_U32(ctx, 31, 0x273F6Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x273F64u, 0x273F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F6Cu;
label_273f6c:
    // 0x273f6c: 0x12420030  beq         $s2, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x273F6Cu;
    {
        const bool branch_taken_0x273f6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x273f6c) {
            ctx->pc = 0x274030u;
            goto label_274030;
        }
    }
    ctx->pc = 0x273F74u;
    // 0x273f74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x273f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f78: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x273f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x273f7c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x273F7Cu;
    SET_GPR_U32(ctx, 31, 0x273F84u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x273F7Cu, 0x273F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F84u;
label_273f84:
    // 0x273f84: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x273f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x273f88: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x273f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x273f8c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x273f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x273f90: 0xc090f6c  jal         func_243DB0
    ctx->pc = 0x273F90u;
    SET_GPR_U32(ctx, 31, 0x273F98u);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x273F90u, 0x273F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F98u;
label_273f98:
    // 0x273f98: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x273f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273f9c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x273f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273fa0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x273fa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273fa4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x273fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x273fa8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x273fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273fac: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x273facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273fb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x273fb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273fb4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x273fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x273fb8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x273fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273fbc: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x273fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273fc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x273fc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273fc4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x273fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x273fc8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x273fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x273fcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x273fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273fd0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x273fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273fd4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x273fd4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x273fd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x273fd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x273fdc: 0x441e0000  mfc1        $fp, $f0
    ctx->pc = 0x273fdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
    // 0x273fe0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x273fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x273fe4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x273fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273fe8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x273fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273fec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x273fecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x273ff0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x273ff0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x273ff4: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x273ff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x273ff8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x273ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ffc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x273ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274000: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x274000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274004: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x274004u;
    SET_GPR_U32(ctx, 31, 0x27400Cu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x274004u, 0x27400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27400Cu;
label_27400c:
    // 0x27400c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27400cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274010: 0x10140007  beq         $zero, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x274010u;
    {
        const bool branch_taken_0x274010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x274010) {
            ctx->pc = 0x274030u;
            goto label_274030;
        }
    }
    ctx->pc = 0x274018u;
    // 0x274018: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x274018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27401c: 0x14560004  bne         $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x27401Cu;
    {
        const bool branch_taken_0x27401c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x27401c) {
            ctx->pc = 0x274030u;
            goto label_274030;
        }
    }
    ctx->pc = 0x274024u;
    // 0x274024: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274028: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x274028u;
    {
        const bool branch_taken_0x274028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274028) {
            ctx->pc = 0x27404Cu;
            goto label_27404c;
        }
    }
    ctx->pc = 0x274030u;
label_274030:
    // 0x274030: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x274030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_274034:
    // 0x274034: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x274034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274038: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x274038u;
    SET_GPR_U32(ctx, 31, 0x274040u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x274038u, 0x274040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274040u;
label_274040:
    // 0x274040: 0x1602ffc2  bne         $s0, $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x274040u;
    {
        const bool branch_taken_0x274040 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x274040) {
            ctx->pc = 0x273F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273f4c;
        }
    }
    ctx->pc = 0x274048u;
    // 0x274048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27404c:
    // 0x27404c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27404cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x274050: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x274050u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x274054: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x274054u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x274058: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x274058u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27405c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27405cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274060: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x274060u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274064: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x274064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274068: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x274068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27406c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27406cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274074: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x274074u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x274078: 0x3e00008  jr          $ra
    ctx->pc = 0x274078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274080u;
}
