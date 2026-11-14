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

// Function: sub_003B1D40
// Address: 0x3b1d40 - 0x3b1ef8
void sub_003B1D40_0x3b1d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1D40_0x3b1d40");
#endif

    switch (ctx->pc) {
        case 0x3b1d7cu: goto label_3b1d7c;
        case 0x3b1d9cu: goto label_3b1d9c;
        case 0x3b1dc8u: goto label_3b1dc8;
        case 0x3b1ddcu: goto label_3b1ddc;
        case 0x3b1df8u: goto label_3b1df8;
        case 0x3b1e10u: goto label_3b1e10;
        case 0x3b1e20u: goto label_3b1e20;
        case 0x3b1e30u: goto label_3b1e30;
        case 0x3b1e38u: goto label_3b1e38;
        case 0x3b1e8cu: goto label_3b1e8c;
        case 0x3b1ebcu: goto label_3b1ebc;
        default: break;
    }

    ctx->pc = 0x3b1d40u;

    // 0x3b1d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b1d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b1d44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b1d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b1d48: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x3b1d48u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3b1d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1d50: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x3b1d50u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3b1d54: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x3b1d54u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x3b1d58: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x3b1d58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3b1d5c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x3b1d5cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x3b1d60: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3b1d60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3b1d64: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x3b1d64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    // 0x3b1d68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b1d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b1d6c: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x3b1d6cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x3b1d70: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3b1d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b1d74: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B1D74u;
    SET_GPR_U32(ctx, 31, 0x3B1D7Cu);
    ctx->pc = 0x3B1D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1D74u;
    // 0x3b1d78: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B1D74u, 0x3B1D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1D7Cu;
label_3b1d7c:
    // 0x3b1d7c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B1D7Cu;
    {
        const bool branch_taken_0x3b1d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D7Cu;
        // 0x3b1d80: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d7c) {
            ctx->pc = 0x3B1DC0u;
            goto label_3b1dc0;
        }
    }
    ctx->pc = 0x3B1D84u;
    // 0x3b1d84: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x3b1d84u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b1d88: 0xe7b60004  swc1        $f22, 0x4($sp)
    ctx->pc = 0x3b1d88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b1d8c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3b1d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b1d90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b1d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b1d94: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B1D94u;
    SET_GPR_U32(ctx, 31, 0x3B1D9Cu);
    ctx->pc = 0x3B1D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1D94u;
    // 0x3b1d98: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B1D94u, 0x3B1D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1D9Cu;
label_3b1d9c:
    // 0x3b1d9c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3b1d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b1da0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3b1da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3b1da4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x3b1da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3b1da8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3b1da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b1dac: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x3b1dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x3b1db0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3b1db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3b1db4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3b1db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3b1db8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B1DB8u;
    {
        const bool branch_taken_0x3b1db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DB8u;
        // 0x3b1dbc: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1db8) {
            ctx->pc = 0x3B1DF8u;
            goto label_3b1df8;
        }
    }
    ctx->pc = 0x3B1DC0u;
label_3b1dc0:
    // 0x3b1dc0: 0xc0ec604  jal         func_3B1810
    ctx->pc = 0x3B1DC0u;
    SET_GPR_U32(ctx, 31, 0x3B1DC8u);
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x3B1DC0u, 0x3B1DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1DC8u;
label_3b1dc8:
    // 0x3b1dc8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3b1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b1dcc: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x3b1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x3b1dd0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3b1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b1dd4: 0xc0ec64a  jal         func_3B1928
    ctx->pc = 0x3B1DD4u;
    SET_GPR_U32(ctx, 31, 0x3B1DDCu);
    ctx->pc = 0x3B1DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1DD4u;
    // 0x3b1dd8: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1928u, 0x3B1DD4u, 0x3B1DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1DDCu;
label_3b1ddc:
    // 0x3b1ddc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3b1ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b1de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1de4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b1de4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3b1de8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3b1de8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x3b1dec: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3b1decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3b1df0: 0xc0ec6d6  jal         func_3B1B58
    ctx->pc = 0x3B1DF0u;
    SET_GPR_U32(ctx, 31, 0x3B1DF8u);
    ctx->pc = 0x3B1DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1DF0u;
    // 0x3b1df4: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1B58u, 0x3B1DF0u, 0x3B1DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1DF8u;
label_3b1df8:
    // 0x3b1df8: 0x4614bd00  add.s       $f20, $f23, $f20
    ctx->pc = 0x3b1df8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
    // 0x3b1dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1e00: 0x4615b540  add.s       $f21, $f22, $f21
    ctx->pc = 0x3b1e00u;
    ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x3b1e04: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3b1e04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x3b1e08: 0xc0ebb40  jal         func_3AED00
    ctx->pc = 0x3B1E08u;
    SET_GPR_U32(ctx, 31, 0x3B1E10u);
    ctx->pc = 0x3B1E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1E08u;
    // 0x3b1e0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3B1E08u, 0x3B1E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1E10u;
label_3b1e10:
    // 0x3b1e10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3b1e10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3b1e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1e18: 0xc0ebb40  jal         func_3AED00
    ctx->pc = 0x3B1E18u;
    SET_GPR_U32(ctx, 31, 0x3B1E20u);
    ctx->pc = 0x3B1E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1E18u;
    // 0x3b1e1c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3B1E18u, 0x3B1E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1E20u;
label_3b1e20:
    // 0x3b1e20: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b1e20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3b1e24: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3b1e24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3b1e28: 0xc0ebb40  jal         func_3AED00
    ctx->pc = 0x3B1E28u;
    SET_GPR_U32(ctx, 31, 0x3B1E30u);
    ctx->pc = 0x3B1E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1E28u;
    // 0x3b1e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3B1E28u, 0x3B1E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1E30u;
label_3b1e30:
    // 0x3b1e30: 0xc0ebc42  jal         func_3AF108
    ctx->pc = 0x3B1E30u;
    SET_GPR_U32(ctx, 31, 0x3B1E38u);
    ctx->pc = 0x3B1E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1E30u;
    // 0x3b1e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF108u, 0x3B1E30u, 0x3B1E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1E38u;
label_3b1e38:
    // 0x3b1e38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b1e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1e3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b1e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1e40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b1e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b1e44: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x3b1e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3b1e48: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x3b1e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3b1e4c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x3b1e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3b1e50: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x3b1e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b1e54: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E54u;
        // 0x3b1e58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1E5Cu;
    // 0x3b1e5c: 0x0  nop
    ctx->pc = 0x3b1e5cu;
    // NOP
    // 0x3b1e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b1e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b1e64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b1e68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b1e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b1e6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b1e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b1e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b1e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b1e74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b1e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1e78: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3b1e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b1e7c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B1E7Cu;
    {
        const bool branch_taken_0x3b1e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B1E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E7Cu;
        // 0x3b1e80: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1e7c) {
            ctx->pc = 0x3B1E94u;
            goto label_3b1e94;
        }
    }
    ctx->pc = 0x3B1E84u;
    // 0x3b1e84: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B1E84u;
    SET_GPR_U32(ctx, 31, 0x3B1E8Cu);
    ctx->pc = 0x3B1E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1E84u;
    // 0x3b1e88: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B1E84u, 0x3B1E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1E8Cu;
label_3b1e8c:
    // 0x3b1e8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B1E8Cu;
    {
        const bool branch_taken_0x3b1e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E8Cu;
        // 0x3b1e90: 0xc4410004  lwc1        $f1, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1e8c) {
            ctx->pc = 0x3B1E9Cu;
            goto label_3b1e9c;
        }
    }
    ctx->pc = 0x3B1E94u;
label_3b1e94:
    // 0x3b1e94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3b1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b1e98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3b1e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b1e9c:
    // 0x3b1e9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b1e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1ea0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b1ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1ea4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x3b1ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3b1ea8: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x3b1ea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x3b1eac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3b1eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b1eb0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3b1eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x3b1eb4: 0xc0ec004  jal         func_3B0010
    ctx->pc = 0x3B1EB4u;
    SET_GPR_U32(ctx, 31, 0x3B1EBCu);
    ctx->pc = 0x3B1EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1EB4u;
    // 0x3b1eb8: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0010u, 0x3B1EB4u, 0x3B1EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1EBCu;
label_3b1ebc:
    // 0x3b1ebc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3b1ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b1ec0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b1ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1ec4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3b1ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b1ec8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x3b1ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b1ecc: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x3b1eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b1ed0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3b1ed0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3b1ed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b1ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1ed8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3b1ed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3b1edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1ee0: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x3b1ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x3b1ee4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3b1ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x3b1ee8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b1ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b1eec: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1EECu;
        // 0x3b1ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1EF4u;
    // 0x3b1ef4: 0x0  nop
    ctx->pc = 0x3b1ef4u;
    // NOP
    ctx->pc = 0x3b1ef8u;
}
