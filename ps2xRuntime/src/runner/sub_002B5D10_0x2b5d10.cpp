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

// Function: sub_002B5D10
// Address: 0x2b5d10 - 0x2b5ef0
void sub_002B5D10_0x2b5d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5D10_0x2b5d10");
#endif

    switch (ctx->pc) {
        case 0x2b5d10u: goto label_2b5d10;
        case 0x2b5d14u: goto label_2b5d14;
        case 0x2b5d18u: goto label_2b5d18;
        case 0x2b5d1cu: goto label_2b5d1c;
        case 0x2b5d20u: goto label_2b5d20;
        case 0x2b5d24u: goto label_2b5d24;
        case 0x2b5d28u: goto label_2b5d28;
        case 0x2b5d2cu: goto label_2b5d2c;
        case 0x2b5d30u: goto label_2b5d30;
        case 0x2b5d34u: goto label_2b5d34;
        case 0x2b5d38u: goto label_2b5d38;
        case 0x2b5d3cu: goto label_2b5d3c;
        case 0x2b5d40u: goto label_2b5d40;
        case 0x2b5d44u: goto label_2b5d44;
        case 0x2b5d48u: goto label_2b5d48;
        case 0x2b5d4cu: goto label_2b5d4c;
        case 0x2b5d50u: goto label_2b5d50;
        case 0x2b5d54u: goto label_2b5d54;
        case 0x2b5d58u: goto label_2b5d58;
        case 0x2b5d5cu: goto label_2b5d5c;
        case 0x2b5d60u: goto label_2b5d60;
        case 0x2b5d64u: goto label_2b5d64;
        case 0x2b5d68u: goto label_2b5d68;
        case 0x2b5d6cu: goto label_2b5d6c;
        case 0x2b5d70u: goto label_2b5d70;
        case 0x2b5d74u: goto label_2b5d74;
        case 0x2b5d78u: goto label_2b5d78;
        case 0x2b5d7cu: goto label_2b5d7c;
        case 0x2b5d80u: goto label_2b5d80;
        case 0x2b5d84u: goto label_2b5d84;
        case 0x2b5d88u: goto label_2b5d88;
        case 0x2b5d8cu: goto label_2b5d8c;
        case 0x2b5d90u: goto label_2b5d90;
        case 0x2b5d94u: goto label_2b5d94;
        case 0x2b5d98u: goto label_2b5d98;
        case 0x2b5d9cu: goto label_2b5d9c;
        case 0x2b5da0u: goto label_2b5da0;
        case 0x2b5da4u: goto label_2b5da4;
        case 0x2b5da8u: goto label_2b5da8;
        case 0x2b5dacu: goto label_2b5dac;
        case 0x2b5db0u: goto label_2b5db0;
        case 0x2b5db4u: goto label_2b5db4;
        case 0x2b5db8u: goto label_2b5db8;
        case 0x2b5dbcu: goto label_2b5dbc;
        case 0x2b5dc0u: goto label_2b5dc0;
        case 0x2b5dc4u: goto label_2b5dc4;
        case 0x2b5dc8u: goto label_2b5dc8;
        case 0x2b5dccu: goto label_2b5dcc;
        case 0x2b5dd0u: goto label_2b5dd0;
        case 0x2b5dd4u: goto label_2b5dd4;
        case 0x2b5dd8u: goto label_2b5dd8;
        case 0x2b5ddcu: goto label_2b5ddc;
        case 0x2b5de0u: goto label_2b5de0;
        case 0x2b5de4u: goto label_2b5de4;
        case 0x2b5de8u: goto label_2b5de8;
        case 0x2b5decu: goto label_2b5dec;
        case 0x2b5df0u: goto label_2b5df0;
        case 0x2b5df4u: goto label_2b5df4;
        case 0x2b5df8u: goto label_2b5df8;
        case 0x2b5dfcu: goto label_2b5dfc;
        case 0x2b5e00u: goto label_2b5e00;
        case 0x2b5e04u: goto label_2b5e04;
        case 0x2b5e08u: goto label_2b5e08;
        case 0x2b5e0cu: goto label_2b5e0c;
        case 0x2b5e10u: goto label_2b5e10;
        case 0x2b5e14u: goto label_2b5e14;
        case 0x2b5e18u: goto label_2b5e18;
        case 0x2b5e1cu: goto label_2b5e1c;
        case 0x2b5e20u: goto label_2b5e20;
        case 0x2b5e24u: goto label_2b5e24;
        case 0x2b5e28u: goto label_2b5e28;
        case 0x2b5e2cu: goto label_2b5e2c;
        case 0x2b5e30u: goto label_2b5e30;
        case 0x2b5e34u: goto label_2b5e34;
        case 0x2b5e38u: goto label_2b5e38;
        case 0x2b5e3cu: goto label_2b5e3c;
        case 0x2b5e40u: goto label_2b5e40;
        case 0x2b5e44u: goto label_2b5e44;
        case 0x2b5e48u: goto label_2b5e48;
        case 0x2b5e4cu: goto label_2b5e4c;
        case 0x2b5e50u: goto label_2b5e50;
        case 0x2b5e54u: goto label_2b5e54;
        case 0x2b5e58u: goto label_2b5e58;
        case 0x2b5e5cu: goto label_2b5e5c;
        case 0x2b5e60u: goto label_2b5e60;
        case 0x2b5e64u: goto label_2b5e64;
        case 0x2b5e68u: goto label_2b5e68;
        case 0x2b5e6cu: goto label_2b5e6c;
        case 0x2b5e70u: goto label_2b5e70;
        case 0x2b5e74u: goto label_2b5e74;
        case 0x2b5e78u: goto label_2b5e78;
        case 0x2b5e7cu: goto label_2b5e7c;
        case 0x2b5e80u: goto label_2b5e80;
        case 0x2b5e84u: goto label_2b5e84;
        case 0x2b5e88u: goto label_2b5e88;
        case 0x2b5e8cu: goto label_2b5e8c;
        case 0x2b5e90u: goto label_2b5e90;
        case 0x2b5e94u: goto label_2b5e94;
        case 0x2b5e98u: goto label_2b5e98;
        case 0x2b5e9cu: goto label_2b5e9c;
        case 0x2b5ea0u: goto label_2b5ea0;
        case 0x2b5ea4u: goto label_2b5ea4;
        case 0x2b5ea8u: goto label_2b5ea8;
        case 0x2b5eacu: goto label_2b5eac;
        case 0x2b5eb0u: goto label_2b5eb0;
        case 0x2b5eb4u: goto label_2b5eb4;
        case 0x2b5eb8u: goto label_2b5eb8;
        case 0x2b5ebcu: goto label_2b5ebc;
        case 0x2b5ec0u: goto label_2b5ec0;
        case 0x2b5ec4u: goto label_2b5ec4;
        case 0x2b5ec8u: goto label_2b5ec8;
        case 0x2b5eccu: goto label_2b5ecc;
        case 0x2b5ed0u: goto label_2b5ed0;
        case 0x2b5ed4u: goto label_2b5ed4;
        case 0x2b5ed8u: goto label_2b5ed8;
        case 0x2b5edcu: goto label_2b5edc;
        case 0x2b5ee0u: goto label_2b5ee0;
        case 0x2b5ee4u: goto label_2b5ee4;
        case 0x2b5ee8u: goto label_2b5ee8;
        case 0x2b5eecu: goto label_2b5eec;
        default: break;
    }

    ctx->pc = 0x2b5d10u;

label_2b5d10:
    // 0x2b5d10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b5d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2b5d14:
    // 0x2b5d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b5d18:
    // 0x2b5d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b5d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b5d1c:
    // 0x2b5d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b5d20:
    // 0x2b5d20: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2b5d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_2b5d24:
    // 0x2b5d24: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b5d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b5d28:
    // 0x2b5d28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b5d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b5d2c:
    // 0x2b5d2c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2b5d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2b5d30:
    // 0x2b5d30: 0x320f809  jalr        $t9
label_2b5d34:
    if (ctx->pc == 0x2B5D34u) {
        ctx->pc = 0x2B5D38u;
        goto label_2b5d38;
    }
    ctx->pc = 0x2B5D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B5D38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5D30u, 0x2B5D38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B5D38u;
label_2b5d38:
    // 0x2b5d38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b5d38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5d3c:
    // 0x2b5d3c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x2b5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_2b5d40:
    // 0x2b5d40: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2b5d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b5d44:
    // 0x2b5d44: 0xc089a88  jal         func_226A20
label_2b5d48:
    if (ctx->pc == 0x2B5D48u) {
        ctx->pc = 0x2B5D4Cu;
        goto label_2b5d4c;
    }
    ctx->pc = 0x2B5D44u;
    SET_GPR_U32(ctx, 31, 0x2B5D4Cu);
    ctx->pc = 0x226A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A20u, 0x2B5D44u, 0x2B5D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D4Cu;
label_2b5d4c:
    // 0x2b5d4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5d50:
    // 0x2b5d50: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x2b5d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2b5d54:
    // 0x2b5d54: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x2b5d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b5d58:
    // 0x2b5d58: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b5d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b5d5c:
    // 0x2b5d5c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b5d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b5d60:
    // 0x2b5d60: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b5d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5d64:
    // 0x2b5d64: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2b5d64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2b5d68:
    // 0x2b5d68: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b5d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2b5d6c:
    // 0x2b5d6c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2b5d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b5d70:
    // 0x2b5d70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b5d70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b5d74:
    // 0x2b5d74: 0x0  nop
    ctx->pc = 0x2b5d74u;
    // NOP
label_2b5d78:
    // 0x2b5d78: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b5d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2b5d7c:
    // 0x2b5d7c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2b5d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b5d80:
    // 0x2b5d80: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x2b5d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b5d84:
    // 0x2b5d84: 0xc104cf2  jal         func_4133C8
label_2b5d88:
    if (ctx->pc == 0x2B5D88u) {
        ctx->pc = 0x2B5D8Cu;
        goto label_2b5d8c;
    }
    ctx->pc = 0x2B5D84u;
    SET_GPR_U32(ctx, 31, 0x2B5D8Cu);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2B5D84u, 0x2B5D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D8Cu;
label_2b5d8c:
    // 0x2b5d8c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b5d90:
    // 0x2b5d90: 0x9042002e  lbu         $v0, 0x2E($v0)
    ctx->pc = 0x2b5d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2b5d94:
    // 0x2b5d94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b5d98:
    if (ctx->pc == 0x2B5D98u) {
        ctx->pc = 0x2B5D9Cu;
        goto label_2b5d9c;
    }
    ctx->pc = 0x2B5D94u;
    {
        const bool branch_taken_0x2b5d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d94) {
            ctx->pc = 0x2B5DB4u;
            goto label_2b5db4;
        }
    }
    ctx->pc = 0x2B5D9Cu;
label_2b5d9c:
    // 0x2b5d9c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2b5da0:
    // 0x2b5da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b5da4:
    // 0x2b5da4: 0x0  nop
    ctx->pc = 0x2b5da4u;
    // NOP
label_2b5da8:
    // 0x2b5da8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b5da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2b5dac:
    // 0x2b5dac: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b5db0:
    if (ctx->pc == 0x2B5DB0u) {
        ctx->pc = 0x2B5DB4u;
        goto label_2b5db4;
    }
    ctx->pc = 0x2B5DACu;
    {
        const bool branch_taken_0x2b5dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5dac) {
            ctx->pc = 0x2B5DC4u;
            goto label_2b5dc4;
        }
    }
    ctx->pc = 0x2B5DB4u;
label_2b5db4:
    // 0x2b5db4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b5db8:
    // 0x2b5db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b5dbc:
    // 0x2b5dbc: 0x0  nop
    ctx->pc = 0x2b5dbcu;
    // NOP
label_2b5dc0:
    // 0x2b5dc0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b5dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2b5dc4:
    // 0x2b5dc4: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2b5dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b5dc8:
    // 0x2b5dc8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b5dcc:
    // 0x2b5dcc: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2b5dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b5dd0:
    // 0x2b5dd0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b5dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5dd4:
    // 0x2b5dd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b5dd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b5dd8:
    // 0x2b5dd8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b5dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5ddc:
    // 0x2b5ddc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b5ddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b5de0:
    // 0x2b5de0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2b5de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5de4:
    // 0x2b5de4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b5de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b5de8:
    // 0x2b5de8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2b5de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2b5dec:
    // 0x2b5dec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b5decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b5df0:
    // 0x2b5df0: 0x9042002e  lbu         $v0, 0x2E($v0)
    ctx->pc = 0x2b5df0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2b5df4:
    // 0x2b5df4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b5df8:
    if (ctx->pc == 0x2B5DF8u) {
        ctx->pc = 0x2B5DFCu;
        goto label_2b5dfc;
    }
    ctx->pc = 0x2B5DF4u;
    {
        const bool branch_taken_0x2b5df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5df4) {
            ctx->pc = 0x2B5E14u;
            goto label_2b5e14;
        }
    }
    ctx->pc = 0x2B5DFCu;
label_2b5dfc:
    // 0x2b5dfc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2b5e00:
    // 0x2b5e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b5e04:
    // 0x2b5e04: 0x0  nop
    ctx->pc = 0x2b5e04u;
    // NOP
label_2b5e08:
    // 0x2b5e08: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2b5e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2b5e0c:
    // 0x2b5e0c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b5e10:
    if (ctx->pc == 0x2B5E10u) {
        ctx->pc = 0x2B5E14u;
        goto label_2b5e14;
    }
    ctx->pc = 0x2B5E0Cu;
    {
        const bool branch_taken_0x2b5e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e0c) {
            ctx->pc = 0x2B5E24u;
            goto label_2b5e24;
        }
    }
    ctx->pc = 0x2B5E14u;
label_2b5e14:
    // 0x2b5e14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b5e18:
    // 0x2b5e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b5e1c:
    // 0x2b5e1c: 0x0  nop
    ctx->pc = 0x2b5e1cu;
    // NOP
label_2b5e20:
    // 0x2b5e20: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2b5e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2b5e24:
    // 0x2b5e24: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2b5e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b5e28:
    // 0x2b5e28: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b5e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b5e2c:
    // 0x2b5e2c: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2b5e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b5e30:
    // 0x2b5e30: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2b5e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5e34:
    // 0x2b5e34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b5e34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b5e38:
    // 0x2b5e38: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b5e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5e3c:
    // 0x2b5e3c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b5e3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b5e40:
    // 0x2b5e40: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b5e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5e44:
    // 0x2b5e44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b5e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b5e48:
    // 0x2b5e48: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b5e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2b5e4c:
    // 0x2b5e4c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b5e50:
    // 0x2b5e50: 0x9042002e  lbu         $v0, 0x2E($v0)
    ctx->pc = 0x2b5e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2b5e54:
    // 0x2b5e54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b5e58:
    if (ctx->pc == 0x2B5E58u) {
        ctx->pc = 0x2B5E5Cu;
        goto label_2b5e5c;
    }
    ctx->pc = 0x2B5E54u;
    {
        const bool branch_taken_0x2b5e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e54) {
            ctx->pc = 0x2B5E74u;
            goto label_2b5e74;
        }
    }
    ctx->pc = 0x2B5E5Cu;
label_2b5e5c:
    // 0x2b5e5c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2b5e60:
    // 0x2b5e60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b5e64:
    // 0x2b5e64: 0x0  nop
    ctx->pc = 0x2b5e64u;
    // NOP
label_2b5e68:
    // 0x2b5e68: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2b5e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2b5e6c:
    // 0x2b5e6c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b5e70:
    if (ctx->pc == 0x2B5E70u) {
        ctx->pc = 0x2B5E74u;
        goto label_2b5e74;
    }
    ctx->pc = 0x2B5E6Cu;
    {
        const bool branch_taken_0x2b5e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e6c) {
            ctx->pc = 0x2B5E84u;
            goto label_2b5e84;
        }
    }
    ctx->pc = 0x2B5E74u;
label_2b5e74:
    // 0x2b5e74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b5e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b5e78:
    // 0x2b5e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b5e7c:
    // 0x2b5e7c: 0x0  nop
    ctx->pc = 0x2b5e7cu;
    // NOP
label_2b5e80:
    // 0x2b5e80: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2b5e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2b5e84:
    // 0x2b5e84: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2b5e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b5e88:
    // 0x2b5e88: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b5e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b5e8c:
    // 0x2b5e8c: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2b5e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b5e90:
    // 0x2b5e90: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2b5e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5e94:
    // 0x2b5e94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b5e94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b5e98:
    // 0x2b5e98: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b5e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5e9c:
    // 0x2b5e9c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b5e9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b5ea0:
    // 0x2b5ea0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2b5ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5ea4:
    // 0x2b5ea4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b5ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b5ea8:
    // 0x2b5ea8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2b5ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2b5eac:
    // 0x2b5eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5eb0:
    // 0x2b5eb0: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x2b5eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b5eb4:
    // 0x2b5eb4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b5eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b5eb8:
    // 0x2b5eb8: 0xc106598  jal         func_419660
label_2b5ebc:
    if (ctx->pc == 0x2B5EBCu) {
        ctx->pc = 0x2B5EC0u;
        goto label_2b5ec0;
    }
    ctx->pc = 0x2B5EB8u;
    SET_GPR_U32(ctx, 31, 0x2B5EC0u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x2B5EB8u, 0x2B5EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5EC0u;
label_2b5ec0:
    // 0x2b5ec0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b5ec4:
    // 0x2b5ec4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2b5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b5ec8:
    // 0x2b5ec8: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2b5ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
label_2b5ecc:
    // 0x2b5ecc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b5eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b5ed0:
    // 0x2b5ed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b5ed4:
    // 0x2b5ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b5ed8:
    // 0x2b5ed8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b5ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b5edc:
    // 0x2b5edc: 0x3e00008  jr          $ra
label_2b5ee0:
    if (ctx->pc == 0x2B5EE0u) {
        ctx->pc = 0x2B5EE4u;
        goto label_2b5ee4;
    }
    ctx->pc = 0x2B5EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5EE4u;
label_2b5ee4:
    // 0x2b5ee4: 0x0  nop
    ctx->pc = 0x2b5ee4u;
    // NOP
label_2b5ee8:
    // 0x2b5ee8: 0x0  nop
    ctx->pc = 0x2b5ee8u;
    // NOP
label_2b5eec:
    // 0x2b5eec: 0x0  nop
    ctx->pc = 0x2b5eecu;
    // NOP
    ctx->pc = 0x2b5ef0u;
}
