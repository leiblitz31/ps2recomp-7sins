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

// Function: sub_003ADDE8
// Address: 0x3adde8 - 0x3adf98
void sub_003ADDE8_0x3adde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADDE8_0x3adde8");
#endif

    switch (ctx->pc) {
        case 0x3ade08u: goto label_3ade08;
        case 0x3ade10u: goto label_3ade10;
        case 0x3ade90u: goto label_3ade90;
        case 0x3adf38u: goto label_3adf38;
        default: break;
    }

    ctx->pc = 0x3adde8u;

    // 0x3adde8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3adde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3addec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3addecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3addf0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3addf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3addf4: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x3addf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x3addf8: 0x2630ce80  addiu       $s0, $s1, -0x3180
    ctx->pc = 0x3addf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954624));
    // 0x3addfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3addfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ade00: 0xc103db0  jal         func_40F6C0
    ctx->pc = 0x3ADE00u;
    SET_GPR_U32(ctx, 31, 0x3ADE08u);
    ctx->pc = 0x3ADE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE00u;
    // 0x3ade04: 0xae000610  sw          $zero, 0x610($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x3ADE00u, 0x3ADE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADE08u;
label_3ade08:
    // 0x3ade08: 0xc0eb5b0  jal         func_3AD6C0
    ctx->pc = 0x3ADE08u;
    SET_GPR_U32(ctx, 31, 0x3ADE10u);
    ctx->pc = 0x3ADE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE08u;
    // 0x3ade0c: 0xae020590  sw          $v0, 0x590($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD6C0u, 0x3ADE08u, 0x3ADE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADE10u;
label_3ade10:
    // 0x3ade10: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3ade10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3ade14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3ade14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ade18: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3ade18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ade1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ade1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3ade20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ade20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ade24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ade24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ade28: 0xe60206fc  swc1        $f2, 0x6FC($s0)
    ctx->pc = 0x3ade28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1788), bits); }
    // 0x3ade2c: 0xae020708  sw          $v0, 0x708($s0)
    ctx->pc = 0x3ade2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1800), GPR_U32(ctx, 2));
    // 0x3ade30: 0xae000704  sw          $zero, 0x704($s0)
    ctx->pc = 0x3ade30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 0));
    // 0x3ade34: 0xe60106f8  swc1        $f1, 0x6F8($s0)
    ctx->pc = 0x3ade34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1784), bits); }
    // 0x3ade38: 0xae0006f0  sw          $zero, 0x6F0($s0)
    ctx->pc = 0x3ade38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1776), GPR_U32(ctx, 0));
    // 0x3ade3c: 0x26030550  addiu       $v1, $s0, 0x550
    ctx->pc = 0x3ade3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x3ade40: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x3ade40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3ade44: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3ade44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3ade48: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x3ade48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x3ade4c: 0xe6010550  swc1        $f1, 0x550($s0)
    ctx->pc = 0x3ade4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1360), bits); }
    // 0x3ade50: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ade50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ade54: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x3ade54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x3ade58: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x3ade58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x3ade5c: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x3ade5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x3ade60: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x3ade60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x3ade64: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3ade64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3ade68: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3ade68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3ade6c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3ade6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3ade70: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x3ade70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x3ade74: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x3ade74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x3ade78: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x3ade78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x3ade7c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x3ade7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x3ade80: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x3ade80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x3ade84: 0x261801fe  addiu       $t8, $s0, 0x1FE
    ctx->pc = 0x3ade84u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 510));
    // 0x3ade88: 0x241900ff  addiu       $t9, $zero, 0xFF
    ctx->pc = 0x3ade88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3ade8c: 0x0  nop
    ctx->pc = 0x3ade8cu;
    // NOP
label_3ade90:
    // 0x3ade90: 0x2722ffff  addiu       $v0, $t9, -0x1
    ctx->pc = 0x3ade90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x3ade94: 0x2723fffe  addiu       $v1, $t9, -0x2
    ctx->pc = 0x3ade94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967294));
    // 0x3ade98: 0x2724fffd  addiu       $a0, $t9, -0x3
    ctx->pc = 0x3ade98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967293));
    // 0x3ade9c: 0x2725fffc  addiu       $a1, $t9, -0x4
    ctx->pc = 0x3ade9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967292));
    // 0x3adea0: 0x2726fffb  addiu       $a2, $t9, -0x5
    ctx->pc = 0x3adea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967291));
    // 0x3adea4: 0x2727fffa  addiu       $a3, $t9, -0x6
    ctx->pc = 0x3adea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967290));
    // 0x3adea8: 0x2728fff9  addiu       $t0, $t9, -0x7
    ctx->pc = 0x3adea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967289));
    // 0x3adeac: 0x2729fff8  addiu       $t1, $t9, -0x8
    ctx->pc = 0x3adeacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967288));
    // 0x3adeb0: 0x272afff7  addiu       $t2, $t9, -0x9
    ctx->pc = 0x3adeb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967287));
    // 0x3adeb4: 0x272bfff6  addiu       $t3, $t9, -0xA
    ctx->pc = 0x3adeb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967286));
    // 0x3adeb8: 0x272cfff5  addiu       $t4, $t9, -0xB
    ctx->pc = 0x3adeb8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967285));
    // 0x3adebc: 0x272dfff4  addiu       $t5, $t9, -0xC
    ctx->pc = 0x3adebcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967284));
    // 0x3adec0: 0x272efff3  addiu       $t6, $t9, -0xD
    ctx->pc = 0x3adec0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967283));
    // 0x3adec4: 0x272ffff2  addiu       $t7, $t9, -0xE
    ctx->pc = 0x3adec4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967282));
    // 0x3adec8: 0x2730fff1  addiu       $s0, $t9, -0xF
    ctx->pc = 0x3adec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967281));
    // 0x3adecc: 0xa7190000  sh          $t9, 0x0($t8)
    ctx->pc = 0x3adeccu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 25));
    // 0x3aded0: 0xa702fffe  sh          $v0, -0x2($t8)
    ctx->pc = 0x3aded0u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967294), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aded4: 0x2739fff0  addiu       $t9, $t9, -0x10
    ctx->pc = 0x3aded4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967280));
    // 0x3aded8: 0xa703fffc  sh          $v1, -0x4($t8)
    ctx->pc = 0x3aded8u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967292), (uint16_t)GPR_U32(ctx, 3));
    // 0x3adedc: 0xa704fffa  sh          $a0, -0x6($t8)
    ctx->pc = 0x3adedcu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967290), (uint16_t)GPR_U32(ctx, 4));
    // 0x3adee0: 0xa705fff8  sh          $a1, -0x8($t8)
    ctx->pc = 0x3adee0u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967288), (uint16_t)GPR_U32(ctx, 5));
    // 0x3adee4: 0xa706fff6  sh          $a2, -0xA($t8)
    ctx->pc = 0x3adee4u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967286), (uint16_t)GPR_U32(ctx, 6));
    // 0x3adee8: 0xa707fff4  sh          $a3, -0xC($t8)
    ctx->pc = 0x3adee8u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967284), (uint16_t)GPR_U32(ctx, 7));
    // 0x3adeec: 0xa708fff2  sh          $t0, -0xE($t8)
    ctx->pc = 0x3adeecu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967282), (uint16_t)GPR_U32(ctx, 8));
    // 0x3adef0: 0xa709fff0  sh          $t1, -0x10($t8)
    ctx->pc = 0x3adef0u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967280), (uint16_t)GPR_U32(ctx, 9));
    // 0x3adef4: 0xa70affee  sh          $t2, -0x12($t8)
    ctx->pc = 0x3adef4u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967278), (uint16_t)GPR_U32(ctx, 10));
    // 0x3adef8: 0xa70bffec  sh          $t3, -0x14($t8)
    ctx->pc = 0x3adef8u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967276), (uint16_t)GPR_U32(ctx, 11));
    // 0x3adefc: 0xa70cffea  sh          $t4, -0x16($t8)
    ctx->pc = 0x3adefcu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967274), (uint16_t)GPR_U32(ctx, 12));
    // 0x3adf00: 0xa70dffe8  sh          $t5, -0x18($t8)
    ctx->pc = 0x3adf00u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967272), (uint16_t)GPR_U32(ctx, 13));
    // 0x3adf04: 0xa70effe6  sh          $t6, -0x1A($t8)
    ctx->pc = 0x3adf04u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967270), (uint16_t)GPR_U32(ctx, 14));
    // 0x3adf08: 0xa70fffe4  sh          $t7, -0x1C($t8)
    ctx->pc = 0x3adf08u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967268), (uint16_t)GPR_U32(ctx, 15));
    // 0x3adf0c: 0xa710ffe2  sh          $s0, -0x1E($t8)
    ctx->pc = 0x3adf0cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967266), (uint16_t)GPR_U32(ctx, 16));
    // 0x3adf10: 0x721ffdf  bgez        $t9, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3ADF10u;
    {
        const bool branch_taken_0x3adf10 = (GPR_S32(ctx, 25) >= 0);
        ctx->pc = 0x3ADF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADF10u;
        // 0x3adf14: 0x2718ffe0  addiu       $t8, $t8, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adf10) {
            ctx->pc = 0x3ADE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ade90;
        }
    }
    ctx->pc = 0x3ADF18u;
    // 0x3adf18: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3adf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3adf1c: 0x2419001b  addiu       $t9, $zero, 0x1B
    ctx->pc = 0x3adf1cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3adf20: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x3adf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x3adf24: 0xac400594  sw          $zero, 0x594($v0)
    ctx->pc = 0x3adf24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61D414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D414u, _value); } while (0);
    // 0x3adf28: 0x244305a0  addiu       $v1, $v0, 0x5A0
    ctx->pc = 0x3adf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x3adf2c: 0xac400598  sw          $zero, 0x598($v0)
    ctx->pc = 0x3adf2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61D418u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D418u, _value); } while (0);
    // 0x3adf30: 0xac40059c  sw          $zero, 0x59C($v0)
    ctx->pc = 0x3adf30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61D41Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D41Cu, _value); } while (0);
    // 0x3adf34: 0x0  nop
    ctx->pc = 0x3adf34u;
    // NOP
label_3adf38:
    // 0x3adf38: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3adf38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3adf3c: 0x2739fffc  addiu       $t9, $t9, -0x4
    ctx->pc = 0x3adf3cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967292));
    // 0x3adf40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3adf40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3adf44: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3adf44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3adf48: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3adf48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3adf4c: 0x721fffa  bgez        $t9, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3ADF4Cu;
    {
        const bool branch_taken_0x3adf4c = (GPR_S32(ctx, 25) >= 0);
        ctx->pc = 0x3ADF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADF4Cu;
        // 0x3adf50: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adf4c) {
            ctx->pc = 0x3ADF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3adf38;
        }
    }
    ctx->pc = 0x3ADF54u;
    // 0x3adf54: 0x2623ce80  addiu       $v1, $s1, -0x3180
    ctx->pc = 0x3adf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954624));
    // 0x3adf58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3adf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3adf5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3adf5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3adf60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3adf60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3adf64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3adf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3adf68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3adf68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3adf6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3adf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3adf70: 0xac600d20  sw          $zero, 0xD20($v1)
    ctx->pc = 0x3adf70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3360), GPR_U32(ctx, 0));
    // 0x3adf74: 0xe460071c  swc1        $f0, 0x71C($v1)
    ctx->pc = 0x3adf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1820), bits); }
    // 0x3adf78: 0xac600724  sw          $zero, 0x724($v1)
    ctx->pc = 0x3adf78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1828), GPR_U32(ctx, 0));
    // 0x3adf7c: 0xac600710  sw          $zero, 0x710($v1)
    ctx->pc = 0x3adf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1808), GPR_U32(ctx, 0));
    // 0x3adf80: 0xac600714  sw          $zero, 0x714($v1)
    ctx->pc = 0x3adf80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1812), GPR_U32(ctx, 0));
    // 0x3adf84: 0xe4600718  swc1        $f0, 0x718($v1)
    ctx->pc = 0x3adf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1816), bits); }
    // 0x3adf88: 0xac600d1c  sw          $zero, 0xD1C($v1)
    ctx->pc = 0x3adf88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3356), GPR_U32(ctx, 0));
    // 0x3adf8c: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADF8Cu;
        // 0x3adf90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADF94u;
    // 0x3adf94: 0x0  nop
    ctx->pc = 0x3adf94u;
    // NOP
    ctx->pc = 0x3adf98u;
}
