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

// Function: sub_004AAFE0
// Address: 0x4aafe0 - 0x4ab190
void sub_004AAFE0_0x4aafe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AAFE0_0x4aafe0");
#endif

    switch (ctx->pc) {
        case 0x4aafe0u: goto label_4aafe0;
        case 0x4aafe4u: goto label_4aafe4;
        case 0x4aafe8u: goto label_4aafe8;
        case 0x4aafecu: goto label_4aafec;
        case 0x4aaff0u: goto label_4aaff0;
        case 0x4aaff4u: goto label_4aaff4;
        case 0x4aaff8u: goto label_4aaff8;
        case 0x4aaffcu: goto label_4aaffc;
        case 0x4ab000u: goto label_4ab000;
        case 0x4ab004u: goto label_4ab004;
        case 0x4ab008u: goto label_4ab008;
        case 0x4ab00cu: goto label_4ab00c;
        case 0x4ab010u: goto label_4ab010;
        case 0x4ab014u: goto label_4ab014;
        case 0x4ab018u: goto label_4ab018;
        case 0x4ab01cu: goto label_4ab01c;
        case 0x4ab020u: goto label_4ab020;
        case 0x4ab024u: goto label_4ab024;
        case 0x4ab028u: goto label_4ab028;
        case 0x4ab02cu: goto label_4ab02c;
        case 0x4ab030u: goto label_4ab030;
        case 0x4ab034u: goto label_4ab034;
        case 0x4ab038u: goto label_4ab038;
        case 0x4ab03cu: goto label_4ab03c;
        case 0x4ab040u: goto label_4ab040;
        case 0x4ab044u: goto label_4ab044;
        case 0x4ab048u: goto label_4ab048;
        case 0x4ab04cu: goto label_4ab04c;
        case 0x4ab050u: goto label_4ab050;
        case 0x4ab054u: goto label_4ab054;
        case 0x4ab058u: goto label_4ab058;
        case 0x4ab05cu: goto label_4ab05c;
        case 0x4ab060u: goto label_4ab060;
        case 0x4ab064u: goto label_4ab064;
        case 0x4ab068u: goto label_4ab068;
        case 0x4ab06cu: goto label_4ab06c;
        case 0x4ab070u: goto label_4ab070;
        case 0x4ab074u: goto label_4ab074;
        case 0x4ab078u: goto label_4ab078;
        case 0x4ab07cu: goto label_4ab07c;
        case 0x4ab080u: goto label_4ab080;
        case 0x4ab084u: goto label_4ab084;
        case 0x4ab088u: goto label_4ab088;
        case 0x4ab08cu: goto label_4ab08c;
        case 0x4ab090u: goto label_4ab090;
        case 0x4ab094u: goto label_4ab094;
        case 0x4ab098u: goto label_4ab098;
        case 0x4ab09cu: goto label_4ab09c;
        case 0x4ab0a0u: goto label_4ab0a0;
        case 0x4ab0a4u: goto label_4ab0a4;
        case 0x4ab0a8u: goto label_4ab0a8;
        case 0x4ab0acu: goto label_4ab0ac;
        case 0x4ab0b0u: goto label_4ab0b0;
        case 0x4ab0b4u: goto label_4ab0b4;
        case 0x4ab0b8u: goto label_4ab0b8;
        case 0x4ab0bcu: goto label_4ab0bc;
        case 0x4ab0c0u: goto label_4ab0c0;
        case 0x4ab0c4u: goto label_4ab0c4;
        case 0x4ab0c8u: goto label_4ab0c8;
        case 0x4ab0ccu: goto label_4ab0cc;
        case 0x4ab0d0u: goto label_4ab0d0;
        case 0x4ab0d4u: goto label_4ab0d4;
        case 0x4ab0d8u: goto label_4ab0d8;
        case 0x4ab0dcu: goto label_4ab0dc;
        case 0x4ab0e0u: goto label_4ab0e0;
        case 0x4ab0e4u: goto label_4ab0e4;
        case 0x4ab0e8u: goto label_4ab0e8;
        case 0x4ab0ecu: goto label_4ab0ec;
        case 0x4ab0f0u: goto label_4ab0f0;
        case 0x4ab0f4u: goto label_4ab0f4;
        case 0x4ab0f8u: goto label_4ab0f8;
        case 0x4ab0fcu: goto label_4ab0fc;
        case 0x4ab100u: goto label_4ab100;
        case 0x4ab104u: goto label_4ab104;
        case 0x4ab108u: goto label_4ab108;
        case 0x4ab10cu: goto label_4ab10c;
        case 0x4ab110u: goto label_4ab110;
        case 0x4ab114u: goto label_4ab114;
        case 0x4ab118u: goto label_4ab118;
        case 0x4ab11cu: goto label_4ab11c;
        case 0x4ab120u: goto label_4ab120;
        case 0x4ab124u: goto label_4ab124;
        case 0x4ab128u: goto label_4ab128;
        case 0x4ab12cu: goto label_4ab12c;
        case 0x4ab130u: goto label_4ab130;
        case 0x4ab134u: goto label_4ab134;
        case 0x4ab138u: goto label_4ab138;
        case 0x4ab13cu: goto label_4ab13c;
        case 0x4ab140u: goto label_4ab140;
        case 0x4ab144u: goto label_4ab144;
        case 0x4ab148u: goto label_4ab148;
        case 0x4ab14cu: goto label_4ab14c;
        case 0x4ab150u: goto label_4ab150;
        case 0x4ab154u: goto label_4ab154;
        case 0x4ab158u: goto label_4ab158;
        case 0x4ab15cu: goto label_4ab15c;
        case 0x4ab160u: goto label_4ab160;
        case 0x4ab164u: goto label_4ab164;
        case 0x4ab168u: goto label_4ab168;
        case 0x4ab16cu: goto label_4ab16c;
        case 0x4ab170u: goto label_4ab170;
        case 0x4ab174u: goto label_4ab174;
        case 0x4ab178u: goto label_4ab178;
        case 0x4ab17cu: goto label_4ab17c;
        case 0x4ab180u: goto label_4ab180;
        case 0x4ab184u: goto label_4ab184;
        case 0x4ab188u: goto label_4ab188;
        case 0x4ab18cu: goto label_4ab18c;
        default: break;
    }

    ctx->pc = 0x4aafe0u;

label_4aafe0:
    // 0x4aafe0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4aafe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4aafe4:
    // 0x4aafe4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4aafe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4aafe8:
    // 0x4aafe8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4aafe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4aafec:
    // 0x4aafec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4aafecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aaff0:
    // 0x4aaff0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4aaff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4aaff4:
    // 0x4aaff4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aaff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4aaff8:
    // 0x4aaff8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4aaff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4aaffc:
    // 0x4aaffc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4aaffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ab000:
    // 0x4ab000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ab000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ab004:
    // 0x4ab004: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4ab004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4ab008:
    // 0x4ab008: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x4ab008u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4ab00c:
    // 0x4ab00c: 0x1213000d  beq         $s0, $s3, . + 4 + (0xD << 2)
label_4ab010:
    if (ctx->pc == 0x4AB010u) {
        ctx->pc = 0x4AB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB00Cu;
        // 0x4ab010: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB014u;
        goto label_4ab014;
    }
    ctx->pc = 0x4AB00Cu;
    {
        const bool branch_taken_0x4ab00c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x4AB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB00Cu;
        // 0x4ab010: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab00c) {
            ctx->pc = 0x4AB044u;
            goto label_4ab044;
        }
    }
    ctx->pc = 0x4AB014u;
label_4ab014:
    // 0x4ab014: 0x0  nop
    ctx->pc = 0x4ab014u;
    // NOP
label_4ab018:
    // 0x4ab018: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_4ab01c:
    if (ctx->pc == 0x4AB01Cu) {
        ctx->pc = 0x4AB01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB018u;
        // 0x4ab01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB020u;
        goto label_4ab020;
    }
    ctx->pc = 0x4AB018u;
    {
        const bool branch_taken_0x4ab018 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AB01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB018u;
        // 0x4ab01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab018) {
            ctx->pc = 0x4AB028u;
            goto label_4ab028;
        }
    }
    ctx->pc = 0x4AB020u;
label_4ab020:
    // 0x4ab020: 0x10000005  b           . + 4 + (0x5 << 2)
label_4ab024:
    if (ctx->pc == 0x4AB024u) {
        ctx->pc = 0x4AB024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB020u;
        // 0x4ab024: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB028u;
        goto label_4ab028;
    }
    ctx->pc = 0x4AB020u;
    {
        const bool branch_taken_0x4ab020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB020u;
        // 0x4ab024: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab020) {
            ctx->pc = 0x4AB038u;
            goto label_4ab038;
        }
    }
    ctx->pc = 0x4AB028u;
label_4ab028:
    // 0x4ab028: 0x240f809  jalr        $s2
label_4ab02c:
    if (ctx->pc == 0x4AB02Cu) {
        ctx->pc = 0x4AB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB028u;
        // 0x4ab02c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB030u;
        goto label_4ab030;
    }
    ctx->pc = 0x4AB028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x4AB030u);
        ctx->pc = 0x4AB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB028u;
        // 0x4ab02c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB028u, 0x4AB030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AB030u;
label_4ab030:
    // 0x4ab030: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x4ab030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4ab034:
    // 0x4ab034: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x4ab034u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_4ab038:
    // 0x4ab038: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x4ab038u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ab03c:
    // 0x4ab03c: 0x1613fff6  bne         $s0, $s3, . + 4 + (-0xA << 2)
label_4ab040:
    if (ctx->pc == 0x4AB040u) {
        ctx->pc = 0x4AB044u;
        goto label_4ab044;
    }
    ctx->pc = 0x4AB03Cu;
    {
        const bool branch_taken_0x4ab03c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x4ab03c) {
            ctx->pc = 0x4AB018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab018;
        }
    }
    ctx->pc = 0x4AB044u;
label_4ab044:
    // 0x4ab044: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ab044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ab048:
    // 0x4ab048: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4ab048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ab04c:
    // 0x4ab04c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4ab04cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ab050:
    // 0x4ab050: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ab050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ab054:
    // 0x4ab054: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4ab054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ab058:
    // 0x4ab058: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4ab058u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ab05c:
    // 0x4ab05c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ab05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ab060:
    // 0x4ab060: 0x3e00008  jr          $ra
label_4ab064:
    if (ctx->pc == 0x4AB064u) {
        ctx->pc = 0x4AB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB060u;
        // 0x4ab064: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB068u;
        goto label_4ab068;
    }
    ctx->pc = 0x4AB060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB060u;
        // 0x4ab064: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB068u;
label_4ab068:
    // 0x4ab068: 0xc7808130  lwc1        $f0, -0x7ED0($gp)
    ctx->pc = 0x4ab068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ab06c:
    // 0x4ab06c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ab06cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ab070:
    // 0x4ab070: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x4ab070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ab074:
    // 0x4ab074: 0x0  nop
    ctx->pc = 0x4ab074u;
    // NOP
label_4ab078:
    // 0x4ab078: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_4ab07c:
    if (ctx->pc == 0x4AB07Cu) {
        ctx->pc = 0x4AB07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB078u;
        // 0x4ab07c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB080u;
        goto label_4ab080;
    }
    ctx->pc = 0x4AB078u;
    {
        const bool branch_taken_0x4ab078 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AB07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB078u;
        // 0x4ab07c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab078) {
            ctx->pc = 0x4AB0A8u;
            goto label_4ab0a8;
        }
    }
    ctx->pc = 0x4AB080u;
label_4ab080:
    // 0x4ab080: 0xc0c39ee  jal         func_30E7B8
label_4ab084:
    if (ctx->pc == 0x4AB084u) {
        ctx->pc = 0x4AB088u;
        goto label_4ab088;
    }
    ctx->pc = 0x4AB080u;
    SET_GPR_U32(ctx, 31, 0x4AB088u);
    ctx->pc = 0x30E7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7B8u, 0x4AB080u, 0x4AB088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB088u;
label_4ab088:
    // 0x4ab088: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x4ab088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
label_4ab08c:
    // 0x4ab08c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4ab08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ab090:
    // 0x4ab090: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4ab090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4ab094:
    // 0x4ab094: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ab094u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4ab098:
    // 0x4ab098: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4ab098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_4ab09c:
    // 0x4ab09c: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x4ab09cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4ab0a0:
    // 0x4ab0a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4ab0a4:
    if (ctx->pc == 0x4AB0A4u) {
        ctx->pc = 0x4AB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB0A0u;
        // 0x4ab0a4: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB0A8u;
        goto label_4ab0a8;
    }
    ctx->pc = 0x4AB0A0u;
    {
        const bool branch_taken_0x4ab0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB0A0u;
        // 0x4ab0a4: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab0a0) {
            ctx->pc = 0x4AB0ACu;
            goto label_4ab0ac;
        }
    }
    ctx->pc = 0x4AB0A8u;
label_4ab0a8:
    // 0x4ab0a8: 0x2402d8f0  addiu       $v0, $zero, -0x2710
    ctx->pc = 0x4ab0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
label_4ab0ac:
    // 0x4ab0ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ab0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ab0b0:
    // 0x4ab0b0: 0x3e00008  jr          $ra
label_4ab0b4:
    if (ctx->pc == 0x4AB0B4u) {
        ctx->pc = 0x4AB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB0B0u;
        // 0x4ab0b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB0B8u;
        goto label_4ab0b8;
    }
    ctx->pc = 0x4AB0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB0B0u;
        // 0x4ab0b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB0B8u;
label_4ab0b8:
    // 0x4ab0b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ab0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4ab0bc:
    // 0x4ab0bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ab0bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ab0c0:
    // 0x4ab0c0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x4ab0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_4ab0c4:
    // 0x4ab0c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4ab0c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ab0c8:
    // 0x4ab0c8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x4ab0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4ab0cc:
    // 0x4ab0cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_4ab0d0:
    if (ctx->pc == 0x4AB0D0u) {
        ctx->pc = 0x4AB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB0CCu;
        // 0x4ab0d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB0D4u;
        goto label_4ab0d4;
    }
    ctx->pc = 0x4AB0CCu;
    {
        const bool branch_taken_0x4ab0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB0CCu;
        // 0x4ab0d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab0cc) {
            ctx->pc = 0x4AB130u;
            goto label_4ab130;
        }
    }
    ctx->pc = 0x4AB0D4u;
label_4ab0d4:
    // 0x4ab0d4: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x4ab0d4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
label_4ab0d8:
    // 0x4ab0d8: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x4ab0d8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_4ab0dc:
    // 0x4ab0dc: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x4ab0dcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
label_4ab0e0:
    // 0x4ab0e0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4ab0e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_4ab0e4:
    // 0x4ab0e4: 0x356bfffe  ori         $t3, $t3, 0xFFFE
    ctx->pc = 0x4ab0e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65534);
label_4ab0e8:
    // 0x4ab0e8: 0xac1024  and         $v0, $a1, $t4
    ctx->pc = 0x4ab0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 12));
label_4ab0ec:
    // 0x4ab0ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4ab0f0:
    if (ctx->pc == 0x4AB0F0u) {
        ctx->pc = 0x4AB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB0ECu;
        // 0x4ab0f0: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB0F4u;
        goto label_4ab0f4;
    }
    ctx->pc = 0x4AB0ECu;
    {
        const bool branch_taken_0x4ab0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB0ECu;
        // 0x4ab0f0: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab0ec) {
            ctx->pc = 0x4AB0FCu;
            goto label_4ab0fc;
        }
    }
    ctx->pc = 0x4AB0F4u;
label_4ab0f4:
    // 0x4ab0f4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4ab0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_4ab0f8:
    // 0x4ab0f8: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4ab0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
label_4ab0fc:
    // 0x4ab0fc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4ab0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4ab100:
    // 0x4ab100: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_4ab104:
    if (ctx->pc == 0x4AB104u) {
        ctx->pc = 0x4AB104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB100u;
        // 0x4ab104: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB108u;
        goto label_4ab108;
    }
    ctx->pc = 0x4AB100u;
    {
        const bool branch_taken_0x4ab100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab100) {
            ctx->pc = 0x4AB104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB100u;
            // 0x4ab104: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB124u;
            goto label_4ab124;
        }
    }
    ctx->pc = 0x4AB108u;
label_4ab108:
    // 0x4ab108: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x4ab108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_4ab10c:
    // 0x4ab10c: 0x10c1024  and         $v0, $t0, $t4
    ctx->pc = 0x4ab10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 12));
label_4ab110:
    // 0x4ab110: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4ab114:
    if (ctx->pc == 0x4AB114u) {
        ctx->pc = 0x4AB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB110u;
        // 0x4ab114: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB118u;
        goto label_4ab118;
    }
    ctx->pc = 0x4AB110u;
    {
        const bool branch_taken_0x4ab110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB110u;
        // 0x4ab114: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab110) {
            ctx->pc = 0x4AB120u;
            goto label_4ab120;
        }
    }
    ctx->pc = 0x4AB118u;
label_4ab118:
    // 0x4ab118: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4ab118u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4ab11c:
    // 0x4ab11c: 0x10a4024  and         $t0, $t0, $t2
    ctx->pc = 0x4ab11cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
label_4ab120:
    // 0x4ab120: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x4ab120u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_4ab124:
    // 0x4ab124: 0x8b1024  and         $v0, $a0, $t3
    ctx->pc = 0x4ab124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
label_4ab128:
    // 0x4ab128: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_4ab12c:
    if (ctx->pc == 0x4AB12Cu) {
        ctx->pc = 0x4AB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB128u;
        // 0x4ab12c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB130u;
        goto label_4ab130;
    }
    ctx->pc = 0x4AB128u;
    {
        const bool branch_taken_0x4ab128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB128u;
        // 0x4ab12c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab128) {
            ctx->pc = 0x4AB0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab0e8;
        }
    }
    ctx->pc = 0x4AB130u;
label_4ab130:
    // 0x4ab130: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x4ab130u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
label_4ab134:
    // 0x4ab134: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
label_4ab138:
    if (ctx->pc == 0x4AB138u) {
        ctx->pc = 0x4AB138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB134u;
        // 0x4ab138: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB13Cu;
        goto label_4ab13c;
    }
    ctx->pc = 0x4AB134u;
    {
        const bool branch_taken_0x4ab134 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4AB138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB134u;
        // 0x4ab138: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab134) {
            ctx->pc = 0x4AB14Cu;
            goto label_4ab14c;
        }
    }
    ctx->pc = 0x4AB13Cu;
label_4ab13c:
    // 0x4ab13c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4ab13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_4ab140:
    // 0x4ab140: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4ab140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_4ab144:
    // 0x4ab144: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ab144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4ab148:
    // 0x4ab148: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4ab148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4ab14c:
    // 0x4ab14c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4ab14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4ab150:
    // 0x4ab150: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4ab154:
    if (ctx->pc == 0x4AB154u) {
        ctx->pc = 0x4AB154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB150u;
        // 0x4ab154: 0x917c0  sll         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB158u;
        goto label_4ab158;
    }
    ctx->pc = 0x4AB150u;
    {
        const bool branch_taken_0x4ab150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB150u;
        // 0x4ab154: 0x917c0  sll         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab150) {
            ctx->pc = 0x4AB17Cu;
            goto label_4ab17c;
        }
    }
    ctx->pc = 0x4AB158u;
label_4ab158:
    // 0x4ab158: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x4ab158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_4ab15c:
    // 0x4ab15c: 0x10a1024  and         $v0, $t0, $t2
    ctx->pc = 0x4ab15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
label_4ab160:
    // 0x4ab160: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4ab164:
    if (ctx->pc == 0x4AB164u) {
        ctx->pc = 0x4AB164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB160u;
        // 0x4ab164: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB168u;
        goto label_4ab168;
    }
    ctx->pc = 0x4AB160u;
    {
        const bool branch_taken_0x4ab160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB160u;
        // 0x4ab164: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab160) {
            ctx->pc = 0x4AB178u;
            goto label_4ab178;
        }
    }
    ctx->pc = 0x4AB168u;
label_4ab168:
    // 0x4ab168: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4ab168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_4ab16c:
    // 0x4ab16c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4ab16cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4ab170:
    // 0x4ab170: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ab170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4ab174:
    // 0x4ab174: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4ab174u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_4ab178:
    // 0x4ab178: 0x917c0  sll         $v0, $t1, 31
    ctx->pc = 0x4ab178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 31));
label_4ab17c:
    // 0x4ab17c: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x4ab17cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_4ab180:
    // 0x4ab180: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x4ab180u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_4ab184:
    // 0x4ab184: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x4ab184u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
label_4ab188:
    // 0x4ab188: 0x3e00008  jr          $ra
label_4ab18c:
    if (ctx->pc == 0x4AB18Cu) {
        ctx->pc = 0x4AB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB188u;
        // 0x4ab18c: 0xace80000  sw          $t0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AB190u;
        goto label_fallthrough_0x4ab188;
    }
    ctx->pc = 0x4AB188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB188u;
        // 0x4ab18c: 0xace80000  sw          $t0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4ab188:
    ctx->pc = 0x4AB190u;
}
