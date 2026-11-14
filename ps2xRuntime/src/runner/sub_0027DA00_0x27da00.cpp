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

// Function: sub_0027DA00
// Address: 0x27da00 - 0x27dba0
void sub_0027DA00_0x27da00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DA00_0x27da00");
#endif

    switch (ctx->pc) {
        case 0x27da2cu: goto label_27da2c;
        case 0x27da38u: goto label_27da38;
        case 0x27da4cu: goto label_27da4c;
        case 0x27da5cu: goto label_27da5c;
        case 0x27da68u: goto label_27da68;
        case 0x27da78u: goto label_27da78;
        case 0x27da90u: goto label_27da90;
        case 0x27daa8u: goto label_27daa8;
        case 0x27daccu: goto label_27dacc;
        case 0x27dae8u: goto label_27dae8;
        case 0x27dafcu: goto label_27dafc;
        case 0x27db40u: goto label_27db40;
        case 0x27db4cu: goto label_27db4c;
        case 0x27db5cu: goto label_27db5c;
        default: break;
    }

    ctx->pc = 0x27da00u;

    // 0x27da00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x27da00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x27da04: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27da04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x27da08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27da08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x27da0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27da0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27da10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27da10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27da14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27da14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27da18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27da18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27da1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27da1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27da20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27da20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27da24: 0xc090864  jal         func_242190
    ctx->pc = 0x27DA24u;
    SET_GPR_U32(ctx, 31, 0x27DA2Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x27DA24u, 0x27DA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA2Cu;
label_27da2c:
    // 0x27da2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27da2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da30: 0xc090590  jal         func_241640
    ctx->pc = 0x27DA30u;
    SET_GPR_U32(ctx, 31, 0x27DA38u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x27DA30u, 0x27DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA38u;
label_27da38:
    // 0x27da38: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27da38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27da3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da40: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27da40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27da44: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x27DA44u;
    SET_GPR_U32(ctx, 31, 0x27DA4Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x27DA44u, 0x27DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA4Cu;
label_27da4c:
    // 0x27da4c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27da4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27da50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da54: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x27DA54u;
    SET_GPR_U32(ctx, 31, 0x27DA5Cu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27DA54u, 0x27DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA5Cu;
label_27da5c:
    // 0x27da5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27da5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da60: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x27DA60u;
    {
        const bool branch_taken_0x27da60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27da60) {
            ctx->pc = 0x27DB50u;
            goto label_27db50;
        }
    }
    ctx->pc = 0x27DA68u;
label_27da68:
    // 0x27da68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27da68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27da6c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x27da6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27da70: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27DA70u;
    SET_GPR_U32(ctx, 31, 0x27DA78u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27DA70u, 0x27DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA78u;
label_27da78:
    // 0x27da78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27da78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da7c: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x27DA7Cu;
    {
        const bool branch_taken_0x27da7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27da7c) {
            ctx->pc = 0x27DB4Cu;
            goto label_27db4c;
        }
    }
    ctx->pc = 0x27DA84u;
    // 0x27da84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27da84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da88: 0xc0a85b4  jal         func_2A16D0
    ctx->pc = 0x27DA88u;
    SET_GPR_U32(ctx, 31, 0x27DA90u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x27DA88u, 0x27DA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA90u;
label_27da90:
    // 0x27da90: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x27DA90u;
    {
        const bool branch_taken_0x27da90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27da90) {
            ctx->pc = 0x27DB4Cu;
            goto label_27db4c;
        }
    }
    ctx->pc = 0x27DA98u;
    // 0x27da98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27da98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27da9c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27da9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27daa0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27DAA0u;
    SET_GPR_U32(ctx, 31, 0x27DAA8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27DAA0u, 0x27DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DAA8u;
label_27daa8:
    // 0x27daa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27daa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27daac: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x27DAACu;
    {
        const bool branch_taken_0x27daac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x27daac) {
            ctx->pc = 0x27DB4Cu;
            goto label_27db4c;
        }
    }
    ctx->pc = 0x27DAB4u;
    // 0x27dab4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x27dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x27dab8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x27DAB8u;
    {
        const bool branch_taken_0x27dab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dab8) {
            ctx->pc = 0x27DB4Cu;
            goto label_27db4c;
        }
    }
    ctx->pc = 0x27DAC0u;
    // 0x27dac0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27dac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dac4: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x27DAC4u;
    SET_GPR_U32(ctx, 31, 0x27DACCu);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x27DAC4u, 0x27DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DACCu;
label_27dacc:
    // 0x27dacc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27daccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dad0: 0x1260001e  beqz        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x27DAD0u;
    {
        const bool branch_taken_0x27dad0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dad0) {
            ctx->pc = 0x27DB4Cu;
            goto label_27db4c;
        }
    }
    ctx->pc = 0x27DAD8u;
    // 0x27dad8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27dadc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x27dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27dae0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27DAE0u;
    SET_GPR_U32(ctx, 31, 0x27DAE8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27DAE0u, 0x27DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DAE8u;
label_27dae8:
    // 0x27dae8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27dae8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27daec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27daecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27daf0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x27daf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27daf4: 0xc121e84  jal         func_487A10
    ctx->pc = 0x27DAF4u;
    SET_GPR_U32(ctx, 31, 0x27DAFCu);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x27DAF4u, 0x27DAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DAFCu;
label_27dafc:
    // 0x27dafc: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x27dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27db00: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x27db00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27db04: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27db04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27db08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27db08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27db0c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x27db0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27db10: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27db10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27db14: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27db14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x27db18: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x27db18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27db1c: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x27db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x27db20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27db20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27db24: 0x0  nop
    ctx->pc = 0x27db24u;
    // NOP
    // 0x27db28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27db28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27db2c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x27db2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x27db30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27db30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db34: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x27db34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27db38: 0xc0a8b68  jal         func_2A2DA0
    ctx->pc = 0x27DB38u;
    SET_GPR_U32(ctx, 31, 0x27DB40u);
    ctx->pc = 0x2A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2DA0u, 0x27DB38u, 0x27DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB40u;
label_27db40:
    // 0x27db40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27db40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db44: 0xc0a8bf0  jal         func_2A2FC0
    ctx->pc = 0x27DB44u;
    SET_GPR_U32(ctx, 31, 0x27DB4Cu);
    ctx->pc = 0x2A2FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FC0u, 0x27DB44u, 0x27DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB4Cu;
label_27db4c:
    // 0x27db4c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x27db4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_27db50:
    // 0x27db50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27db50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db54: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x27DB54u;
    SET_GPR_U32(ctx, 31, 0x27DB5Cu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x27DB54u, 0x27DB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB5Cu;
label_27db5c:
    // 0x27db5c: 0x1602ffc2  bne         $s0, $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x27DB5Cu;
    {
        const bool branch_taken_0x27db5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x27db5c) {
            ctx->pc = 0x27DA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27da68;
        }
    }
    ctx->pc = 0x27DB64u;
    // 0x27db64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27db64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27db68: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27db68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27db6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27db6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27db70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27db70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27db74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27db74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27db78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27db78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27db7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27db7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27db80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27db80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27db84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27db84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27db88: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x27db88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27db8c: 0x3e00008  jr          $ra
    ctx->pc = 0x27DB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DB94u;
    // 0x27db94: 0x0  nop
    ctx->pc = 0x27db94u;
    // NOP
    // 0x27db98: 0x0  nop
    ctx->pc = 0x27db98u;
    // NOP
    // 0x27db9c: 0x0  nop
    ctx->pc = 0x27db9cu;
    // NOP
    ctx->pc = 0x27dba0u;
}
