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

// Function: sub_00384FD0
// Address: 0x384fd0 - 0x385058
void sub_00384FD0_0x384fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384FD0_0x384fd0");
#endif

    switch (ctx->pc) {
        case 0x384fd0u: goto label_384fd0;
        case 0x384fd4u: goto label_384fd4;
        case 0x384fd8u: goto label_384fd8;
        case 0x384fdcu: goto label_384fdc;
        case 0x384fe0u: goto label_384fe0;
        case 0x384fe4u: goto label_384fe4;
        case 0x384fe8u: goto label_384fe8;
        case 0x384fecu: goto label_384fec;
        case 0x384ff0u: goto label_384ff0;
        case 0x384ff4u: goto label_384ff4;
        case 0x384ff8u: goto label_384ff8;
        case 0x384ffcu: goto label_384ffc;
        case 0x385000u: goto label_385000;
        case 0x385004u: goto label_385004;
        case 0x385008u: goto label_385008;
        case 0x38500cu: goto label_38500c;
        case 0x385010u: goto label_385010;
        case 0x385014u: goto label_385014;
        case 0x385018u: goto label_385018;
        case 0x38501cu: goto label_38501c;
        case 0x385020u: goto label_385020;
        case 0x385024u: goto label_385024;
        case 0x385028u: goto label_385028;
        case 0x38502cu: goto label_38502c;
        case 0x385030u: goto label_385030;
        case 0x385034u: goto label_385034;
        case 0x385038u: goto label_385038;
        case 0x38503cu: goto label_38503c;
        case 0x385040u: goto label_385040;
        case 0x385044u: goto label_385044;
        case 0x385048u: goto label_385048;
        case 0x38504cu: goto label_38504c;
        case 0x385050u: goto label_385050;
        case 0x385054u: goto label_385054;
        default: break;
    }

    ctx->pc = 0x384fd0u;

label_384fd0:
    // 0x384fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x384fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_384fd4:
    // 0x384fd4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x384fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_384fd8:
    // 0x384fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x384fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_384fdc:
    // 0x384fdc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x384fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_384fe0:
    // 0x384fe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x384fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_384fe4:
    // 0x384fe4: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x384fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_384fe8:
    // 0x384fe8: 0x8f84bd04  lw          $a0, -0x42FC($gp)
    ctx->pc = 0x384fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950148)));
label_384fec:
    // 0x384fec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x384fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_384ff0:
    // 0x384ff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_384ff4:
    // 0x384ff4: 0x40f809  jalr        $v0
label_384ff8:
    if (ctx->pc == 0x384FF8u) {
        ctx->pc = 0x384FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FF4u;
        // 0x384ff8: 0x34a50135  ori         $a1, $a1, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
        ctx->in_delay_slot = false;
        ctx->pc = 0x384FFCu;
        goto label_384ffc;
    }
    ctx->pc = 0x384FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384FFCu);
        ctx->pc = 0x384FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FF4u;
        // 0x384ff8: 0x34a50135  ori         $a1, $a1, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384FF4u, 0x384FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384FFCu;
label_384ffc:
    // 0x384ffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x384ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385000:
    // 0x385000: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_385004:
    if (ctx->pc == 0x385004u) {
        ctx->pc = 0x385004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385000u;
        // 0x385004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385008u;
        goto label_385008;
    }
    ctx->pc = 0x385000u;
    {
        const bool branch_taken_0x385000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x385004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385000u;
        // 0x385004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385000) {
            ctx->pc = 0x38503Cu;
            goto label_38503c;
        }
    }
    ctx->pc = 0x385008u;
label_385008:
    // 0x385008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x385008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38500c:
    // 0x38500c: 0xc10480a  jal         func_412028
label_385010:
    if (ctx->pc == 0x385010u) {
        ctx->pc = 0x385010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38500Cu;
        // 0x385010: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385014u;
        goto label_385014;
    }
    ctx->pc = 0x38500Cu;
    SET_GPR_U32(ctx, 31, 0x385014u);
    ctx->pc = 0x385010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38500Cu;
    // 0x385010: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x38500Cu, 0x385014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385014u;
label_385014:
    // 0x385014: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_385018:
    if (ctx->pc == 0x385018u) {
        ctx->pc = 0x385018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385014u;
        // 0x385018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38501Cu;
        goto label_38501c;
    }
    ctx->pc = 0x385014u;
    {
        const bool branch_taken_0x385014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385014u;
        // 0x385018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385014) {
            ctx->pc = 0x38503Cu;
            goto label_38503c;
        }
    }
    ctx->pc = 0x38501Cu;
label_38501c:
    // 0x38501c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x38501cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_385020:
    // 0x385020: 0xc103468  jal         func_40D1A0
label_385024:
    if (ctx->pc == 0x385024u) {
        ctx->pc = 0x385024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385020u;
        // 0x385024: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385028u;
        goto label_385028;
    }
    ctx->pc = 0x385020u;
    SET_GPR_U32(ctx, 31, 0x385028u);
    ctx->pc = 0x385024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385020u;
    // 0x385024: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x385020u, 0x385028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385028u;
label_385028:
    // 0x385028: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_38502c:
    if (ctx->pc == 0x38502Cu) {
        ctx->pc = 0x38502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385028u;
        // 0x38502c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385030u;
        goto label_385030;
    }
    ctx->pc = 0x385028u;
    {
        const bool branch_taken_0x385028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385028u;
        // 0x38502c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385028) {
            ctx->pc = 0x38503Cu;
            goto label_38503c;
        }
    }
    ctx->pc = 0x385030u;
label_385030:
    // 0x385030: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x385030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385034:
    // 0x385034: 0x10000002  b           . + 4 + (0x2 << 2)
label_385038:
    if (ctx->pc == 0x385038u) {
        ctx->pc = 0x385038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385034u;
        // 0x385038: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38503Cu;
        goto label_38503c;
    }
    ctx->pc = 0x385034u;
    {
        const bool branch_taken_0x385034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385034u;
        // 0x385038: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385034) {
            ctx->pc = 0x385040u;
            goto label_385040;
        }
    }
    ctx->pc = 0x38503Cu;
label_38503c:
    // 0x38503c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38503cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385040:
    // 0x385040: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x385040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_385044:
    // 0x385044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x385044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_385048:
    // 0x385048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38504c:
    // 0x38504c: 0x3e00008  jr          $ra
label_385050:
    if (ctx->pc == 0x385050u) {
        ctx->pc = 0x385050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38504Cu;
        // 0x385050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385054u;
        goto label_385054;
    }
    ctx->pc = 0x38504Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38504Cu;
        // 0x385050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38504Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385054u;
label_385054:
    // 0x385054: 0x0  nop
    ctx->pc = 0x385054u;
    // NOP
    ctx->pc = 0x385058u;
}
