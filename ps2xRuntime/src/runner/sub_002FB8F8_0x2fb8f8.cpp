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

// Function: sub_002FB8F8
// Address: 0x2fb8f8 - 0x2fba38
void sub_002FB8F8_0x2fb8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB8F8_0x2fb8f8");
#endif

    switch (ctx->pc) {
        case 0x2fb918u: goto label_2fb918;
        case 0x2fb928u: goto label_2fb928;
        case 0x2fb9f0u: goto label_2fb9f0;
        case 0x2fba28u: goto label_2fba28;
        default: break;
    }

    ctx->pc = 0x2fb8f8u;

    // 0x2fb8f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fb8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fb8fc: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x2fb8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x2fb900: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fb900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fb904: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x2fb904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x2fb908: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2fb908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2fb90c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2fb90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2fb910: 0xc0beca4  jal         func_2FB290
    ctx->pc = 0x2FB910u;
    SET_GPR_U32(ctx, 31, 0x2FB918u);
    ctx->pc = 0x2FB914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB910u;
    // 0x2fb914: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB290u, 0x2FB910u, 0x2FB918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB918u;
label_2fb918:
    // 0x2fb918: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2fb918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fb91c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2fb91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2fb920: 0xc0beca4  jal         func_2FB290
    ctx->pc = 0x2FB920u;
    SET_GPR_U32(ctx, 31, 0x2FB928u);
    ctx->pc = 0x2FB924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB920u;
    // 0x2fb924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB290u, 0x2FB920u, 0x2FB928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB928u;
label_2fb928:
    // 0x2fb928: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2fb928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb92c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2fb92cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb930: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x2fb930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fb934: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2FB934u;
    {
        const bool branch_taken_0x2fb934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB934u;
        // 0x2fb938: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb934) {
            ctx->pc = 0x2FBA20u;
            goto label_2fba20;
        }
    }
    ctx->pc = 0x2FB93Cu;
    // 0x2fb93c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2fb93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb940: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x2fb940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fb944: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2FB944u;
    {
        const bool branch_taken_0x2fb944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB944u;
        // 0x2fb948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb944) {
            ctx->pc = 0x2FBA20u;
            goto label_2fba20;
        }
    }
    ctx->pc = 0x2FB94Cu;
    // 0x2fb94c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2fb94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fb950: 0x38c40004  xori        $a0, $a2, 0x4
    ctx->pc = 0x2fb950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
    // 0x2fb954: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2fb954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2fb958: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2fb958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2fb95c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB95Cu;
    {
        const bool branch_taken_0x2fb95c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB95Cu;
        // 0x2fb960: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb95c) {
            ctx->pc = 0x2FB970u;
            goto label_2fb970;
        }
    }
    ctx->pc = 0x2FB964u;
    // 0x2fb964: 0x38c20002  xori        $v0, $a2, 0x2
    ctx->pc = 0x2fb964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
    // 0x2fb968: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FB968u;
    {
        const bool branch_taken_0x2fb968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB968u;
        // 0x2fb96c: 0x38a20004  xori        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb968) {
            ctx->pc = 0x2FB988u;
            goto label_2fb988;
        }
    }
    ctx->pc = 0x2FB970u;
label_2fb970:
    // 0x2fb970: 0x54c5002b  bnel        $a2, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2FB970u;
    {
        const bool branch_taken_0x2fb970 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x2fb970) {
            ctx->pc = 0x2FB974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB970u;
            // 0x2fb974: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBA20u;
            goto label_2fba20;
        }
    }
    ctx->pc = 0x2FB978u;
    // 0x2fb978: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2fb978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2fb97c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2FB97Cu;
    {
        const bool branch_taken_0x2fb97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB97Cu;
        // 0x2fb980: 0x2444a360  addiu       $a0, $v0, -0x5CA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb97c) {
            ctx->pc = 0x2FBA20u;
            goto label_2fba20;
        }
    }
    ctx->pc = 0x2FB984u;
    // 0x2fb984: 0x0  nop
    ctx->pc = 0x2fb984u;
    // NOP
label_2fb988:
    // 0x2fb988: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB988u;
    {
        const bool branch_taken_0x2fb988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb988) {
            ctx->pc = 0x2FB98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB988u;
            // 0x2fb98c: 0x38a20002  xori        $v0, $a1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB9A0u;
            goto label_2fb9a0;
        }
    }
    ctx->pc = 0x2FB990u;
    // 0x2fb990: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2fb990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x2fb994: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb998: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2FB998u;
    {
        const bool branch_taken_0x2fb998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB998u;
        // 0x2fb99c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb998) {
            ctx->pc = 0x2FBA20u;
            goto label_2fba20;
        }
    }
    ctx->pc = 0x2FB9A0u;
label_2fb9a0:
    // 0x2fb9a0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB9A0u;
    {
        const bool branch_taken_0x2fb9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb9a0) {
            ctx->pc = 0x2FB9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB9A0u;
            // 0x2fb9a4: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB9B8u;
            goto label_2fb9b8;
        }
    }
    ctx->pc = 0x2FB9A8u;
    // 0x2fb9a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2fb9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fb9ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9b0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2FB9B0u;
    {
        const bool branch_taken_0x2fb9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB9B0u;
        // 0x2fb9b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb9b0) {
            ctx->pc = 0x2FBA20u;
            goto label_2fba20;
        }
    }
    ctx->pc = 0x2FB9B8u;
label_2fb9b8:
    // 0x2fb9b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2fb9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fb9bc: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2fb9bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb9c0: 0xdfa60030  ld          $a2, 0x30($sp)
    ctx->pc = 0x2fb9c0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fb9c4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2fb9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fb9c8: 0x86282b  sltu        $a1, $a0, $a2
    ctx->pc = 0x2fb9c8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2fb9cc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB9CCu;
    {
        const bool branch_taken_0x2fb9cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB9CCu;
        // 0x2fb9d0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb9cc) {
            ctx->pc = 0x2FB9E4u;
            goto label_2fb9e4;
        }
    }
    ctx->pc = 0x2FB9D4u;
    // 0x2fb9d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2fb9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2fb9d8: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x2fb9d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x2fb9dc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2fb9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2fb9e0: 0x86282b  sltu        $a1, $a0, $a2
    ctx->pc = 0x2fb9e0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2fb9e4:
    // 0x2fb9e4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2fb9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fb9e8: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x2fb9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x2fb9ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fb9ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb9f0:
    // 0x2fb9f0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB9F0u;
    {
        const bool branch_taken_0x2fb9f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB9F0u;
        // 0x2fb9f4: 0x41078  dsll        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb9f0) {
            ctx->pc = 0x2FBA08u;
            goto label_2fba08;
        }
    }
    ctx->pc = 0x2FB9F8u;
    // 0x2fb9f8: 0x86202f  dsubu       $a0, $a0, $a2
    ctx->pc = 0x2fb9f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 6));
    // 0x2fb9fc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2fb9fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2fba00: 0x41078  dsll        $v0, $a0, 1
    ctx->pc = 0x2fba00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 1);
    // 0x2fba04: 0x0  nop
    ctx->pc = 0x2fba04u;
    // NOP
label_2fba08:
    // 0x2fba08: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x2fba08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x2fba0c: 0x46282b  sltu        $a1, $v0, $a2
    ctx->pc = 0x2fba0cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2fba10: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2FBA10u;
    {
        const bool branch_taken_0x2fba10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA10u;
        // 0x2fba14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba10) {
            ctx->pc = 0x2FB9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb9f0;
        }
    }
    ctx->pc = 0x2FBA18u;
    // 0x2fba18: 0xfd070010  sd          $a3, 0x10($t0)
    ctx->pc = 0x2fba18u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 7));
    // 0x2fba1c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2fba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2fba20:
    // 0x2fba20: 0xc0bec6e  jal         func_2FB1B8
    ctx->pc = 0x2FBA20u;
    SET_GPR_U32(ctx, 31, 0x2FBA28u);
    ctx->pc = 0x2FB1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB1B8u, 0x2FBA20u, 0x2FBA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBA28u;
label_2fba28:
    // 0x2fba28: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2fba28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fba2c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2fba2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2fba30: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA30u;
        // 0x2fba34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBA38u;
}
