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

// Function: sub_0018EC20
// Address: 0x18ec20 - 0x18ef20
void sub_0018EC20_0x18ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EC20_0x18ec20");
#endif

    switch (ctx->pc) {
        case 0x18ec74u: goto label_18ec74;
        case 0x18ece0u: goto label_18ece0;
        case 0x18ecf0u: goto label_18ecf0;
        case 0x18ed10u: goto label_18ed10;
        case 0x18ed38u: goto label_18ed38;
        case 0x18ed48u: goto label_18ed48;
        case 0x18ed60u: goto label_18ed60;
        case 0x18ed70u: goto label_18ed70;
        case 0x18ed80u: goto label_18ed80;
        case 0x18edf8u: goto label_18edf8;
        case 0x18ee18u: goto label_18ee18;
        case 0x18ee94u: goto label_18ee94;
        case 0x18eeb4u: goto label_18eeb4;
        case 0x18eee0u: goto label_18eee0;
        case 0x18eef0u: goto label_18eef0;
        default: break;
    }

    ctx->pc = 0x18ec20u;

    // 0x18ec20: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x18ec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x18ec24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x18ec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x18ec28: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18ec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18ec2c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18ec2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18ec30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18ec30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18ec34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18ec34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18ec38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ec38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18ec3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ec40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ec40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ec44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ec44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ec48: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x18ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x18ec4c: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x18ec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x18ec50: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x18ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x18ec54: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x18ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x18ec58: 0x878391e8  lh          $v1, -0x6E18($gp)
    ctx->pc = 0x18ec58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939112)));
    // 0x18ec5c: 0x878291ea  lh          $v0, -0x6E16($gp)
    ctx->pc = 0x18ec5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939114)));
    // 0x18ec60: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x18ec60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18ec64: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x18ec64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x18ec68: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18ec6c: 0xc0495d4  jal         func_125750
    ctx->pc = 0x18EC6Cu;
    SET_GPR_U32(ctx, 31, 0x18EC74u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x18EC6Cu, 0x18EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC74u;
label_18ec74:
    // 0x18ec74: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18ec78: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x18ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18ec7c: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x18EC7Cu;
    {
        const bool branch_taken_0x18ec7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec7c) {
            ctx->pc = 0x18EE30u;
            goto label_18ee30;
        }
    }
    ctx->pc = 0x18EC84u;
    // 0x18ec84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ec88: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18EC88u;
    {
        const bool branch_taken_0x18ec88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18ec88) {
            ctx->pc = 0x18ECF8u;
            goto label_18ecf8;
        }
    }
    ctx->pc = 0x18EC90u;
    // 0x18ec90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ec94: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EC94u;
    {
        const bool branch_taken_0x18ec94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18ec94) {
            ctx->pc = 0x18ECA4u;
            goto label_18eca4;
        }
    }
    ctx->pc = 0x18EC9Cu;
    // 0x18ec9c: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x18EC9Cu;
    {
        const bool branch_taken_0x18ec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec9c) {
            ctx->pc = 0x18EEC4u;
            goto label_18eec4;
        }
    }
    ctx->pc = 0x18ECA4u;
label_18eca4:
    // 0x18eca4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18eca8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ecac: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18ecacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ecb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18ECB0u;
    {
        const bool branch_taken_0x18ecb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ecb0) {
            ctx->pc = 0x18ECC8u;
            goto label_18ecc8;
        }
    }
    ctx->pc = 0x18ECB8u;
    // 0x18ecb8: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x18ecb8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x18ecbc: 0x267359d0  addiu       $s3, $s3, 0x59D0
    ctx->pc = 0x18ecbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22992));
    // 0x18ecc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18ECC0u;
    {
        const bool branch_taken_0x18ecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ecc0) {
            ctx->pc = 0x18ECD0u;
            goto label_18ecd0;
        }
    }
    ctx->pc = 0x18ECC8u;
label_18ecc8:
    // 0x18ecc8: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x18ecc8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x18eccc: 0x267359e0  addiu       $s3, $s3, 0x59E0
    ctx->pc = 0x18ecccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 23008));
label_18ecd0:
    // 0x18ecd0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x18ecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x18ecd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18ecd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ecd8: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x18ECD8u;
    SET_GPR_U32(ctx, 31, 0x18ECE0u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x18ECD8u, 0x18ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ECE0u;
label_18ece0:
    // 0x18ece0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18ece4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ece4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ece8: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x18ECE8u;
    SET_GPR_U32(ctx, 31, 0x18ECF0u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x18ECE8u, 0x18ECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ECF0u;
label_18ecf0:
    // 0x18ecf0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x18ECF0u;
    {
        const bool branch_taken_0x18ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ecf0) {
            ctx->pc = 0x18EEC4u;
            goto label_18eec4;
        }
    }
    ctx->pc = 0x18ECF8u;
label_18ecf8:
    // 0x18ecf8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18ecfc: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x18ecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x18ed00: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x18ed04: 0x24a559f0  addiu       $a1, $a1, 0x59F0
    ctx->pc = 0x18ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23024));
    // 0x18ed08: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x18ED08u;
    SET_GPR_U32(ctx, 31, 0x18ED10u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x18ED08u, 0x18ED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED10u;
label_18ed10:
    // 0x18ed10: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18ED10u;
    {
        const bool branch_taken_0x18ed10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ed10) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18ED18u;
    // 0x18ed18: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x18ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x18ed1c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x18ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18ed20: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x18ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x18ed24: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x18ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18ed28: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x18ed28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x18ed2c: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x18ed2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x18ed30: 0xc063bc8  jal         func_18EF20
    ctx->pc = 0x18ED30u;
    SET_GPR_U32(ctx, 31, 0x18ED38u);
    ctx->pc = 0x18EF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EF20u, 0x18ED30u, 0x18ED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED38u;
label_18ed38:
    // 0x18ed38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18ed38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed3c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18ed40: 0xc041b48  jal         func_106D20
    ctx->pc = 0x18ED40u;
    SET_GPR_U32(ctx, 31, 0x18ED48u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x18ED40u, 0x18ED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED48u;
label_18ed48:
    // 0x18ed48: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18ed4c: 0x278591f0  addiu       $a1, $gp, -0x6E10
    ctx->pc = 0x18ed4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939120));
    // 0x18ed50: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x18ed50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18ed54: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x18ed54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18ed58: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x18ED58u;
    SET_GPR_U32(ctx, 31, 0x18ED60u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x18ED58u, 0x18ED60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED60u;
label_18ed60:
    // 0x18ed60: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18ed64: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x18ed64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18ed68: 0xc1195a4  jal         func_465690
    ctx->pc = 0x18ED68u;
    SET_GPR_U32(ctx, 31, 0x18ED70u);
    ctx->pc = 0x465690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465690u, 0x18ED68u, 0x18ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED70u;
label_18ed70:
    // 0x18ed70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18ed70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18ed74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18ed74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18ed78: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x18ED78u;
    SET_GPR_U32(ctx, 31, 0x18ED80u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x18ED78u, 0x18ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED80u;
label_18ed80:
    // 0x18ed80: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x18ED80u;
    {
        const bool branch_taken_0x18ed80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed80) {
            ctx->pc = 0x18EEC4u;
            goto label_18eec4;
        }
    }
    ctx->pc = 0x18ED88u;
label_18ed88:
    // 0x18ed88: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18ed8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ed90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ed94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ed94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ed98: 0x0  nop
    ctx->pc = 0x18ed98u;
    // NOP
    // 0x18ed9c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18ed9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18eda0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18eda4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18eda8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18eda8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18edac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x18edacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x18edb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18edb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18edb4: 0x0  nop
    ctx->pc = 0x18edb4u;
    // NOP
    // 0x18edb8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x18edb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18edbc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18edc0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x18edc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18edc4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18edc8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18edc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18edcc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18edccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18edd0: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x18edd0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x18edd4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18edd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18edd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18eddc: 0x0  nop
    ctx->pc = 0x18eddcu;
    // NOP
    // 0x18ede0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18ede0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18ede4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18ede4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18ede8: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x18ede8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x18edec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18edecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18edf0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18EDF0u;
    {
        const bool branch_taken_0x18edf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18edf0) {
            ctx->pc = 0x18EE1Cu;
            goto label_18ee1c;
        }
    }
    ctx->pc = 0x18EDF8u;
label_18edf8:
    // 0x18edf8: 0x237102a  slt         $v0, $s1, $s7
    ctx->pc = 0x18edf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x18edfc: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x18edfcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ee00: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x18ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x18ee04: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x18ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18ee08: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18ee08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18ee0c: 0x944500ac  lhu         $a1, 0xAC($v0)
    ctx->pc = 0x18ee0cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x18ee10: 0xc056cdc  jal         func_15B370
    ctx->pc = 0x18EE10u;
    SET_GPR_U32(ctx, 31, 0x18EE18u);
    ctx->pc = 0x15B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B370u, 0x18EE10u, 0x18EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EE18u;
label_18ee18:
    // 0x18ee18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ee18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18ee1c:
    // 0x18ee1c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x18ee1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x18ee20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x18EE20u;
    {
        const bool branch_taken_0x18ee20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee20) {
            ctx->pc = 0x18EDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18edf8;
        }
    }
    ctx->pc = 0x18EE28u;
    // 0x18ee28: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x18EE28u;
    {
        const bool branch_taken_0x18ee28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee28) {
            ctx->pc = 0x18EEC4u;
            goto label_18eec4;
        }
    }
    ctx->pc = 0x18EE30u;
label_18ee30:
    // 0x18ee30: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18ee34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ee38: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x18ee38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ee3c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18ee40: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18ee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ee44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18ee44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18ee48: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x18ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x18ee4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ee4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ee50: 0x0  nop
    ctx->pc = 0x18ee50u;
    // NOP
    // 0x18ee54: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x18ee54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18ee58: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18ee5c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x18ee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ee60: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18ee64: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18ee64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ee68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18ee68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18ee6c: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x18ee6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x18ee70: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18ee74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ee74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ee78: 0x0  nop
    ctx->pc = 0x18ee78u;
    // NOP
    // 0x18ee7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18ee7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18ee80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18ee80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18ee84: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x18ee84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x18ee88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18ee88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18EE8Cu;
    {
        const bool branch_taken_0x18ee8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee8c) {
            ctx->pc = 0x18EEB8u;
            goto label_18eeb8;
        }
    }
    ctx->pc = 0x18EE94u;
label_18ee94:
    // 0x18ee94: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x18ee94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x18ee98: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x18ee98u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ee9c: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x18ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x18eea0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x18eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18eea4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18eea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18eea8: 0x944500ac  lhu         $a1, 0xAC($v0)
    ctx->pc = 0x18eea8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x18eeac: 0xc056cdc  jal         func_15B370
    ctx->pc = 0x18EEACu;
    SET_GPR_U32(ctx, 31, 0x18EEB4u);
    ctx->pc = 0x15B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B370u, 0x18EEACu, 0x18EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EEB4u;
label_18eeb4:
    // 0x18eeb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18eeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18eeb8:
    // 0x18eeb8: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x18eeb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x18eebc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x18EEBCu;
    {
        const bool branch_taken_0x18eebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eebc) {
            ctx->pc = 0x18EE94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ee94;
        }
    }
    ctx->pc = 0x18EEC4u;
label_18eec4:
    // 0x18eec4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18eec8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x18eec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18eecc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18eed0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x18eed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18eed4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18eed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eed8: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x18EED8u;
    SET_GPR_U32(ctx, 31, 0x18EEE0u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x18EED8u, 0x18EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EEE0u;
label_18eee0:
    // 0x18eee0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18eee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18eee4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18eee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18eee8: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x18EEE8u;
    SET_GPR_U32(ctx, 31, 0x18EEF0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x18EEE8u, 0x18EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EEF0u;
label_18eef0:
    // 0x18eef0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x18eef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18eef4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18eef4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18eef8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18eef8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18eefc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18eefcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ef00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18ef00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ef04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ef04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ef08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ef08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ef0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ef0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ef10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ef10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ef14: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x18ef14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x18ef18: 0x3e00008  jr          $ra
    ctx->pc = 0x18EF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EF20u;
}
