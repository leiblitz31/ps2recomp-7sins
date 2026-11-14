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

// Function: sub_0032C0F8
// Address: 0x32c0f8 - 0x32c2f0
void sub_0032C0F8_0x32c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C0F8_0x32c0f8");
#endif

    switch (ctx->pc) {
        case 0x32c0f8u: goto label_32c0f8;
        case 0x32c0fcu: goto label_32c0fc;
        case 0x32c100u: goto label_32c100;
        case 0x32c104u: goto label_32c104;
        case 0x32c108u: goto label_32c108;
        case 0x32c10cu: goto label_32c10c;
        case 0x32c110u: goto label_32c110;
        case 0x32c114u: goto label_32c114;
        case 0x32c118u: goto label_32c118;
        case 0x32c11cu: goto label_32c11c;
        case 0x32c120u: goto label_32c120;
        case 0x32c124u: goto label_32c124;
        case 0x32c128u: goto label_32c128;
        case 0x32c12cu: goto label_32c12c;
        case 0x32c130u: goto label_32c130;
        case 0x32c134u: goto label_32c134;
        case 0x32c138u: goto label_32c138;
        case 0x32c13cu: goto label_32c13c;
        case 0x32c140u: goto label_32c140;
        case 0x32c144u: goto label_32c144;
        case 0x32c148u: goto label_32c148;
        case 0x32c14cu: goto label_32c14c;
        case 0x32c150u: goto label_32c150;
        case 0x32c154u: goto label_32c154;
        case 0x32c158u: goto label_32c158;
        case 0x32c15cu: goto label_32c15c;
        case 0x32c160u: goto label_32c160;
        case 0x32c164u: goto label_32c164;
        case 0x32c168u: goto label_32c168;
        case 0x32c16cu: goto label_32c16c;
        case 0x32c170u: goto label_32c170;
        case 0x32c174u: goto label_32c174;
        case 0x32c178u: goto label_32c178;
        case 0x32c17cu: goto label_32c17c;
        case 0x32c180u: goto label_32c180;
        case 0x32c184u: goto label_32c184;
        case 0x32c188u: goto label_32c188;
        case 0x32c18cu: goto label_32c18c;
        case 0x32c190u: goto label_32c190;
        case 0x32c194u: goto label_32c194;
        case 0x32c198u: goto label_32c198;
        case 0x32c19cu: goto label_32c19c;
        case 0x32c1a0u: goto label_32c1a0;
        case 0x32c1a4u: goto label_32c1a4;
        case 0x32c1a8u: goto label_32c1a8;
        case 0x32c1acu: goto label_32c1ac;
        case 0x32c1b0u: goto label_32c1b0;
        case 0x32c1b4u: goto label_32c1b4;
        case 0x32c1b8u: goto label_32c1b8;
        case 0x32c1bcu: goto label_32c1bc;
        case 0x32c1c0u: goto label_32c1c0;
        case 0x32c1c4u: goto label_32c1c4;
        case 0x32c1c8u: goto label_32c1c8;
        case 0x32c1ccu: goto label_32c1cc;
        case 0x32c1d0u: goto label_32c1d0;
        case 0x32c1d4u: goto label_32c1d4;
        case 0x32c1d8u: goto label_32c1d8;
        case 0x32c1dcu: goto label_32c1dc;
        case 0x32c1e0u: goto label_32c1e0;
        case 0x32c1e4u: goto label_32c1e4;
        case 0x32c1e8u: goto label_32c1e8;
        case 0x32c1ecu: goto label_32c1ec;
        case 0x32c1f0u: goto label_32c1f0;
        case 0x32c1f4u: goto label_32c1f4;
        case 0x32c1f8u: goto label_32c1f8;
        case 0x32c1fcu: goto label_32c1fc;
        case 0x32c200u: goto label_32c200;
        case 0x32c204u: goto label_32c204;
        case 0x32c208u: goto label_32c208;
        case 0x32c20cu: goto label_32c20c;
        case 0x32c210u: goto label_32c210;
        case 0x32c214u: goto label_32c214;
        case 0x32c218u: goto label_32c218;
        case 0x32c21cu: goto label_32c21c;
        case 0x32c220u: goto label_32c220;
        case 0x32c224u: goto label_32c224;
        case 0x32c228u: goto label_32c228;
        case 0x32c22cu: goto label_32c22c;
        case 0x32c230u: goto label_32c230;
        case 0x32c234u: goto label_32c234;
        case 0x32c238u: goto label_32c238;
        case 0x32c23cu: goto label_32c23c;
        case 0x32c240u: goto label_32c240;
        case 0x32c244u: goto label_32c244;
        case 0x32c248u: goto label_32c248;
        case 0x32c24cu: goto label_32c24c;
        case 0x32c250u: goto label_32c250;
        case 0x32c254u: goto label_32c254;
        case 0x32c258u: goto label_32c258;
        case 0x32c25cu: goto label_32c25c;
        case 0x32c260u: goto label_32c260;
        case 0x32c264u: goto label_32c264;
        case 0x32c268u: goto label_32c268;
        case 0x32c26cu: goto label_32c26c;
        case 0x32c270u: goto label_32c270;
        case 0x32c274u: goto label_32c274;
        case 0x32c278u: goto label_32c278;
        case 0x32c27cu: goto label_32c27c;
        case 0x32c280u: goto label_32c280;
        case 0x32c284u: goto label_32c284;
        case 0x32c288u: goto label_32c288;
        case 0x32c28cu: goto label_32c28c;
        case 0x32c290u: goto label_32c290;
        case 0x32c294u: goto label_32c294;
        case 0x32c298u: goto label_32c298;
        case 0x32c29cu: goto label_32c29c;
        case 0x32c2a0u: goto label_32c2a0;
        case 0x32c2a4u: goto label_32c2a4;
        case 0x32c2a8u: goto label_32c2a8;
        case 0x32c2acu: goto label_32c2ac;
        case 0x32c2b0u: goto label_32c2b0;
        case 0x32c2b4u: goto label_32c2b4;
        case 0x32c2b8u: goto label_32c2b8;
        case 0x32c2bcu: goto label_32c2bc;
        case 0x32c2c0u: goto label_32c2c0;
        case 0x32c2c4u: goto label_32c2c4;
        case 0x32c2c8u: goto label_32c2c8;
        case 0x32c2ccu: goto label_32c2cc;
        case 0x32c2d0u: goto label_32c2d0;
        case 0x32c2d4u: goto label_32c2d4;
        case 0x32c2d8u: goto label_32c2d8;
        case 0x32c2dcu: goto label_32c2dc;
        case 0x32c2e0u: goto label_32c2e0;
        case 0x32c2e4u: goto label_32c2e4;
        case 0x32c2e8u: goto label_32c2e8;
        case 0x32c2ecu: goto label_32c2ec;
        default: break;
    }

    ctx->pc = 0x32c0f8u;

label_32c0f8:
    // 0x32c0f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x32c0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_32c0fc:
    // 0x32c0fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x32c0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_32c100:
    // 0x32c100: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x32c100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_32c104:
    // 0x32c104: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32c104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32c108:
    // 0x32c108: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x32c108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_32c10c:
    // 0x32c10c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x32c10cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32c110:
    // 0x32c110: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x32c110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_32c114:
    // 0x32c114: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x32c114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_32c118:
    // 0x32c118: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x32c118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_32c11c:
    // 0x32c11c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x32c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_32c120:
    // 0x32c120: 0x12600067  beqz        $s3, . + 4 + (0x67 << 2)
label_32c124:
    if (ctx->pc == 0x32C124u) {
        ctx->pc = 0x32C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C120u;
        // 0x32c124: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C128u;
        goto label_32c128;
    }
    ctx->pc = 0x32C120u;
    {
        const bool branch_taken_0x32c120 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C120u;
        // 0x32c124: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c120) {
            ctx->pc = 0x32C2C0u;
            goto label_32c2c0;
        }
    }
    ctx->pc = 0x32C128u;
label_32c128:
    // 0x32c128: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x32c128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_32c12c:
    // 0x32c12c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_32c130:
    if (ctx->pc == 0x32C130u) {
        ctx->pc = 0x32C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C12Cu;
        // 0x32c130: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C134u;
        goto label_32c134;
    }
    ctx->pc = 0x32C12Cu;
    {
        const bool branch_taken_0x32c12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C12Cu;
        // 0x32c130: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c12c) {
            ctx->pc = 0x32C14Cu;
            goto label_32c14c;
        }
    }
    ctx->pc = 0x32C134u;
label_32c134:
    // 0x32c134: 0xc0ec7e8  jal         func_3B1FA0
label_32c138:
    if (ctx->pc == 0x32C138u) {
        ctx->pc = 0x32C13Cu;
        goto label_32c13c;
    }
    ctx->pc = 0x32C134u;
    SET_GPR_U32(ctx, 31, 0x32C13Cu);
    ctx->pc = 0x3B1FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1FA0u, 0x32C134u, 0x32C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C13Cu;
label_32c13c:
    // 0x32c13c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32c13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c140:
    // 0x32c140: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32c140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32c144:
    // 0x32c144: 0xc0ebf52  jal         func_3AFD48
label_32c148:
    if (ctx->pc == 0x32C148u) {
        ctx->pc = 0x32C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C144u;
        // 0x32c148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C14Cu;
        goto label_32c14c;
    }
    ctx->pc = 0x32C144u;
    SET_GPR_U32(ctx, 31, 0x32C14Cu);
    ctx->pc = 0x32C148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C144u;
    // 0x32c148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFD48u, 0x32C144u, 0x32C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C14Cu;
label_32c14c:
    // 0x32c14c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x32c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32c150:
    // 0x32c150: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32c154:
    // 0x32c154: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_32c158:
    if (ctx->pc == 0x32C158u) {
        ctx->pc = 0x32C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C154u;
        // 0x32c158: 0x8e150000  lw          $s5, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C15Cu;
        goto label_32c15c;
    }
    ctx->pc = 0x32C154u;
    {
        const bool branch_taken_0x32c154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32c154) {
            ctx->pc = 0x32C158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C154u;
            // 0x32c158: 0x8e150000  lw          $s5, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C170u;
            goto label_32c170;
        }
    }
    ctx->pc = 0x32C15Cu;
label_32c15c:
    // 0x32c15c: 0xc1036d2  jal         func_40DB48
label_32c160:
    if (ctx->pc == 0x32C160u) {
        ctx->pc = 0x32C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C15Cu;
        // 0x32c160: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C164u;
        goto label_32c164;
    }
    ctx->pc = 0x32C15Cu;
    SET_GPR_U32(ctx, 31, 0x32C164u);
    ctx->pc = 0x32C160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C15Cu;
    // 0x32c160: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x32C15Cu, 0x32C164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C164u;
label_32c164:
    // 0x32c164: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x32c164u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c168:
    // 0x32c168: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x32c168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32c16c:
    // 0x32c16c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32c170:
    // 0x32c170: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_32c174:
    if (ctx->pc == 0x32C174u) {
        ctx->pc = 0x32C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C170u;
        // 0x32c174: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C178u;
        goto label_32c178;
    }
    ctx->pc = 0x32C170u;
    {
        const bool branch_taken_0x32c170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C170u;
        // 0x32c174: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c170) {
            ctx->pc = 0x32C184u;
            goto label_32c184;
        }
    }
    ctx->pc = 0x32C178u;
label_32c178:
    // 0x32c178: 0xc10376a  jal         func_40DDA8
label_32c17c:
    if (ctx->pc == 0x32C17Cu) {
        ctx->pc = 0x32C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C178u;
        // 0x32c17c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C180u;
        goto label_32c180;
    }
    ctx->pc = 0x32C178u;
    SET_GPR_U32(ctx, 31, 0x32C180u);
    ctx->pc = 0x32C17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C178u;
    // 0x32c17c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x32C178u, 0x32C180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C180u;
label_32c180:
    // 0x32c180: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32c180u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c184:
    // 0x32c184: 0x8ec50068  lw          $a1, 0x68($s6)
    ctx->pc = 0x32c184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_32c188:
    // 0x32c188: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_32c18c:
    if (ctx->pc == 0x32C18Cu) {
        ctx->pc = 0x32C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C188u;
        // 0x32c18c: 0x3c120062  lui         $s2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C190u;
        goto label_32c190;
    }
    ctx->pc = 0x32C188u;
    {
        const bool branch_taken_0x32c188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C188u;
        // 0x32c18c: 0x3c120062  lui         $s2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c188) {
            ctx->pc = 0x32C1ECu;
            goto label_32c1ec;
        }
    }
    ctx->pc = 0x32C190u;
label_32c190:
    // 0x32c190: 0x8cb10050  lw          $s1, 0x50($a1)
    ctx->pc = 0x32c190u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_32c194:
    // 0x32c194: 0x2652e880  addiu       $s2, $s2, -0x1780
    ctx->pc = 0x32c194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
label_32c198:
    // 0x32c198: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x32c198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_32c19c:
    // 0x32c19c: 0x3223f000  andi        $v1, $s1, 0xF000
    ctx->pc = 0x32c19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)61440);
label_32c1a0:
    // 0x32c1a0: 0x32300f00  andi        $s0, $s1, 0xF00
    ctx->pc = 0x32c1a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3840);
label_32c1a4:
    // 0x32c1a4: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x32c1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
label_32c1a8:
    // 0x32c1a8: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x32c1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_32c1ac:
    // 0x32c1ac: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x32c1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_32c1b0:
    // 0x32c1b0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x32c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_32c1b4:
    // 0x32c1b4: 0x3800b  movn        $s0, $zero, $v1
    ctx->pc = 0x32c1b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_32c1b8:
    // 0x32c1b8: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x32c1b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_32c1bc:
    // 0x32c1bc: 0x40f809  jalr        $v0
label_32c1c0:
    if (ctx->pc == 0x32C1C0u) {
        ctx->pc = 0x32C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1BCu;
        // 0x32c1c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C1C4u;
        goto label_32c1c4;
    }
    ctx->pc = 0x32C1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C1C4u);
        ctx->pc = 0x32C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1BCu;
        // 0x32c1c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C1BCu, 0x32C1C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C1C4u;
label_32c1c4:
    // 0x32c1c4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x32c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_32c1c8:
    // 0x32c1c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32c1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c1cc:
    // 0x32c1cc: 0x40f809  jalr        $v0
label_32c1d0:
    if (ctx->pc == 0x32C1D0u) {
        ctx->pc = 0x32C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1CCu;
        // 0x32c1d0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C1D4u;
        goto label_32c1d4;
    }
    ctx->pc = 0x32C1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C1D4u);
        ctx->pc = 0x32C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1CCu;
        // 0x32c1d0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C1CCu, 0x32C1D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C1D4u;
label_32c1d4:
    // 0x32c1d4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x32c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_32c1d8:
    // 0x32c1d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32c1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c1dc:
    // 0x32c1dc: 0x40f809  jalr        $v0
label_32c1e0:
    if (ctx->pc == 0x32C1E0u) {
        ctx->pc = 0x32C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1DCu;
        // 0x32c1e0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C1E4u;
        goto label_32c1e4;
    }
    ctx->pc = 0x32C1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C1E4u);
        ctx->pc = 0x32C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1DCu;
        // 0x32c1e0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C1DCu, 0x32C1E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C1E4u;
label_32c1e4:
    // 0x32c1e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_32c1e8:
    if (ctx->pc == 0x32C1E8u) {
        ctx->pc = 0x32C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1E4u;
        // 0x32c1e8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C1ECu;
        goto label_32c1ec;
    }
    ctx->pc = 0x32C1E4u;
    {
        const bool branch_taken_0x32c1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1E4u;
        // 0x32c1e8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c1e4) {
            ctx->pc = 0x32C204u;
            goto label_32c204;
        }
    }
    ctx->pc = 0x32C1ECu;
label_32c1ec:
    // 0x32c1ec: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_32c1f0:
    // 0x32c1f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c1f4:
    // 0x32c1f4: 0x8c62e8a0  lw          $v0, -0x1760($v1)
    ctx->pc = 0x32c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961312)));
label_32c1f8:
    // 0x32c1f8: 0x40f809  jalr        $v0
label_32c1fc:
    if (ctx->pc == 0x32C1FCu) {
        ctx->pc = 0x32C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1F8u;
        // 0x32c1fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C200u;
        goto label_32c200;
    }
    ctx->pc = 0x32C1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C200u);
        ctx->pc = 0x32C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1F8u;
        // 0x32c1fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C1F8u, 0x32C200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C200u;
label_32c200:
    // 0x32c200: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x32c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_32c204:
    // 0x32c204: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x32c204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32c208:
    // 0x32c208: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x32c208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_32c20c:
    // 0x32c20c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x32c20cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_32c210:
    // 0x32c210: 0x2611ce80  addiu       $s1, $s0, -0x3180
    ctx->pc = 0x32c210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
label_32c214:
    // 0x32c214: 0xae360728  sw          $s6, 0x728($s1)
    ctx->pc = 0x32c214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1832), GPR_U32(ctx, 22));
label_32c218:
    // 0x32c218: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x32c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_32c21c:
    // 0x32c21c: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x32c21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c220:
    // 0x32c220: 0xe6210740  swc1        $f1, 0x740($s1)
    ctx->pc = 0x32c220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1856), bits); }
label_32c224:
    // 0x32c224: 0xc1111f8  jal         func_4447E0
label_32c228:
    if (ctx->pc == 0x32C228u) {
        ctx->pc = 0x32C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C224u;
        // 0x32c228: 0xe6200744  swc1        $f0, 0x744($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1860), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C22Cu;
        goto label_32c22c;
    }
    ctx->pc = 0x32C224u;
    SET_GPR_U32(ctx, 31, 0x32C22Cu);
    ctx->pc = 0x32C228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C224u;
    // 0x32c228: 0xe6200744  swc1        $f0, 0x744($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1860), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4447E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447E0u, 0x32C224u, 0x32C22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C22Cu;
label_32c22c:
    // 0x32c22c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x32c22cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c230:
    // 0x32c230: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x32c230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_32c234:
    // 0x32c234: 0x2683ffd8  addiu       $v1, $s4, -0x28
    ctx->pc = 0x32c234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
label_32c238:
    // 0x32c238: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_32c23c:
    if (ctx->pc == 0x32C23Cu) {
        ctx->pc = 0x32C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C238u;
        // 0x32c23c: 0xae350738  sw          $s5, 0x738($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1848), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C240u;
        goto label_32c240;
    }
    ctx->pc = 0x32C238u;
    {
        const bool branch_taken_0x32c238 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x32C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C238u;
        // 0x32c23c: 0xae350738  sw          $s5, 0x738($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1848), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c238) {
            ctx->pc = 0x32C26Cu;
            goto label_32c26c;
        }
    }
    ctx->pc = 0x32C240u;
label_32c240:
    // 0x32c240: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x32c240u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_32c244:
    // 0x32c244: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_32c248:
    if (ctx->pc == 0x32C248u) {
        ctx->pc = 0x32C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C244u;
        // 0x32c248: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C24Cu;
        goto label_32c24c;
    }
    ctx->pc = 0x32C244u;
    {
        const bool branch_taken_0x32c244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c244) {
            ctx->pc = 0x32C248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C244u;
            // 0x32c248: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C24Cu;
            goto label_32c24c;
        }
    }
    ctx->pc = 0x32C24Cu;
label_32c24c:
    // 0x32c24c: 0x2812  mflo        $a1
    ctx->pc = 0x32c24cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_32c250:
    // 0x32c250: 0x1810  mfhi        $v1
    ctx->pc = 0x32c250u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_32c254:
    // 0x32c254: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x32c254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_32c258:
    // 0x32c258: 0xae220768  sw          $v0, 0x768($s1)
    ctx->pc = 0x32c258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1896), GPR_U32(ctx, 2));
label_32c25c:
    // 0x32c25c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_32c260:
    if (ctx->pc == 0x32C260u) {
        ctx->pc = 0x32C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C25Cu;
        // 0x32c260: 0xae250768  sw          $a1, 0x768($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1896), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C264u;
        goto label_32c264;
    }
    ctx->pc = 0x32C25Cu;
    {
        const bool branch_taken_0x32c25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c25c) {
            ctx->pc = 0x32C260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C25Cu;
            // 0x32c260: 0xae250768  sw          $a1, 0x768($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1896), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C270u;
            goto label_32c270;
        }
    }
    ctx->pc = 0x32C264u;
label_32c264:
    // 0x32c264: 0x10000003  b           . + 4 + (0x3 << 2)
label_32c268:
    if (ctx->pc == 0x32C268u) {
        ctx->pc = 0x32C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C264u;
        // 0x32c268: 0x2602ce80  addiu       $v0, $s0, -0x3180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C26Cu;
        goto label_32c26c;
    }
    ctx->pc = 0x32C264u;
    {
        const bool branch_taken_0x32c264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C264u;
        // 0x32c268: 0x2602ce80  addiu       $v0, $s0, -0x3180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c264) {
            ctx->pc = 0x32C274u;
            goto label_32c274;
        }
    }
    ctx->pc = 0x32C26Cu;
label_32c26c:
    // 0x32c26c: 0xae200768  sw          $zero, 0x768($s1)
    ctx->pc = 0x32c26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1896), GPR_U32(ctx, 0));
label_32c270:
    // 0x32c270: 0x2602ce80  addiu       $v0, $s0, -0x3180
    ctx->pc = 0x32c270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
label_32c274:
    // 0x32c274: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x32c274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_32c278:
    // 0x32c278: 0x8c430768  lw          $v1, 0x768($v0)
    ctx->pc = 0x32c278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1896)));
label_32c27c:
    // 0x32c27c: 0x2545000c  addiu       $a1, $t2, 0xC
    ctx->pc = 0x32c27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_32c280:
    // 0x32c280: 0x8c480504  lw          $t0, 0x504($v0)
    ctx->pc = 0x32c280u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1284)));
label_32c284:
    // 0x32c284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32c284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c288:
    // 0x32c288: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x32c288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_32c28c:
    // 0x32c28c: 0x8c4407e0  lw          $a0, 0x7E0($v0)
    ctx->pc = 0x32c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2016)));
label_32c290:
    // 0x32c290: 0xac430764  sw          $v1, 0x764($v0)
    ctx->pc = 0x32c290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1892), GPR_U32(ctx, 3));
label_32c294:
    // 0x32c294: 0x94470764  lhu         $a3, 0x764($v0)
    ctx->pc = 0x32c294u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1892)));
label_32c298:
    // 0x32c298: 0xad480004  sw          $t0, 0x4($t2)
    ctx->pc = 0x32c298u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 8));
label_32c29c:
    // 0x32c29c: 0xa5470000  sh          $a3, 0x0($t2)
    ctx->pc = 0x32c29cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 7));
label_32c2a0:
    // 0x32c2a0: 0xc111718  jal         func_445C60
label_32c2a4:
    if (ctx->pc == 0x32C2A4u) {
        ctx->pc = 0x32C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C2A0u;
        // 0x32c2a4: 0xad490008  sw          $t1, 0x8($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C2A8u;
        goto label_32c2a8;
    }
    ctx->pc = 0x32C2A0u;
    SET_GPR_U32(ctx, 31, 0x32C2A8u);
    ctx->pc = 0x32C2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C2A0u;
    // 0x32c2a4: 0xad490008  sw          $t1, 0x8($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x32C2A0u, 0x32C2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C2A8u;
label_32c2a8:
    // 0x32c2a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_32c2ac:
    if (ctx->pc == 0x32C2ACu) {
        ctx->pc = 0x32C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C2A8u;
        // 0x32c2ac: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C2B0u;
        goto label_32c2b0;
    }
    ctx->pc = 0x32C2A8u;
    {
        const bool branch_taken_0x32c2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c2a8) {
            ctx->pc = 0x32C2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C2A8u;
            // 0x32c2ac: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C2B8u;
            goto label_32c2b8;
        }
    }
    ctx->pc = 0x32C2B0u;
label_32c2b0:
    // 0x32c2b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_32c2b4:
    if (ctx->pc == 0x32C2B4u) {
        ctx->pc = 0x32C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C2B0u;
        // 0x32c2b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C2B8u;
        goto label_32c2b8;
    }
    ctx->pc = 0x32C2B0u;
    {
        const bool branch_taken_0x32c2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C2B0u;
        // 0x32c2b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c2b0) {
            ctx->pc = 0x32C2C4u;
            goto label_32c2c4;
        }
    }
    ctx->pc = 0x32C2B8u;
label_32c2b8:
    // 0x32c2b8: 0xc0cb03e  jal         func_32C0F8
label_32c2bc:
    if (ctx->pc == 0x32C2BCu) {
        ctx->pc = 0x32C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C2B8u;
        // 0x32c2bc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C2C0u;
        goto label_32c2c0;
    }
    ctx->pc = 0x32C2B8u;
    SET_GPR_U32(ctx, 31, 0x32C2C0u);
    ctx->pc = 0x32C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C2B8u;
    // 0x32c2bc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C0F8u;
    goto label_32c0f8;
    ctx->pc = 0x32C2C0u;
label_32c2c0:
    // 0x32c2c0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x32c2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32c2c4:
    // 0x32c2c4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x32c2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32c2c8:
    // 0x32c2c8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x32c2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32c2cc:
    // 0x32c2cc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x32c2ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32c2d0:
    // 0x32c2d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x32c2d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32c2d4:
    // 0x32c2d4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x32c2d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32c2d8:
    // 0x32c2d8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x32c2d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32c2dc:
    // 0x32c2dc: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x32c2dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32c2e0:
    // 0x32c2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32c2e4:
    // 0x32c2e4: 0x3e00008  jr          $ra
label_32c2e8:
    if (ctx->pc == 0x32C2E8u) {
        ctx->pc = 0x32C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C2E4u;
        // 0x32c2e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C2ECu;
        goto label_32c2ec;
    }
    ctx->pc = 0x32C2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C2E4u;
        // 0x32c2e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C2ECu;
label_32c2ec:
    // 0x32c2ec: 0x0  nop
    ctx->pc = 0x32c2ecu;
    // NOP
    ctx->pc = 0x32c2f0u;
}
