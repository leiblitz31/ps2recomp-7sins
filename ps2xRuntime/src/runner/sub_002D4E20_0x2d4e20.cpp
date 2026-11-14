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

// Function: sub_002D4E20
// Address: 0x2d4e20 - 0x2d5180
void sub_002D4E20_0x2d4e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4E20_0x2d4e20");
#endif

    switch (ctx->pc) {
        case 0x2d4e54u: goto label_2d4e54;
        case 0x2d4e60u: goto label_2d4e60;
        case 0x2d4e88u: goto label_2d4e88;
        case 0x2d4e9cu: goto label_2d4e9c;
        case 0x2d4eb0u: goto label_2d4eb0;
        case 0x2d4edcu: goto label_2d4edc;
        case 0x2d4efcu: goto label_2d4efc;
        case 0x2d4f14u: goto label_2d4f14;
        case 0x2d4f28u: goto label_2d4f28;
        case 0x2d4f50u: goto label_2d4f50;
        case 0x2d4f70u: goto label_2d4f70;
        case 0x2d4f84u: goto label_2d4f84;
        case 0x2d4fa0u: goto label_2d4fa0;
        case 0x2d4fb4u: goto label_2d4fb4;
        case 0x2d4fd0u: goto label_2d4fd0;
        case 0x2d4ff4u: goto label_2d4ff4;
        case 0x2d5010u: goto label_2d5010;
        case 0x2d5024u: goto label_2d5024;
        case 0x2d5038u: goto label_2d5038;
        case 0x2d504cu: goto label_2d504c;
        case 0x2d505cu: goto label_2d505c;
        case 0x2d5070u: goto label_2d5070;
        case 0x2d5084u: goto label_2d5084;
        case 0x2d5094u: goto label_2d5094;
        case 0x2d50b0u: goto label_2d50b0;
        case 0x2d50ccu: goto label_2d50cc;
        case 0x2d50e0u: goto label_2d50e0;
        case 0x2d5108u: goto label_2d5108;
        case 0x2d5128u: goto label_2d5128;
        case 0x2d513cu: goto label_2d513c;
        case 0x2d514cu: goto label_2d514c;
        default: break;
    }

    ctx->pc = 0x2d4e20u;

    // 0x2d4e20: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2d4e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2d4e24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d4e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d4e28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d4e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d4e2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d4e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d4e30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d4e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d4e34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d4e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d4e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d4e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d4e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d4e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d4e40: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x2d4e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x2d4e44: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x2d4e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x2d4e48: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2d4e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d4e4c: 0xc068ea0  jal         func_1A3A80
    ctx->pc = 0x2D4E4Cu;
    SET_GPR_U32(ctx, 31, 0x2D4E54u);
    ctx->pc = 0x1A3A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A80u, 0x2D4E4Cu, 0x2D4E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4E54u;
label_2d4e54:
    // 0x2d4e54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d4e54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e58: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x2D4E58u;
    {
        const bool branch_taken_0x2d4e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4e58) {
            ctx->pc = 0x2D5140u;
            goto label_2d5140;
        }
    }
    ctx->pc = 0x2D4E60u;
label_2d4e60:
    // 0x2d4e60: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d4e64: 0x8c50002c  lw          $s0, 0x2C($v0)
    ctx->pc = 0x2d4e64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d4e68: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2d4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2d4e6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d4e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4e70: 0x105000b2  beq         $v0, $s0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2D4E70u;
    {
        const bool branch_taken_0x2d4e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2d4e70) {
            ctx->pc = 0x2D513Cu;
            goto label_2d513c;
        }
    }
    ctx->pc = 0x2D4E78u;
    // 0x2d4e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e7c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d4e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d4e80: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D4E80u;
    SET_GPR_U32(ctx, 31, 0x2D4E88u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D4E80u, 0x2D4E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4E88u;
label_2d4e88:
    // 0x2d4e88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d4e88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e90: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d4e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d4e94: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D4E94u;
    SET_GPR_U32(ctx, 31, 0x2D4E9Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D4E94u, 0x2D4E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4E9Cu;
label_2d4e9c:
    // 0x2d4e9c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d4e9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ea0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d4ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d4ea4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d4ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ea8: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D4EA8u;
    SET_GPR_U32(ctx, 31, 0x2D4EB0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D4EA8u, 0x2D4EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4EB0u;
label_2d4eb0:
    // 0x2d4eb0: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2d4eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d4eb4: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2d4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d4eb8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d4eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4ebc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d4ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4ec0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d4ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4ec4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d4ec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d4ec8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d4ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d4ecc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d4eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d4ed0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d4ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ed4: 0xc0ad2e8  jal         func_2B4BA0
    ctx->pc = 0x2D4ED4u;
    SET_GPR_U32(ctx, 31, 0x2D4EDCu);
    ctx->pc = 0x2B4BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BA0u, 0x2D4ED4u, 0x2D4EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4EDCu;
label_2d4edc:
    // 0x2d4edc: 0xc78181a0  lwc1        $f1, -0x7E60($gp)
    ctx->pc = 0x2d4edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4ee0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d4ee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4ee4: 0x45010095  bc1t        . + 4 + (0x95 << 2)
    ctx->pc = 0x2D4EE4u;
    {
        const bool branch_taken_0x2d4ee4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d4ee4) {
            ctx->pc = 0x2D513Cu;
            goto label_2d513c;
        }
    }
    ctx->pc = 0x2D4EECu;
    // 0x2d4eec: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2d4eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d4ef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ef4: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x2D4EF4u;
    SET_GPR_U32(ctx, 31, 0x2D4EFCu);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x2D4EF4u, 0x2D4EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4EFCu;
label_2d4efc:
    // 0x2d4efc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D4EFCu;
    {
        const bool branch_taken_0x2d4efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4efc) {
            ctx->pc = 0x2D4F90u;
            goto label_2d4f90;
        }
    }
    ctx->pc = 0x2D4F04u;
    // 0x2d4f04: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2d4f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d4f08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f0c: 0xc0b4db0  jal         func_2D36C0
    ctx->pc = 0x2D4F0Cu;
    SET_GPR_U32(ctx, 31, 0x2D4F14u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2D4F0Cu, 0x2D4F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F14u;
label_2d4f14:
    // 0x2d4f14: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2D4F14u;
    {
        const bool branch_taken_0x2d4f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4f14) {
            ctx->pc = 0x2D5128u;
            goto label_2d5128;
        }
    }
    ctx->pc = 0x2D4F1Cu;
    // 0x2d4f1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d4f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f20: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2D4F20u;
    SET_GPR_U32(ctx, 31, 0x2D4F28u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2D4F20u, 0x2D4F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F28u;
label_2d4f28:
    // 0x2d4f28: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2D4F28u;
    {
        const bool branch_taken_0x2d4f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4f28) {
            ctx->pc = 0x2D5128u;
            goto label_2d5128;
        }
    }
    ctx->pc = 0x2D4F30u;
    // 0x2d4f30: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2d4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2d4f34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d4f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d4f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f3c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2d4f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d4f40: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2d4f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d4f44: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x2d4f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d4f48: 0xc0b5e3c  jal         func_2D78F0
    ctx->pc = 0x2D4F48u;
    SET_GPR_U32(ctx, 31, 0x2D4F50u);
    ctx->pc = 0x2D78F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D78F0u, 0x2D4F48u, 0x2D4F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F50u;
label_2d4f50:
    // 0x2d4f50: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2D4F50u;
    {
        const bool branch_taken_0x2d4f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4f50) {
            ctx->pc = 0x2D5128u;
            goto label_2d5128;
        }
    }
    ctx->pc = 0x2D4F58u;
    // 0x2d4f58: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2d4f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d4f5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f60: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2d4f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d4f64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d4f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f68: 0xc0b43b8  jal         func_2D0EE0
    ctx->pc = 0x2D4F68u;
    SET_GPR_U32(ctx, 31, 0x2D4F70u);
    ctx->pc = 0x2D0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EE0u, 0x2D4F68u, 0x2D4F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F70u;
label_2d4f70:
    // 0x2d4f70: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d4f70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4f74: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2d4f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d4f78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f7c: 0xc0b59e4  jal         func_2D6790
    ctx->pc = 0x2D4F7Cu;
    SET_GPR_U32(ctx, 31, 0x2D4F84u);
    ctx->pc = 0x2D6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6790u, 0x2D4F7Cu, 0x2D4F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F84u;
label_2d4f84:
    // 0x2d4f84: 0xa0550038  sb          $s5, 0x38($v0)
    ctx->pc = 0x2d4f84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 21));
    // 0x2d4f88: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2D4F88u;
    {
        const bool branch_taken_0x2d4f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4f88) {
            ctx->pc = 0x2D5128u;
            goto label_2d5128;
        }
    }
    ctx->pc = 0x2D4F90u;
label_2d4f90:
    // 0x2d4f90: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2d4f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d4f94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f98: 0xc0b4db0  jal         func_2D36C0
    ctx->pc = 0x2D4F98u;
    SET_GPR_U32(ctx, 31, 0x2D4FA0u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2D4F98u, 0x2D4FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FA0u;
label_2d4fa0:
    // 0x2d4fa0: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2D4FA0u;
    {
        const bool branch_taken_0x2d4fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4fa0) {
            ctx->pc = 0x2D50C0u;
            goto label_2d50c0;
        }
    }
    ctx->pc = 0x2D4FA8u;
    // 0x2d4fa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d4fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4fac: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x2D4FACu;
    SET_GPR_U32(ctx, 31, 0x2D4FB4u);
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x2D4FACu, 0x2D4FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FB4u;
label_2d4fb4:
    // 0x2d4fb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d4fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4fb8: 0x1443005b  bne         $v0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2D4FB8u;
    {
        const bool branch_taken_0x2d4fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d4fb8) {
            ctx->pc = 0x2D5128u;
            goto label_2d5128;
        }
    }
    ctx->pc = 0x2D4FC0u;
    // 0x2d4fc0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2d4fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d4fc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4fc8: 0xc0b59c0  jal         func_2D6700
    ctx->pc = 0x2D4FC8u;
    SET_GPR_U32(ctx, 31, 0x2D4FD0u);
    ctx->pc = 0x2D6700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6700u, 0x2D4FC8u, 0x2D4FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FD0u;
label_2d4fd0:
    // 0x2d4fd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d4fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4fd4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2d4fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2d4fd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d4fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d4fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4fe0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2d4fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d4fe4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2d4fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d4fe8: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x2d4fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d4fec: 0xc0b5e3c  jal         func_2D78F0
    ctx->pc = 0x2D4FECu;
    SET_GPR_U32(ctx, 31, 0x2D4FF4u);
    ctx->pc = 0x2D78F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D78F0u, 0x2D4FECu, 0x2D4FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FF4u;
label_2d4ff4:
    // 0x2d4ff4: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2D4FF4u;
    {
        const bool branch_taken_0x2d4ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4ff4) {
            ctx->pc = 0x2D5128u;
            goto label_2d5128;
        }
    }
    ctx->pc = 0x2D4FFCu;
    // 0x2d4ffc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2d4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2d5000: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d5000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d5004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d5004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5008: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D5008u;
    SET_GPR_U32(ctx, 31, 0x2D5010u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D5008u, 0x2D5010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5010u;
label_2d5010:
    // 0x2d5010: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5014: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d5014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d5018: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d5018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d501c: 0xc082abc  jal         func_20AAF0
    ctx->pc = 0x2D501Cu;
    SET_GPR_U32(ctx, 31, 0x2D5024u);
    ctx->pc = 0x20AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAF0u, 0x2D501Cu, 0x2D5024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5024u;
label_2d5024:
    // 0x2d5024: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2d5024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2d5028: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d5028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d502c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d502cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5030: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D5030u;
    SET_GPR_U32(ctx, 31, 0x2D5038u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D5030u, 0x2D5038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5038u;
label_2d5038:
    // 0x2d5038: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d503c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d5040: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d5040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d5044: 0xc082aa4  jal         func_20AA90
    ctx->pc = 0x2D5044u;
    SET_GPR_U32(ctx, 31, 0x2D504Cu);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x2D5044u, 0x2D504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D504Cu;
label_2d504c:
    // 0x2d504c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d504cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5050: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2d5050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d5054: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D5054u;
    SET_GPR_U32(ctx, 31, 0x2D505Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D5054u, 0x2D505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D505Cu;
label_2d505c:
    // 0x2d505c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2d505cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2d5060: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d5060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d5064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d5064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5068: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D5068u;
    SET_GPR_U32(ctx, 31, 0x2D5070u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D5068u, 0x2D5070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5070u;
label_2d5070:
    // 0x2d5070: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5074: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d5074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d5078: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d5078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d507c: 0xc082aa4  jal         func_20AA90
    ctx->pc = 0x2D507Cu;
    SET_GPR_U32(ctx, 31, 0x2D5084u);
    ctx->pc = 0x20AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA90u, 0x2D507Cu, 0x2D5084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5084u;
label_2d5084:
    // 0x2d5084: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5088: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2d5088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d508c: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D508Cu;
    SET_GPR_U32(ctx, 31, 0x2D5094u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D508Cu, 0x2D5094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5094u;
label_2d5094:
    // 0x2d5094: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2d5094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2d5098: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2d5098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2d509c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D509Cu;
    {
        const bool branch_taken_0x2d509c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d509c) {
            ctx->pc = 0x2D5128u;
            goto label_2d5128;
        }
    }
    ctx->pc = 0x2D50A4u;
    // 0x2d50a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d50a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50a8: 0xc0b62c4  jal         func_2D8B10
    ctx->pc = 0x2D50A8u;
    SET_GPR_U32(ctx, 31, 0x2D50B0u);
    ctx->pc = 0x2D8B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8B10u, 0x2D50A8u, 0x2D50B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D50B0u;
label_2d50b0:
    // 0x2d50b0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2d50b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d50b4: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2d50b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x2d50b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D50B8u;
    {
        const bool branch_taken_0x2d50b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d50b8) {
            ctx->pc = 0x2D5128u;
            goto label_2d5128;
        }
    }
    ctx->pc = 0x2D50C0u;
label_2d50c0:
    // 0x2d50c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d50c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50c4: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2D50C4u;
    SET_GPR_U32(ctx, 31, 0x2D50CCu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2D50C4u, 0x2D50CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D50CCu;
label_2d50cc:
    // 0x2d50cc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D50CCu;
    {
        const bool branch_taken_0x2d50cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d50cc) {
            ctx->pc = 0x2D5128u;
            goto label_2d5128;
        }
    }
    ctx->pc = 0x2D50D4u;
    // 0x2d50d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d50d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50d8: 0xc0969d4  jal         func_25A750
    ctx->pc = 0x2D50D8u;
    SET_GPR_U32(ctx, 31, 0x2D50E0u);
    ctx->pc = 0x25A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A750u, 0x2D50D8u, 0x2D50E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D50E0u;
label_2d50e0:
    // 0x2d50e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D50E0u;
    {
        const bool branch_taken_0x2d50e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d50e0) {
            ctx->pc = 0x2D5128u;
            goto label_2d5128;
        }
    }
    ctx->pc = 0x2D50E8u;
    // 0x2d50e8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2d50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2d50ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d50ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d50f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d50f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50f4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2d50f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d50f8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2d50f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d50fc: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x2d50fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d5100: 0xc0b5e3c  jal         func_2D78F0
    ctx->pc = 0x2D5100u;
    SET_GPR_U32(ctx, 31, 0x2D5108u);
    ctx->pc = 0x2D78F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D78F0u, 0x2D5100u, 0x2D5108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5108u;
label_2d5108:
    // 0x2d5108: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D5108u;
    {
        const bool branch_taken_0x2d5108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5108) {
            ctx->pc = 0x2D5128u;
            goto label_2d5128;
        }
    }
    ctx->pc = 0x2D5110u;
    // 0x2d5110: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2d5110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d5114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5118: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2d5118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d511c: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x2d511cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d5120: 0xc0b43b8  jal         func_2D0EE0
    ctx->pc = 0x2D5120u;
    SET_GPR_U32(ctx, 31, 0x2D5128u);
    ctx->pc = 0x2D0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EE0u, 0x2D5120u, 0x2D5128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5128u;
label_2d5128:
    // 0x2d5128: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2d5128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2d512c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d512cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d5130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d5130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5134: 0xc0ad2dc  jal         func_2B4B70
    ctx->pc = 0x2D5134u;
    SET_GPR_U32(ctx, 31, 0x2D513Cu);
    ctx->pc = 0x2B4B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B70u, 0x2D5134u, 0x2D513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D513Cu;
label_2d513c:
    // 0x2d513c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2d513cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2d5140:
    // 0x2d5140: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2d5140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d5144: 0xc068e98  jal         func_1A3A60
    ctx->pc = 0x2D5144u;
    SET_GPR_U32(ctx, 31, 0x2D514Cu);
    ctx->pc = 0x1A3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A60u, 0x2D5144u, 0x2D514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D514Cu;
label_2d514c:
    // 0x2d514c: 0x1662ff44  bne         $s3, $v0, . + 4 + (-0xBC << 2)
    ctx->pc = 0x2D514Cu;
    {
        const bool branch_taken_0x2d514c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d514c) {
            ctx->pc = 0x2D4E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4e60;
        }
    }
    ctx->pc = 0x2D5154u;
    // 0x2d5154: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d5154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d5158: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d5158u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d515c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d515cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5160: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d5160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5164: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d5164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d5168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d516c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d516cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5170: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2d5170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d5174: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D517Cu;
    // 0x2d517c: 0x0  nop
    ctx->pc = 0x2d517cu;
    // NOP
    ctx->pc = 0x2d5180u;
}
