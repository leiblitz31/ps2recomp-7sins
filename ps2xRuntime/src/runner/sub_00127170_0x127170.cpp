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

// Function: sub_00127170
// Address: 0x127170 - 0x1272e0
void sub_00127170_0x127170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127170_0x127170");
#endif

    switch (ctx->pc) {
        case 0x127170u: goto label_127170;
        case 0x127174u: goto label_127174;
        case 0x127178u: goto label_127178;
        case 0x12717cu: goto label_12717c;
        case 0x127180u: goto label_127180;
        case 0x127184u: goto label_127184;
        case 0x127188u: goto label_127188;
        case 0x12718cu: goto label_12718c;
        case 0x127190u: goto label_127190;
        case 0x127194u: goto label_127194;
        case 0x127198u: goto label_127198;
        case 0x12719cu: goto label_12719c;
        case 0x1271a0u: goto label_1271a0;
        case 0x1271a4u: goto label_1271a4;
        case 0x1271a8u: goto label_1271a8;
        case 0x1271acu: goto label_1271ac;
        case 0x1271b0u: goto label_1271b0;
        case 0x1271b4u: goto label_1271b4;
        case 0x1271b8u: goto label_1271b8;
        case 0x1271bcu: goto label_1271bc;
        case 0x1271c0u: goto label_1271c0;
        case 0x1271c4u: goto label_1271c4;
        case 0x1271c8u: goto label_1271c8;
        case 0x1271ccu: goto label_1271cc;
        case 0x1271d0u: goto label_1271d0;
        case 0x1271d4u: goto label_1271d4;
        case 0x1271d8u: goto label_1271d8;
        case 0x1271dcu: goto label_1271dc;
        case 0x1271e0u: goto label_1271e0;
        case 0x1271e4u: goto label_1271e4;
        case 0x1271e8u: goto label_1271e8;
        case 0x1271ecu: goto label_1271ec;
        case 0x1271f0u: goto label_1271f0;
        case 0x1271f4u: goto label_1271f4;
        case 0x1271f8u: goto label_1271f8;
        case 0x1271fcu: goto label_1271fc;
        case 0x127200u: goto label_127200;
        case 0x127204u: goto label_127204;
        case 0x127208u: goto label_127208;
        case 0x12720cu: goto label_12720c;
        case 0x127210u: goto label_127210;
        case 0x127214u: goto label_127214;
        case 0x127218u: goto label_127218;
        case 0x12721cu: goto label_12721c;
        case 0x127220u: goto label_127220;
        case 0x127224u: goto label_127224;
        case 0x127228u: goto label_127228;
        case 0x12722cu: goto label_12722c;
        case 0x127230u: goto label_127230;
        case 0x127234u: goto label_127234;
        case 0x127238u: goto label_127238;
        case 0x12723cu: goto label_12723c;
        case 0x127240u: goto label_127240;
        case 0x127244u: goto label_127244;
        case 0x127248u: goto label_127248;
        case 0x12724cu: goto label_12724c;
        case 0x127250u: goto label_127250;
        case 0x127254u: goto label_127254;
        case 0x127258u: goto label_127258;
        case 0x12725cu: goto label_12725c;
        case 0x127260u: goto label_127260;
        case 0x127264u: goto label_127264;
        case 0x127268u: goto label_127268;
        case 0x12726cu: goto label_12726c;
        case 0x127270u: goto label_127270;
        case 0x127274u: goto label_127274;
        case 0x127278u: goto label_127278;
        case 0x12727cu: goto label_12727c;
        case 0x127280u: goto label_127280;
        case 0x127284u: goto label_127284;
        case 0x127288u: goto label_127288;
        case 0x12728cu: goto label_12728c;
        case 0x127290u: goto label_127290;
        case 0x127294u: goto label_127294;
        case 0x127298u: goto label_127298;
        case 0x12729cu: goto label_12729c;
        case 0x1272a0u: goto label_1272a0;
        case 0x1272a4u: goto label_1272a4;
        case 0x1272a8u: goto label_1272a8;
        case 0x1272acu: goto label_1272ac;
        case 0x1272b0u: goto label_1272b0;
        case 0x1272b4u: goto label_1272b4;
        case 0x1272b8u: goto label_1272b8;
        case 0x1272bcu: goto label_1272bc;
        case 0x1272c0u: goto label_1272c0;
        case 0x1272c4u: goto label_1272c4;
        case 0x1272c8u: goto label_1272c8;
        case 0x1272ccu: goto label_1272cc;
        case 0x1272d0u: goto label_1272d0;
        case 0x1272d4u: goto label_1272d4;
        case 0x1272d8u: goto label_1272d8;
        case 0x1272dcu: goto label_1272dc;
        default: break;
    }

    ctx->pc = 0x127170u;

label_127170:
    // 0x127170: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x127170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_127174:
    // 0x127174: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x127174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_127178:
    // 0x127178: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x127178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_12717c:
    // 0x12717c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12717cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_127180:
    // 0x127180: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x127180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_127184:
    // 0x127184: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_127188:
    // 0x127188: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x127188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12718c:
    // 0x12718c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x12718cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_127190:
    // 0x127190: 0xc042330  jal         func_108CC0
label_127194:
    if (ctx->pc == 0x127194u) {
        ctx->pc = 0x127198u;
        goto label_127198;
    }
    ctx->pc = 0x127190u;
    SET_GPR_U32(ctx, 31, 0x127198u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x127190u, 0x127198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127198u;
label_127198:
    // 0x127198: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x127198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12719c:
    // 0x12719c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_1271a0:
    if (ctx->pc == 0x1271A0u) {
        ctx->pc = 0x1271A4u;
        goto label_1271a4;
    }
    ctx->pc = 0x12719Cu;
    {
        const bool branch_taken_0x12719c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12719c) {
            ctx->pc = 0x1271B4u;
            goto label_1271b4;
        }
    }
    ctx->pc = 0x1271A4u;
label_1271a4:
    // 0x1271a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1271a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1271a8:
    // 0x1271a8: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1271a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1271ac:
    // 0x1271ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_1271b0:
    if (ctx->pc == 0x1271B0u) {
        ctx->pc = 0x1271B4u;
        goto label_1271b4;
    }
    ctx->pc = 0x1271ACu;
    {
        const bool branch_taken_0x1271ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1271ac) {
            ctx->pc = 0x1271B8u;
            goto label_1271b8;
        }
    }
    ctx->pc = 0x1271B4u;
label_1271b4:
    // 0x1271b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1271b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1271b8:
    // 0x1271b8: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x1271b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1271bc:
    // 0x1271bc: 0x1240003d  beqz        $s2, . + 4 + (0x3D << 2)
label_1271c0:
    if (ctx->pc == 0x1271C0u) {
        ctx->pc = 0x1271C4u;
        goto label_1271c4;
    }
    ctx->pc = 0x1271BCu;
    {
        const bool branch_taken_0x1271bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1271bc) {
            ctx->pc = 0x1272B4u;
            goto label_1272b4;
        }
    }
    ctx->pc = 0x1271C4u;
label_1271c4:
    // 0x1271c4: 0xc048f34  jal         func_123CD0
label_1271c8:
    if (ctx->pc == 0x1271C8u) {
        ctx->pc = 0x1271CCu;
        goto label_1271cc;
    }
    ctx->pc = 0x1271C4u;
    SET_GPR_U32(ctx, 31, 0x1271CCu);
    ctx->pc = 0x123CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CD0u, 0x1271C4u, 0x1271CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1271CCu;
label_1271cc:
    // 0x1271cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1271ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1271d0:
    // 0x1271d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1271d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1271d4:
    // 0x1271d4: 0xc0497a4  jal         func_125E90
label_1271d8:
    if (ctx->pc == 0x1271D8u) {
        ctx->pc = 0x1271DCu;
        goto label_1271dc;
    }
    ctx->pc = 0x1271D4u;
    SET_GPR_U32(ctx, 31, 0x1271DCu);
    ctx->pc = 0x125E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E90u, 0x1271D4u, 0x1271DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1271DCu;
label_1271dc:
    // 0x1271dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1271dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1271e0:
    // 0x1271e0: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1271e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1271e4:
    // 0x1271e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1271e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1271e8:
    // 0x1271e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1271e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1271ec:
    // 0x1271ec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1271ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1271f0:
    // 0x1271f0: 0x320f809  jalr        $t9
label_1271f4:
    if (ctx->pc == 0x1271F4u) {
        ctx->pc = 0x1271F8u;
        goto label_1271f8;
    }
    ctx->pc = 0x1271F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1271F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1271F0u, 0x1271F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1271F8u;
label_1271f8:
    // 0x1271f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1271f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1271fc:
    // 0x1271fc: 0xc0497a4  jal         func_125E90
label_127200:
    if (ctx->pc == 0x127200u) {
        ctx->pc = 0x127204u;
        goto label_127204;
    }
    ctx->pc = 0x1271FCu;
    SET_GPR_U32(ctx, 31, 0x127204u);
    ctx->pc = 0x125E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E90u, 0x1271FCu, 0x127204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127204u;
label_127204:
    // 0x127204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x127204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127208:
    // 0x127208: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12720c:
    // 0x12720c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12720cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127210:
    // 0x127210: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x127210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_127214:
    // 0x127214: 0x320f809  jalr        $t9
label_127218:
    if (ctx->pc == 0x127218u) {
        ctx->pc = 0x12721Cu;
        goto label_12721c;
    }
    ctx->pc = 0x127214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12721Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127214u, 0x12721Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12721Cu;
label_12721c:
    // 0x12721c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12721cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_127220:
    // 0x127220: 0xc08ec7c  jal         func_23B1F0
label_127224:
    if (ctx->pc == 0x127224u) {
        ctx->pc = 0x127228u;
        goto label_127228;
    }
    ctx->pc = 0x127220u;
    SET_GPR_U32(ctx, 31, 0x127228u);
    ctx->pc = 0x23B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1F0u, 0x127220u, 0x127228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127228u;
label_127228:
    // 0x127228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12722c:
    // 0x12722c: 0xc0497a4  jal         func_125E90
label_127230:
    if (ctx->pc == 0x127230u) {
        ctx->pc = 0x127234u;
        goto label_127234;
    }
    ctx->pc = 0x12722Cu;
    SET_GPR_U32(ctx, 31, 0x127234u);
    ctx->pc = 0x125E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E90u, 0x12722Cu, 0x127234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127234u;
label_127234:
    // 0x127234: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x127234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_127238:
    // 0x127238: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x127238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_12723c:
    // 0x12723c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x12723cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_127240:
    // 0x127240: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127244:
    // 0x127244: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x127244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_127248:
    // 0x127248: 0x320f809  jalr        $t9
label_12724c:
    if (ctx->pc == 0x12724Cu) {
        ctx->pc = 0x127250u;
        goto label_127250;
    }
    ctx->pc = 0x127248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127250u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127248u, 0x127250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127250u;
label_127250:
    // 0x127250: 0xc090864  jal         func_242190
label_127254:
    if (ctx->pc == 0x127254u) {
        ctx->pc = 0x127258u;
        goto label_127258;
    }
    ctx->pc = 0x127250u;
    SET_GPR_U32(ctx, 31, 0x127258u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x127250u, 0x127258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127258u;
label_127258:
    // 0x127258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x127258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12725c:
    // 0x12725c: 0xc090598  jal         func_241660
label_127260:
    if (ctx->pc == 0x127260u) {
        ctx->pc = 0x127264u;
        goto label_127264;
    }
    ctx->pc = 0x12725Cu;
    SET_GPR_U32(ctx, 31, 0x127264u);
    ctx->pc = 0x241660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241660u, 0x12725Cu, 0x127264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127264u;
label_127264:
    // 0x127264: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x127264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127268:
    // 0x127268: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x127268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12726c:
    // 0x12726c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12726cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127270:
    // 0x127270: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x127270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_127274:
    // 0x127274: 0x320f809  jalr        $t9
label_127278:
    if (ctx->pc == 0x127278u) {
        ctx->pc = 0x12727Cu;
        goto label_12727c;
    }
    ctx->pc = 0x127274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12727Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127274u, 0x12727Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12727Cu;
label_12727c:
    // 0x12727c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12727cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127280:
    // 0x127280: 0xc0497a4  jal         func_125E90
label_127284:
    if (ctx->pc == 0x127284u) {
        ctx->pc = 0x127288u;
        goto label_127288;
    }
    ctx->pc = 0x127280u;
    SET_GPR_U32(ctx, 31, 0x127288u);
    ctx->pc = 0x125E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E90u, 0x127280u, 0x127288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127288u;
label_127288:
    // 0x127288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x127288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12728c:
    // 0x12728c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12728cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127290:
    // 0x127290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127294:
    // 0x127294: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127298:
    // 0x127298: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x127298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_12729c:
    // 0x12729c: 0x320f809  jalr        $t9
label_1272a0:
    if (ctx->pc == 0x1272A0u) {
        ctx->pc = 0x1272A4u;
        goto label_1272a4;
    }
    ctx->pc = 0x12729Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1272A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12729Cu, 0x1272A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1272A4u;
label_1272a4:
    // 0x1272a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1272a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1272a8:
    // 0x1272a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1272a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1272ac:
    // 0x1272ac: 0xc041b74  jal         func_106DD0
label_1272b0:
    if (ctx->pc == 0x1272B0u) {
        ctx->pc = 0x1272B4u;
        goto label_1272b4;
    }
    ctx->pc = 0x1272ACu;
    SET_GPR_U32(ctx, 31, 0x1272B4u);
    ctx->pc = 0x106DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106DD0u, 0x1272ACu, 0x1272B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1272B4u;
label_1272b4:
    // 0x1272b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1272b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1272b8:
    // 0x1272b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1272b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1272bc:
    // 0x1272bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1272bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1272c0:
    // 0x1272c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1272c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1272c4:
    // 0x1272c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1272c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1272c8:
    // 0x1272c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1272c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1272cc:
    // 0x1272cc: 0x3e00008  jr          $ra
label_1272d0:
    if (ctx->pc == 0x1272D0u) {
        ctx->pc = 0x1272D4u;
        goto label_1272d4;
    }
    ctx->pc = 0x1272CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1272CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1272D4u;
label_1272d4:
    // 0x1272d4: 0x0  nop
    ctx->pc = 0x1272d4u;
    // NOP
label_1272d8:
    // 0x1272d8: 0x0  nop
    ctx->pc = 0x1272d8u;
    // NOP
label_1272dc:
    // 0x1272dc: 0x0  nop
    ctx->pc = 0x1272dcu;
    // NOP
    ctx->pc = 0x1272e0u;
}
