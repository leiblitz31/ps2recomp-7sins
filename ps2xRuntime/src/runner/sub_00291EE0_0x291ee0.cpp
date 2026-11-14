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

// Function: sub_00291EE0
// Address: 0x291ee0 - 0x2920e0
void sub_00291EE0_0x291ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291EE0_0x291ee0");
#endif

    switch (ctx->pc) {
        case 0x291f40u: goto label_291f40;
        case 0x291f50u: goto label_291f50;
        case 0x291f70u: goto label_291f70;
        case 0x291fb8u: goto label_291fb8;
        case 0x29203cu: goto label_29203c;
        case 0x29207cu: goto label_29207c;
        case 0x2920a0u: goto label_2920a0;
        case 0x2920acu: goto label_2920ac;
        case 0x2920b4u: goto label_2920b4;
        case 0x2920c8u: goto label_2920c8;
        default: break;
    }

    ctx->pc = 0x291ee0u;

    // 0x291ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x291ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x291ee4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x291ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x291ee8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x291ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291eec: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x291eecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x291ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x291EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291EF8u;
    // 0x291ef8: 0x0  nop
    ctx->pc = 0x291ef8u;
    // NOP
    // 0x291efc: 0x0  nop
    ctx->pc = 0x291efcu;
    // NOP
    // 0x291f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x291f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291f08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x291f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x291f0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x291f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x291f10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291f14: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x291F14u;
    {
        const bool branch_taken_0x291f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291f14) {
            ctx->pc = 0x291F70u;
            goto label_291f70;
        }
    }
    ctx->pc = 0x291F1Cu;
    // 0x291f1c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x291f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x291f20: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x291f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
    // 0x291f24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291f28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291f2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291f30: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x291f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x291f34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x291f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291f38: 0xc0a46c8  jal         func_291B20
    ctx->pc = 0x291F38u;
    SET_GPR_U32(ctx, 31, 0x291F40u);
    ctx->pc = 0x291B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291B20u, 0x291F38u, 0x291F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F40u;
label_291f40:
    // 0x291f40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x291f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291f44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x291f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f48: 0xc0a4274  jal         func_2909D0
    ctx->pc = 0x291F48u;
    SET_GPR_U32(ctx, 31, 0x291F50u);
    ctx->pc = 0x2909D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2909D0u, 0x291F48u, 0x291F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F50u;
label_291f50:
    // 0x291f50: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x291f50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291f54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x291f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x291f58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x291f58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x291f5c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291F5Cu;
    {
        const bool branch_taken_0x291f5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x291f5c) {
            ctx->pc = 0x291F70u;
            goto label_291f70;
        }
    }
    ctx->pc = 0x291F64u;
    // 0x291f64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x291f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291f68: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x291F68u;
    SET_GPR_U32(ctx, 31, 0x291F70u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x291F68u, 0x291F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F70u;
label_291f70:
    // 0x291f70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291f74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291f78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x291f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x291f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x291F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291F84u;
    // 0x291f84: 0x0  nop
    ctx->pc = 0x291f84u;
    // NOP
    // 0x291f88: 0x0  nop
    ctx->pc = 0x291f88u;
    // NOP
    // 0x291f8c: 0x0  nop
    ctx->pc = 0x291f8cu;
    // NOP
    // 0x291f90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x291f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x291f94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x291f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x291f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x291f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291fa0: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x291fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x291fa4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x291fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x291fa8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x291fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x291fac: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x291facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x291fb0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x291FB0u;
    SET_GPR_U32(ctx, 31, 0x291FB8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x291FB0u, 0x291FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291FB8u;
label_291fb8:
    // 0x291fb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x291fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291fbc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x291fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x291fc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x291fc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291fc4: 0x0  nop
    ctx->pc = 0x291fc4u;
    // NOP
    // 0x291fc8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x291fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x291fcc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x291fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x291fd0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x291fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x291fd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x291fd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291fd8: 0x0  nop
    ctx->pc = 0x291fd8u;
    // NOP
    // 0x291fdc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x291fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x291fe0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x291fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x291fe4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x291fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x291fe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x291fe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291fec: 0x0  nop
    ctx->pc = 0x291fecu;
    // NOP
    // 0x291ff0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x291ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x291ff4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x291ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x291ff8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x291ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x291ffc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x291ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292000: 0x0  nop
    ctx->pc = 0x292000u;
    // NOP
    // 0x292004: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x292004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x292008: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x292008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x29200c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x29200cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x292010: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x292010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x292014: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x292014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x292018: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x292018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x29201c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x29201cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x292020: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x292020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x292024: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x292024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x292028: 0x10110005  beq         $zero, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x292028u;
    {
        const bool branch_taken_0x292028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x292028) {
            ctx->pc = 0x292040u;
            goto label_292040;
        }
    }
    ctx->pc = 0x292030u;
    // 0x292030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292034: 0xc091018  jal         func_244060
    ctx->pc = 0x292034u;
    SET_GPR_U32(ctx, 31, 0x29203Cu);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x292034u, 0x29203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29203Cu;
label_29203c:
    // 0x29203c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x29203cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_292040:
    // 0x292040: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x292040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x292044: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x292044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x292048: 0x1003001f  beq         $zero, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x292048u;
    {
        const bool branch_taken_0x292048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x292048) {
            ctx->pc = 0x2920C8u;
            goto label_2920c8;
        }
    }
    ctx->pc = 0x292050u;
    // 0x292050: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x292050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x292054: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x292054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x292058: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x292058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29205c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29205Cu;
    {
        const bool branch_taken_0x29205c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29205c) {
            ctx->pc = 0x29206Cu;
            goto label_29206c;
        }
    }
    ctx->pc = 0x292064u;
    // 0x292064: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x292064u;
    {
        const bool branch_taken_0x292064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292064) {
            ctx->pc = 0x2920BCu;
            goto label_2920bc;
        }
    }
    ctx->pc = 0x29206Cu;
label_29206c:
    // 0x29206c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x29206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x292070: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x292070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x292074: 0xc0a4838  jal         func_2920E0
    ctx->pc = 0x292074u;
    SET_GPR_U32(ctx, 31, 0x29207Cu);
    ctx->pc = 0x2920E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2920E0u, 0x292074u, 0x29207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29207Cu;
label_29207c:
    // 0x29207c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x29207cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x292080: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x292080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x292084: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x292084u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x292088: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x292088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29208c: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x29208cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x292090: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x292090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292094: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x292094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x292098: 0xc1111fe  jal         func_4447F8
    ctx->pc = 0x292098u;
    SET_GPR_U32(ctx, 31, 0x2920A0u);
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x292098u, 0x2920A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2920A0u;
label_2920a0:
    // 0x2920a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2920a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2920a4: 0xc1110a8  jal         func_4442A0
    ctx->pc = 0x2920A4u;
    SET_GPR_U32(ctx, 31, 0x2920ACu);
    ctx->pc = 0x4442A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4442A0u, 0x2920A4u, 0x2920ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2920ACu;
label_2920ac:
    // 0x2920ac: 0xc111228  jal         func_4448A0
    ctx->pc = 0x2920ACu;
    SET_GPR_U32(ctx, 31, 0x2920B4u);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x2920ACu, 0x2920B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2920B4u;
label_2920b4:
    // 0x2920b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2920B4u;
    {
        const bool branch_taken_0x2920b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2920b4) {
            ctx->pc = 0x2920C8u;
            goto label_2920c8;
        }
    }
    ctx->pc = 0x2920BCu;
label_2920bc:
    // 0x2920bc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2920bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2920c0: 0xc0a437c  jal         func_290DF0
    ctx->pc = 0x2920C0u;
    SET_GPR_U32(ctx, 31, 0x2920C8u);
    ctx->pc = 0x290DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290DF0u, 0x2920C0u, 0x2920C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2920C8u;
label_2920c8:
    // 0x2920c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2920c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2920cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2920ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2920d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2920d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2920d4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2920d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2920d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2920D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2920D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2920E0u;
}
