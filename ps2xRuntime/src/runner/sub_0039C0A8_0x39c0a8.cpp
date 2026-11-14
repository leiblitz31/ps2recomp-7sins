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

// Function: sub_0039C0A8
// Address: 0x39c0a8 - 0x39c290
void sub_0039C0A8_0x39c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C0A8_0x39c0a8");
#endif

    switch (ctx->pc) {
        case 0x39c0a8u: goto label_39c0a8;
        case 0x39c0acu: goto label_39c0ac;
        case 0x39c0b0u: goto label_39c0b0;
        case 0x39c0b4u: goto label_39c0b4;
        case 0x39c0b8u: goto label_39c0b8;
        case 0x39c0bcu: goto label_39c0bc;
        case 0x39c0c0u: goto label_39c0c0;
        case 0x39c0c4u: goto label_39c0c4;
        case 0x39c0c8u: goto label_39c0c8;
        case 0x39c0ccu: goto label_39c0cc;
        case 0x39c0d0u: goto label_39c0d0;
        case 0x39c0d4u: goto label_39c0d4;
        case 0x39c0d8u: goto label_39c0d8;
        case 0x39c0dcu: goto label_39c0dc;
        case 0x39c0e0u: goto label_39c0e0;
        case 0x39c0e4u: goto label_39c0e4;
        case 0x39c0e8u: goto label_39c0e8;
        case 0x39c0ecu: goto label_39c0ec;
        case 0x39c0f0u: goto label_39c0f0;
        case 0x39c0f4u: goto label_39c0f4;
        case 0x39c0f8u: goto label_39c0f8;
        case 0x39c0fcu: goto label_39c0fc;
        case 0x39c100u: goto label_39c100;
        case 0x39c104u: goto label_39c104;
        case 0x39c108u: goto label_39c108;
        case 0x39c10cu: goto label_39c10c;
        case 0x39c110u: goto label_39c110;
        case 0x39c114u: goto label_39c114;
        case 0x39c118u: goto label_39c118;
        case 0x39c11cu: goto label_39c11c;
        case 0x39c120u: goto label_39c120;
        case 0x39c124u: goto label_39c124;
        case 0x39c128u: goto label_39c128;
        case 0x39c12cu: goto label_39c12c;
        case 0x39c130u: goto label_39c130;
        case 0x39c134u: goto label_39c134;
        case 0x39c138u: goto label_39c138;
        case 0x39c13cu: goto label_39c13c;
        case 0x39c140u: goto label_39c140;
        case 0x39c144u: goto label_39c144;
        case 0x39c148u: goto label_39c148;
        case 0x39c14cu: goto label_39c14c;
        case 0x39c150u: goto label_39c150;
        case 0x39c154u: goto label_39c154;
        case 0x39c158u: goto label_39c158;
        case 0x39c15cu: goto label_39c15c;
        case 0x39c160u: goto label_39c160;
        case 0x39c164u: goto label_39c164;
        case 0x39c168u: goto label_39c168;
        case 0x39c16cu: goto label_39c16c;
        case 0x39c170u: goto label_39c170;
        case 0x39c174u: goto label_39c174;
        case 0x39c178u: goto label_39c178;
        case 0x39c17cu: goto label_39c17c;
        case 0x39c180u: goto label_39c180;
        case 0x39c184u: goto label_39c184;
        case 0x39c188u: goto label_39c188;
        case 0x39c18cu: goto label_39c18c;
        case 0x39c190u: goto label_39c190;
        case 0x39c194u: goto label_39c194;
        case 0x39c198u: goto label_39c198;
        case 0x39c19cu: goto label_39c19c;
        case 0x39c1a0u: goto label_39c1a0;
        case 0x39c1a4u: goto label_39c1a4;
        case 0x39c1a8u: goto label_39c1a8;
        case 0x39c1acu: goto label_39c1ac;
        case 0x39c1b0u: goto label_39c1b0;
        case 0x39c1b4u: goto label_39c1b4;
        case 0x39c1b8u: goto label_39c1b8;
        case 0x39c1bcu: goto label_39c1bc;
        case 0x39c1c0u: goto label_39c1c0;
        case 0x39c1c4u: goto label_39c1c4;
        case 0x39c1c8u: goto label_39c1c8;
        case 0x39c1ccu: goto label_39c1cc;
        case 0x39c1d0u: goto label_39c1d0;
        case 0x39c1d4u: goto label_39c1d4;
        case 0x39c1d8u: goto label_39c1d8;
        case 0x39c1dcu: goto label_39c1dc;
        case 0x39c1e0u: goto label_39c1e0;
        case 0x39c1e4u: goto label_39c1e4;
        case 0x39c1e8u: goto label_39c1e8;
        case 0x39c1ecu: goto label_39c1ec;
        case 0x39c1f0u: goto label_39c1f0;
        case 0x39c1f4u: goto label_39c1f4;
        case 0x39c1f8u: goto label_39c1f8;
        case 0x39c1fcu: goto label_39c1fc;
        case 0x39c200u: goto label_39c200;
        case 0x39c204u: goto label_39c204;
        case 0x39c208u: goto label_39c208;
        case 0x39c20cu: goto label_39c20c;
        case 0x39c210u: goto label_39c210;
        case 0x39c214u: goto label_39c214;
        case 0x39c218u: goto label_39c218;
        case 0x39c21cu: goto label_39c21c;
        case 0x39c220u: goto label_39c220;
        case 0x39c224u: goto label_39c224;
        case 0x39c228u: goto label_39c228;
        case 0x39c22cu: goto label_39c22c;
        case 0x39c230u: goto label_39c230;
        case 0x39c234u: goto label_39c234;
        case 0x39c238u: goto label_39c238;
        case 0x39c23cu: goto label_39c23c;
        case 0x39c240u: goto label_39c240;
        case 0x39c244u: goto label_39c244;
        case 0x39c248u: goto label_39c248;
        case 0x39c24cu: goto label_39c24c;
        case 0x39c250u: goto label_39c250;
        case 0x39c254u: goto label_39c254;
        case 0x39c258u: goto label_39c258;
        case 0x39c25cu: goto label_39c25c;
        case 0x39c260u: goto label_39c260;
        case 0x39c264u: goto label_39c264;
        case 0x39c268u: goto label_39c268;
        case 0x39c26cu: goto label_39c26c;
        case 0x39c270u: goto label_39c270;
        case 0x39c274u: goto label_39c274;
        case 0x39c278u: goto label_39c278;
        case 0x39c27cu: goto label_39c27c;
        case 0x39c280u: goto label_39c280;
        case 0x39c284u: goto label_39c284;
        case 0x39c288u: goto label_39c288;
        case 0x39c28cu: goto label_39c28c;
        default: break;
    }

    ctx->pc = 0x39c0a8u;

label_39c0a8:
    // 0x39c0a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x39c0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_39c0ac:
    // 0x39c0ac: 0x8f82a9e0  lw          $v0, -0x5620($gp)
    ctx->pc = 0x39c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945248)));
label_39c0b0:
    // 0x39c0b0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x39c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_39c0b4:
    // 0x39c0b4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x39c0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_39c0b8:
    // 0x39c0b8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x39c0b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c0bc:
    // 0x39c0bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39c0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39c0c0:
    // 0x39c0c0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x39c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_39c0c4:
    // 0x39c0c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x39c0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_39c0c8:
    // 0x39c0c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x39c0c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39c0cc:
    // 0x39c0cc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x39c0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_39c0d0:
    // 0x39c0d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39c0d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39c0d4:
    // 0x39c0d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39c0d8:
    // 0x39c0d8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x39c0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_39c0dc:
    // 0x39c0dc: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x39c0dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_39c0e0:
    // 0x39c0e0: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
label_39c0e4:
    if (ctx->pc == 0x39C0E4u) {
        ctx->pc = 0x39C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C0E0u;
        // 0x39c0e4: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C0E8u;
        goto label_39c0e8;
    }
    ctx->pc = 0x39C0E0u;
    {
        const bool branch_taken_0x39c0e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C0E0u;
        // 0x39c0e4: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c0e0) {
            ctx->pc = 0x39C1B0u;
            goto label_39c1b0;
        }
    }
    ctx->pc = 0x39C0E8u;
label_39c0e8:
    // 0x39c0e8: 0x111023  negu        $v0, $s1
    ctx->pc = 0x39c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_39c0ec:
    // 0x39c0ec: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x39c0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_39c0f0:
    // 0x39c0f0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_39c0f4:
    if (ctx->pc == 0x39C0F4u) {
        ctx->pc = 0x39C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C0F0u;
        // 0x39c0f4: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C0F8u;
        goto label_39c0f8;
    }
    ctx->pc = 0x39C0F0u;
    {
        const bool branch_taken_0x39c0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C0F0u;
        // 0x39c0f4: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c0f0) {
            ctx->pc = 0x39C158u;
            goto label_39c158;
        }
    }
    ctx->pc = 0x39C0F8u;
label_39c0f8:
    // 0x39c0f8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x39c0f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_39c0fc:
    // 0x39c0fc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_39c100:
    if (ctx->pc == 0x39C100u) {
        ctx->pc = 0x39C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C0FCu;
        // 0x39c100: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C104u;
        goto label_39c104;
    }
    ctx->pc = 0x39C0FCu;
    {
        const bool branch_taken_0x39c0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C0FCu;
        // 0x39c100: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c0fc) {
            ctx->pc = 0x39C13Cu;
            goto label_39c13c;
        }
    }
    ctx->pc = 0x39C104u;
label_39c104:
    // 0x39c104: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_39c108:
    if (ctx->pc == 0x39C108u) {
        ctx->pc = 0x39C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C104u;
        // 0x39c108: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C10Cu;
        goto label_39c10c;
    }
    ctx->pc = 0x39C104u;
    {
        const bool branch_taken_0x39c104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c104) {
            ctx->pc = 0x39C108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C104u;
            // 0x39c108: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C128u;
            goto label_39c128;
        }
    }
    ctx->pc = 0x39C10Cu;
label_39c10c:
    // 0x39c10c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x39c10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_39c110:
    // 0x39c110: 0x260f809  jalr        $s3
label_39c114:
    if (ctx->pc == 0x39C114u) {
        ctx->pc = 0x39C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C110u;
        // 0x39c114: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C118u;
        goto label_39c118;
    }
    ctx->pc = 0x39C110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x39C118u);
        ctx->pc = 0x39C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C110u;
        // 0x39c114: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C110u, 0x39C118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C118u;
label_39c118:
    // 0x39c118: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_39c11c:
    if (ctx->pc == 0x39C11Cu) {
        ctx->pc = 0x39C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C118u;
        // 0x39c11c: 0x26b00004  addiu       $s0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C120u;
        goto label_39c120;
    }
    ctx->pc = 0x39C118u;
    {
        const bool branch_taken_0x39c118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C118u;
        // 0x39c11c: 0x26b00004  addiu       $s0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c118) {
            ctx->pc = 0x39C1B0u;
            goto label_39c1b0;
        }
    }
    ctx->pc = 0x39C120u;
label_39c120:
    // 0x39c120: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x39c120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_39c124:
    // 0x39c124: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39c124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39c128:
    // 0x39c128: 0x260f809  jalr        $s3
label_39c12c:
    if (ctx->pc == 0x39C12Cu) {
        ctx->pc = 0x39C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C128u;
        // 0x39c12c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C130u;
        goto label_39c130;
    }
    ctx->pc = 0x39C128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x39C130u);
        ctx->pc = 0x39C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C128u;
        // 0x39c12c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C128u, 0x39C130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C130u;
label_39c130:
    // 0x39c130: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_39c134:
    if (ctx->pc == 0x39C134u) {
        ctx->pc = 0x39C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C130u;
        // 0x39c134: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C138u;
        goto label_39c138;
    }
    ctx->pc = 0x39C130u;
    {
        const bool branch_taken_0x39c130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C130u;
        // 0x39c134: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c130) {
            ctx->pc = 0x39C1B0u;
            goto label_39c1b0;
        }
    }
    ctx->pc = 0x39C138u;
label_39c138:
    // 0x39c138: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x39c138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_39c13c:
    // 0x39c13c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39c140:
    // 0x39c140: 0x260f809  jalr        $s3
label_39c144:
    if (ctx->pc == 0x39C144u) {
        ctx->pc = 0x39C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C140u;
        // 0x39c144: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C148u;
        goto label_39c148;
    }
    ctx->pc = 0x39C140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x39C148u);
        ctx->pc = 0x39C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C140u;
        // 0x39c144: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C140u, 0x39C148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C148u;
label_39c148:
    // 0x39c148: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_39c14c:
    if (ctx->pc == 0x39C14Cu) {
        ctx->pc = 0x39C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C148u;
        // 0x39c14c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C150u;
        goto label_39c150;
    }
    ctx->pc = 0x39C148u;
    {
        const bool branch_taken_0x39c148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C148u;
        // 0x39c14c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c148) {
            ctx->pc = 0x39C1B0u;
            goto label_39c1b0;
        }
    }
    ctx->pc = 0x39C150u;
label_39c150:
    // 0x39c150: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_39c154:
    if (ctx->pc == 0x39C154u) {
        ctx->pc = 0x39C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C150u;
        // 0x39c154: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C158u;
        goto label_39c158;
    }
    ctx->pc = 0x39C150u;
    {
        const bool branch_taken_0x39c150 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C150u;
        // 0x39c154: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c150) {
            ctx->pc = 0x39C1B0u;
            goto label_39c1b0;
        }
    }
    ctx->pc = 0x39C158u;
label_39c158:
    // 0x39c158: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39c158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39c15c:
    // 0x39c15c: 0x260f809  jalr        $s3
label_39c160:
    if (ctx->pc == 0x39C160u) {
        ctx->pc = 0x39C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C15Cu;
        // 0x39c160: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C164u;
        goto label_39c164;
    }
    ctx->pc = 0x39C15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x39C164u);
        ctx->pc = 0x39C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C15Cu;
        // 0x39c160: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C15Cu, 0x39C164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C164u;
label_39c164:
    // 0x39c164: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_39c168:
    if (ctx->pc == 0x39C168u) {
        ctx->pc = 0x39C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C164u;
        // 0x39c168: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C16Cu;
        goto label_39c16c;
    }
    ctx->pc = 0x39C164u;
    {
        const bool branch_taken_0x39c164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C164u;
        // 0x39c168: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c164) {
            ctx->pc = 0x39C1B4u;
            goto label_39c1b4;
        }
    }
    ctx->pc = 0x39C16Cu;
label_39c16c:
    // 0x39c16c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x39c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39c170:
    // 0x39c170: 0x260f809  jalr        $s3
label_39c174:
    if (ctx->pc == 0x39C174u) {
        ctx->pc = 0x39C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C170u;
        // 0x39c174: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C178u;
        goto label_39c178;
    }
    ctx->pc = 0x39C170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x39C178u);
        ctx->pc = 0x39C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C170u;
        // 0x39c174: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C170u, 0x39C178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C178u;
label_39c178:
    // 0x39c178: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_39c17c:
    if (ctx->pc == 0x39C17Cu) {
        ctx->pc = 0x39C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C178u;
        // 0x39c17c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C180u;
        goto label_39c180;
    }
    ctx->pc = 0x39C178u;
    {
        const bool branch_taken_0x39c178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C178u;
        // 0x39c17c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c178) {
            ctx->pc = 0x39C1B4u;
            goto label_39c1b4;
        }
    }
    ctx->pc = 0x39C180u;
label_39c180:
    // 0x39c180: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39c180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39c184:
    // 0x39c184: 0x260f809  jalr        $s3
label_39c188:
    if (ctx->pc == 0x39C188u) {
        ctx->pc = 0x39C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C184u;
        // 0x39c188: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C18Cu;
        goto label_39c18c;
    }
    ctx->pc = 0x39C184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x39C18Cu);
        ctx->pc = 0x39C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C184u;
        // 0x39c188: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C184u, 0x39C18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C18Cu;
label_39c18c:
    // 0x39c18c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_39c190:
    if (ctx->pc == 0x39C190u) {
        ctx->pc = 0x39C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C18Cu;
        // 0x39c190: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C194u;
        goto label_39c194;
    }
    ctx->pc = 0x39C18Cu;
    {
        const bool branch_taken_0x39c18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C18Cu;
        // 0x39c190: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c18c) {
            ctx->pc = 0x39C1B4u;
            goto label_39c1b4;
        }
    }
    ctx->pc = 0x39C194u;
label_39c194:
    // 0x39c194: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x39c194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39c198:
    // 0x39c198: 0x260f809  jalr        $s3
label_39c19c:
    if (ctx->pc == 0x39C19Cu) {
        ctx->pc = 0x39C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C198u;
        // 0x39c19c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C1A0u;
        goto label_39c1a0;
    }
    ctx->pc = 0x39C198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x39C1A0u);
        ctx->pc = 0x39C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C198u;
        // 0x39c19c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C198u, 0x39C1A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C1A0u;
label_39c1a0:
    // 0x39c1a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39c1a4:
    if (ctx->pc == 0x39C1A4u) {
        ctx->pc = 0x39C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1A0u;
        // 0x39c1a4: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C1A8u;
        goto label_39c1a8;
    }
    ctx->pc = 0x39C1A0u;
    {
        const bool branch_taken_0x39c1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1A0u;
        // 0x39c1a4: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c1a0) {
            ctx->pc = 0x39C1B0u;
            goto label_39c1b0;
        }
    }
    ctx->pc = 0x39C1A8u;
label_39c1a8:
    // 0x39c1a8: 0x1620ffeb  bnez        $s1, . + 4 + (-0x15 << 2)
label_39c1ac:
    if (ctx->pc == 0x39C1ACu) {
        ctx->pc = 0x39C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1A8u;
        // 0x39c1ac: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C1B0u;
        goto label_39c1b0;
    }
    ctx->pc = 0x39C1A8u;
    {
        const bool branch_taken_0x39c1a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1A8u;
        // 0x39c1ac: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c1a8) {
            ctx->pc = 0x39C158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c158;
        }
    }
    ctx->pc = 0x39C1B0u;
label_39c1b0:
    // 0x39c1b0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x39c1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39c1b4:
    // 0x39c1b4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x39c1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39c1b8:
    // 0x39c1b8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x39c1b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39c1bc:
    // 0x39c1bc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x39c1bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39c1c0:
    // 0x39c1c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39c1c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39c1c4:
    // 0x39c1c4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x39c1c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39c1c8:
    // 0x39c1c8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x39c1c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39c1cc:
    // 0x39c1cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c1d0:
    // 0x39c1d0: 0x3e00008  jr          $ra
label_39c1d4:
    if (ctx->pc == 0x39C1D4u) {
        ctx->pc = 0x39C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1D0u;
        // 0x39c1d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C1D8u;
        goto label_39c1d8;
    }
    ctx->pc = 0x39C1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1D0u;
        // 0x39c1d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C1D8u;
label_39c1d8:
    // 0x39c1d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39c1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39c1dc:
    // 0x39c1dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39c1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_39c1e0:
    // 0x39c1e0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x39c1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_39c1e4:
    // 0x39c1e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39c1e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c1e8:
    // 0x39c1e8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x39c1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_39c1ec:
    // 0x39c1ec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x39c1ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39c1f0:
    // 0x39c1f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x39c1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_39c1f4:
    // 0x39c1f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x39c1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_39c1f8:
    // 0x39c1f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39c1fc:
    // 0x39c1fc: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x39c1fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_39c200:
    // 0x39c200: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x39c200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_39c204:
    // 0x39c204: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_39c208:
    if (ctx->pc == 0x39C208u) {
        ctx->pc = 0x39C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C204u;
        // 0x39c208: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C20Cu;
        goto label_39c20c;
    }
    ctx->pc = 0x39C204u;
    {
        const bool branch_taken_0x39c204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C204u;
        // 0x39c208: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c204) {
            ctx->pc = 0x39C238u;
            goto label_39c238;
        }
    }
    ctx->pc = 0x39C20Cu;
label_39c20c:
    // 0x39c20c: 0x8f82a9ec  lw          $v0, -0x5614($gp)
    ctx->pc = 0x39c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945260)));
label_39c210:
    // 0x39c210: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x39c210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_39c214:
    // 0x39c214: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x39c214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39c218:
    // 0x39c218: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_39c21c:
    if (ctx->pc == 0x39C21Cu) {
        ctx->pc = 0x39C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C218u;
        // 0x39c21c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C220u;
        goto label_39c220;
    }
    ctx->pc = 0x39C218u;
    {
        const bool branch_taken_0x39c218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C218u;
        // 0x39c21c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c218) {
            ctx->pc = 0x39C270u;
            goto label_39c270;
        }
    }
    ctx->pc = 0x39C220u;
label_39c220:
    // 0x39c220: 0xc0e6984  jal         func_39A610
label_39c224:
    if (ctx->pc == 0x39C224u) {
        ctx->pc = 0x39C228u;
        goto label_39c228;
    }
    ctx->pc = 0x39C220u;
    SET_GPR_U32(ctx, 31, 0x39C228u);
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x39C220u, 0x39C228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C228u;
label_39c228:
    // 0x39c228: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_39c22c:
    if (ctx->pc == 0x39C22Cu) {
        ctx->pc = 0x39C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C228u;
        // 0x39c22c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C230u;
        goto label_39c230;
    }
    ctx->pc = 0x39C228u;
    {
        const bool branch_taken_0x39c228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C228u;
        // 0x39c22c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c228) {
            ctx->pc = 0x39C270u;
            goto label_39c270;
        }
    }
    ctx->pc = 0x39C230u;
label_39c230:
    // 0x39c230: 0x1000000f  b           . + 4 + (0xF << 2)
label_39c234:
    if (ctx->pc == 0x39C234u) {
        ctx->pc = 0x39C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C230u;
        // 0x39c234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C238u;
        goto label_39c238;
    }
    ctx->pc = 0x39C230u;
    {
        const bool branch_taken_0x39c230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C230u;
        // 0x39c234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c230) {
            ctx->pc = 0x39C270u;
            goto label_39c270;
        }
    }
    ctx->pc = 0x39C238u;
label_39c238:
    // 0x39c238: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x39c238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_39c23c:
    // 0x39c23c: 0x2651002c  addiu       $s1, $s2, 0x2C
    ctx->pc = 0x39c23cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_39c240:
    // 0x39c240: 0x5051000b  beql        $v0, $s1, . + 4 + (0xB << 2)
label_39c244:
    if (ctx->pc == 0x39C244u) {
        ctx->pc = 0x39C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C240u;
        // 0x39c244: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C248u;
        goto label_39c248;
    }
    ctx->pc = 0x39C240u;
    {
        const bool branch_taken_0x39c240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x39c240) {
            ctx->pc = 0x39C244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C240u;
            // 0x39c244: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C270u;
            goto label_39c270;
        }
    }
    ctx->pc = 0x39C248u;
label_39c248:
    // 0x39c248: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x39c248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_39c24c:
    // 0x39c24c: 0x0  nop
    ctx->pc = 0x39c24cu;
    // NOP
label_39c250:
    // 0x39c250: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39c250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39c254:
    // 0x39c254: 0x280f809  jalr        $s4
label_39c258:
    if (ctx->pc == 0x39C258u) {
        ctx->pc = 0x39C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C254u;
        // 0x39c258: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C25Cu;
        goto label_39c25c;
    }
    ctx->pc = 0x39C254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x39C25Cu);
        ctx->pc = 0x39C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C254u;
        // 0x39c258: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C254u, 0x39C25Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C25Cu;
label_39c25c:
    // 0x39c25c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39c260:
    if (ctx->pc == 0x39C260u) {
        ctx->pc = 0x39C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C25Cu;
        // 0x39c260: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C264u;
        goto label_39c264;
    }
    ctx->pc = 0x39C25Cu;
    {
        const bool branch_taken_0x39c25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C25Cu;
        // 0x39c260: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c25c) {
            ctx->pc = 0x39C26Cu;
            goto label_39c26c;
        }
    }
    ctx->pc = 0x39C264u;
label_39c264:
    // 0x39c264: 0x5451fffa  bnel        $v0, $s1, . + 4 + (-0x6 << 2)
label_39c268:
    if (ctx->pc == 0x39C268u) {
        ctx->pc = 0x39C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C264u;
        // 0x39c268: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C26Cu;
        goto label_39c26c;
    }
    ctx->pc = 0x39C264u;
    {
        const bool branch_taken_0x39c264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x39c264) {
            ctx->pc = 0x39C268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C264u;
            // 0x39c268: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c250;
        }
    }
    ctx->pc = 0x39C26Cu;
label_39c26c:
    // 0x39c26c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x39c26cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39c270:
    // 0x39c270: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x39c270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39c274:
    // 0x39c274: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39c274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39c278:
    // 0x39c278: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39c278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39c27c:
    // 0x39c27c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x39c27cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39c280:
    // 0x39c280: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x39c280u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39c284:
    // 0x39c284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c288:
    // 0x39c288: 0x3e00008  jr          $ra
label_39c28c:
    if (ctx->pc == 0x39C28Cu) {
        ctx->pc = 0x39C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C288u;
        // 0x39c28c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C290u;
        goto label_fallthrough_0x39c288;
    }
    ctx->pc = 0x39C288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C288u;
        // 0x39c28c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39c288:
    ctx->pc = 0x39C290u;
}
