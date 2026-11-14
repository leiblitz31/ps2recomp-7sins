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

// Function: sub_003090A0
// Address: 0x3090a0 - 0x309150
void sub_003090A0_0x3090a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003090A0_0x3090a0");
#endif

    switch (ctx->pc) {
        case 0x309108u: goto label_309108;
        case 0x30912cu: goto label_30912c;
        case 0x309134u: goto label_309134;
        default: break;
    }

    ctx->pc = 0x3090a0u;

    // 0x3090a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3090a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3090a4: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x3090a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x3090a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3090a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3090ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3090acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3090b0: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x3090b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3090b4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3090B4u;
    {
        const bool branch_taken_0x3090b4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3090B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090B4u;
        // 0x3090b8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3090b4) {
            ctx->pc = 0x3090CCu;
            goto label_3090cc;
        }
    }
    ctx->pc = 0x3090BCu;
    // 0x3090bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3090bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3090c0: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x3090c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x3090c4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3090C4u;
    {
        const bool branch_taken_0x3090c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3090c4) {
            ctx->pc = 0x3090C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3090C4u;
            // 0x3090c8: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3090D8u;
            goto label_3090d8;
        }
    }
    ctx->pc = 0x3090CCu;
label_3090cc:
    // 0x3090cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3090ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3090d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3090D0u;
    {
        const bool branch_taken_0x3090d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3090D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090D0u;
        // 0x3090d4: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3090d0) {
            ctx->pc = 0x309138u;
            goto label_309138;
        }
    }
    ctx->pc = 0x3090D8u;
label_3090d8:
    // 0x3090d8: 0x24422228  addiu       $v0, $v0, 0x2228
    ctx->pc = 0x3090d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8744));
    // 0x3090dc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3090dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3090e0: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3090E0u;
    {
        const bool branch_taken_0x3090e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3090e0) {
            ctx->pc = 0x3090E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3090E0u;
            // 0x3090e4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3090F4u;
            goto label_3090f4;
        }
    }
    ctx->pc = 0x3090E8u;
    // 0x3090e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3090e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3090ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3090ECu;
    {
        const bool branch_taken_0x3090ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3090F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090ECu;
        // 0x3090f0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3090ec) {
            ctx->pc = 0x309138u;
            goto label_309138;
        }
    }
    ctx->pc = 0x3090F4u;
label_3090f4:
    // 0x3090f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3090f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3090f8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3090F8u;
    {
        const bool branch_taken_0x3090f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3090FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090F8u;
        // 0x3090fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3090f8) {
            ctx->pc = 0x309138u;
            goto label_309138;
        }
    }
    ctx->pc = 0x309100u;
    // 0x309100: 0xc0c235e  jal         func_308D78
    ctx->pc = 0x309100u;
    SET_GPR_U32(ctx, 31, 0x309108u);
    ctx->pc = 0x308D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D78u, 0x309100u, 0x309108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309108u;
label_309108:
    // 0x309108: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x309108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30910c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x30910cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x309110: 0xfe110010  sd          $s1, 0x10($s0)
    ctx->pc = 0x309110u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    // 0x309114: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x309114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x309118: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x309118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x30911c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30911Cu;
    {
        const bool branch_taken_0x30911c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x309120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30911Cu;
        // 0x309120: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30911c) {
            ctx->pc = 0x309134u;
            goto label_309134;
        }
    }
    ctx->pc = 0x309124u;
    // 0x309124: 0xc0c2284  jal         func_308A10
    ctx->pc = 0x309124u;
    SET_GPR_U32(ctx, 31, 0x30912Cu);
    ctx->pc = 0x309128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309124u;
    // 0x309128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308A10u, 0x309124u, 0x30912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30912Cu;
label_30912c:
    // 0x30912c: 0xc0c2220  jal         func_308880
    ctx->pc = 0x30912Cu;
    SET_GPR_U32(ctx, 31, 0x309134u);
    ctx->pc = 0x309130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30912Cu;
    // 0x309130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308880u, 0x30912Cu, 0x309134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309134u;
label_309134:
    // 0x309134: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309138:
    // 0x309138: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x309138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30913c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x30913cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309144: 0x3e00008  jr          $ra
    ctx->pc = 0x309144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309144u;
        // 0x309148: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30914Cu;
    // 0x30914c: 0x0  nop
    ctx->pc = 0x30914cu;
    // NOP
    ctx->pc = 0x309150u;
}
