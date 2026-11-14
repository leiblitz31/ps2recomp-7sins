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

// Function: sub_0047CC00
// Address: 0x47cc00 - 0x47cde0
void sub_0047CC00_0x47cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047CC00_0x47cc00");
#endif

    switch (ctx->pc) {
        case 0x47cc50u: goto label_47cc50;
        case 0x47cca0u: goto label_47cca0;
        case 0x47cd3cu: goto label_47cd3c;
        case 0x47cd64u: goto label_47cd64;
        case 0x47cd7cu: goto label_47cd7c;
        case 0x47cd8cu: goto label_47cd8c;
        case 0x47cda0u: goto label_47cda0;
        default: break;
    }

    ctx->pc = 0x47cc00u;

    // 0x47cc00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x47cc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x47cc04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47cc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47cc08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47cc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47cc0c: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x47cc0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x47cc10: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x47cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x47cc14: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x47cc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x47cc18: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x47cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x47cc1c: 0x8f83c094  lw          $v1, -0x3F6C($gp)
    ctx->pc = 0x47cc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951060)));
    // 0x47cc20: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47cc24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47cc28: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x47cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x47cc2c: 0x8f82c098  lw          $v0, -0x3F68($gp)
    ctx->pc = 0x47cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951064)));
    // 0x47cc30: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x47cc30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47cc34: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x47cc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47cc38: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x47cc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x47cc3c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x47cc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x47cc40: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x47cc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x47cc44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47cc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cc48: 0xc11f9cc  jal         func_47E730
    ctx->pc = 0x47CC48u;
    SET_GPR_U32(ctx, 31, 0x47CC50u);
    ctx->pc = 0x47E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E730u, 0x47CC48u, 0x47CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CC50u;
label_47cc50:
    // 0x47cc50: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x47cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x47cc54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47CC54u;
    {
        const bool branch_taken_0x47cc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cc54) {
            ctx->pc = 0x47CC6Cu;
            goto label_47cc6c;
        }
    }
    ctx->pc = 0x47CC5Cu;
    // 0x47cc5c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x47cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x47cc60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x47cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x47cc64: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x47CC64u;
    {
        const bool branch_taken_0x47cc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cc64) {
            ctx->pc = 0x47CCACu;
            goto label_47ccac;
        }
    }
    ctx->pc = 0x47CC6Cu;
label_47cc6c:
    // 0x47cc6c: 0x8f82c07c  lw          $v0, -0x3F84($gp)
    ctx->pc = 0x47cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951036)));
    // 0x47cc70: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x47CC70u;
    {
        const bool branch_taken_0x47cc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47cc70) {
            ctx->pc = 0x47CCA4u;
            goto label_47cca4;
        }
    }
    ctx->pc = 0x47CC78u;
    // 0x47cc78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x47cc7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x47cc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x47cc80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x47cc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cc84: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x47cc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x47cc88: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x47cc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x47cc8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47cc8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cc90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x47cc90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cc94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x47cc94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cc98: 0xc11f738  jal         func_47DCE0
    ctx->pc = 0x47CC98u;
    SET_GPR_U32(ctx, 31, 0x47CCA0u);
    ctx->pc = 0x47DCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DCE0u, 0x47CC98u, 0x47CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CCA0u;
label_47cca0:
    // 0x47cca0: 0xaf82c07c  sw          $v0, -0x3F84($gp)
    ctx->pc = 0x47cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951036), GPR_U32(ctx, 2));
label_47cca4:
    // 0x47cca4: 0x8f82c07c  lw          $v0, -0x3F84($gp)
    ctx->pc = 0x47cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951036)));
    // 0x47cca8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x47cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_47ccac:
    // 0x47ccac: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x47ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47ccb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47CCB0u;
    {
        const bool branch_taken_0x47ccb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ccb0) {
            ctx->pc = 0x47CCC0u;
            goto label_47ccc0;
        }
    }
    ctx->pc = 0x47CCB8u;
    // 0x47ccb8: 0x2782b6b0  addiu       $v0, $gp, -0x4950
    ctx->pc = 0x47ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948528));
    // 0x47ccbc: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x47ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_47ccc0:
    // 0x47ccc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x47ccc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47ccc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47ccc8: 0x0  nop
    ctx->pc = 0x47ccc8u;
    // NOP
    // 0x47cccc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x47ccccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x47ccd0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x47ccd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x47ccd4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x47ccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x47ccd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47ccd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47ccdc: 0x0  nop
    ctx->pc = 0x47ccdcu;
    // NOP
    // 0x47cce0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x47cce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x47cce4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x47cce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x47cce8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x47cce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x47ccec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47ccecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47ccf0: 0x0  nop
    ctx->pc = 0x47ccf0u;
    // NOP
    // 0x47ccf4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x47ccf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x47ccf8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x47ccf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x47ccfc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x47ccfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x47cd00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47cd00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47cd04: 0x0  nop
    ctx->pc = 0x47cd04u;
    // NOP
    // 0x47cd08: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x47cd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x47cd0c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x47cd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x47cd10: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x47cd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x47cd14: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x47cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x47cd18: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x47cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x47cd1c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x47cd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x47cd20: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x47cd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x47cd24: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x47cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x47cd28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x47cd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47cd2c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x47cd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x47cd30: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x47cd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47cd34: 0xc103c86  jal         func_40F218
    ctx->pc = 0x47CD34u;
    SET_GPR_U32(ctx, 31, 0x47CD3Cu);
    ctx->pc = 0x40F218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F218u, 0x47CD34u, 0x47CD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CD3Cu;
label_47cd3c:
    // 0x47cd3c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x47cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x47cd40: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x47CD40u;
    {
        const bool branch_taken_0x47cd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cd40) {
            ctx->pc = 0x47CD6Cu;
            goto label_47cd6c;
        }
    }
    ctx->pc = 0x47CD48u;
    // 0x47cd48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47cd4c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x47cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x47cd50: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x47cd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x47cd54: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x47cd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47cd58: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x47cd58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x47cd5c: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x47CD5Cu;
    SET_GPR_U32(ctx, 31, 0x47CD64u);
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x47CD5Cu, 0x47CD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CD64u;
label_47cd64:
    // 0x47cd64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x47CD64u;
    {
        const bool branch_taken_0x47cd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cd64) {
            ctx->pc = 0x47CD7Cu;
            goto label_47cd7c;
        }
    }
    ctx->pc = 0x47CD6Cu;
label_47cd6c:
    // 0x47cd6c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x47cd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x47cd70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x47cd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47cd74: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x47CD74u;
    SET_GPR_U32(ctx, 31, 0x47CD7Cu);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x47CD74u, 0x47CD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CD7Cu;
label_47cd7c:
    // 0x47cd7c: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x47cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x47cd80: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x47cd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47cd84: 0xc052608  jal         func_149820
    ctx->pc = 0x47CD84u;
    SET_GPR_U32(ctx, 31, 0x47CD8Cu);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x47CD84u, 0x47CD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CD8Cu;
label_47cd8c:
    // 0x47cd8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x47cd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cd90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47cd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cd94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x47cd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47cd98: 0xc11fa10  jal         func_47E840
    ctx->pc = 0x47CD98u;
    SET_GPR_U32(ctx, 31, 0x47CDA0u);
    ctx->pc = 0x47E840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E840u, 0x47CD98u, 0x47CDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CDA0u;
label_47cda0:
    // 0x47cda0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47CDA0u;
    {
        const bool branch_taken_0x47cda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47cda0) {
            ctx->pc = 0x47CDB4u;
            goto label_47cdb4;
        }
    }
    ctx->pc = 0x47CDA8u;
    // 0x47cda8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x47cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47cdac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x47CDACu;
    {
        const bool branch_taken_0x47cdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cdac) {
            ctx->pc = 0x47CDC4u;
            goto label_47cdc4;
        }
    }
    ctx->pc = 0x47CDB4u;
label_47cdb4:
    // 0x47cdb4: 0x8f82c094  lw          $v0, -0x3F6C($gp)
    ctx->pc = 0x47cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951060)));
    // 0x47cdb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x47cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x47cdbc: 0xaf82c094  sw          $v0, -0x3F6C($gp)
    ctx->pc = 0x47cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951060), GPR_U32(ctx, 2));
    // 0x47cdc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47cdc4:
    // 0x47cdc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47cdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47cdc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47cdc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47cdcc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x47cdccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x47cdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x47CDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47CDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47CDD8u;
    // 0x47cdd8: 0x0  nop
    ctx->pc = 0x47cdd8u;
    // NOP
    // 0x47cddc: 0x0  nop
    ctx->pc = 0x47cddcu;
    // NOP
    ctx->pc = 0x47cde0u;
}
