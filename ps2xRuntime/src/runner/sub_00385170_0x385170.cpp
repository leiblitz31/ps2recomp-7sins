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

// Function: sub_00385170
// Address: 0x385170 - 0x385260
void sub_00385170_0x385170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385170_0x385170");
#endif

    switch (ctx->pc) {
        case 0x385170u: goto label_385170;
        case 0x385174u: goto label_385174;
        case 0x385178u: goto label_385178;
        case 0x38517cu: goto label_38517c;
        case 0x385180u: goto label_385180;
        case 0x385184u: goto label_385184;
        case 0x385188u: goto label_385188;
        case 0x38518cu: goto label_38518c;
        case 0x385190u: goto label_385190;
        case 0x385194u: goto label_385194;
        case 0x385198u: goto label_385198;
        case 0x38519cu: goto label_38519c;
        case 0x3851a0u: goto label_3851a0;
        case 0x3851a4u: goto label_3851a4;
        case 0x3851a8u: goto label_3851a8;
        case 0x3851acu: goto label_3851ac;
        case 0x3851b0u: goto label_3851b0;
        case 0x3851b4u: goto label_3851b4;
        case 0x3851b8u: goto label_3851b8;
        case 0x3851bcu: goto label_3851bc;
        case 0x3851c0u: goto label_3851c0;
        case 0x3851c4u: goto label_3851c4;
        case 0x3851c8u: goto label_3851c8;
        case 0x3851ccu: goto label_3851cc;
        case 0x3851d0u: goto label_3851d0;
        case 0x3851d4u: goto label_3851d4;
        case 0x3851d8u: goto label_3851d8;
        case 0x3851dcu: goto label_3851dc;
        case 0x3851e0u: goto label_3851e0;
        case 0x3851e4u: goto label_3851e4;
        case 0x3851e8u: goto label_3851e8;
        case 0x3851ecu: goto label_3851ec;
        case 0x3851f0u: goto label_3851f0;
        case 0x3851f4u: goto label_3851f4;
        case 0x3851f8u: goto label_3851f8;
        case 0x3851fcu: goto label_3851fc;
        case 0x385200u: goto label_385200;
        case 0x385204u: goto label_385204;
        case 0x385208u: goto label_385208;
        case 0x38520cu: goto label_38520c;
        case 0x385210u: goto label_385210;
        case 0x385214u: goto label_385214;
        case 0x385218u: goto label_385218;
        case 0x38521cu: goto label_38521c;
        case 0x385220u: goto label_385220;
        case 0x385224u: goto label_385224;
        case 0x385228u: goto label_385228;
        case 0x38522cu: goto label_38522c;
        case 0x385230u: goto label_385230;
        case 0x385234u: goto label_385234;
        case 0x385238u: goto label_385238;
        case 0x38523cu: goto label_38523c;
        case 0x385240u: goto label_385240;
        case 0x385244u: goto label_385244;
        case 0x385248u: goto label_385248;
        case 0x38524cu: goto label_38524c;
        case 0x385250u: goto label_385250;
        case 0x385254u: goto label_385254;
        case 0x385258u: goto label_385258;
        case 0x38525cu: goto label_38525c;
        default: break;
    }

    ctx->pc = 0x385170u;

label_385170:
    // 0x385170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x385170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_385174:
    // 0x385174: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x385174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_385178:
    // 0x385178: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x385178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_38517c:
    // 0x38517c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x38517cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_385180:
    // 0x385180: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x385180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_385184:
    // 0x385184: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x385184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_385188:
    // 0x385188: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x385188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_38518c:
    // 0x38518c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38518cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_385190:
    // 0x385190: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x385190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_385194:
    // 0x385194: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x385194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_385198:
    // 0x385198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38519c:
    // 0x38519c: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
label_3851a0:
    if (ctx->pc == 0x3851A0u) {
        ctx->pc = 0x3851A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38519Cu;
        // 0x3851a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3851A4u;
        goto label_3851a4;
    }
    ctx->pc = 0x38519Cu;
    {
        const bool branch_taken_0x38519c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3851A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38519Cu;
        // 0x3851a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38519c) {
            ctx->pc = 0x3851B8u;
            goto label_3851b8;
        }
    }
    ctx->pc = 0x3851A4u;
label_3851a4:
    // 0x3851a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3851a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3851a8:
    // 0x3851a8: 0x11020007  beq         $t0, $v0, . + 4 + (0x7 << 2)
label_3851ac:
    if (ctx->pc == 0x3851ACu) {
        ctx->pc = 0x3851ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851A8u;
        // 0x3851ac: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3851B0u;
        goto label_3851b0;
    }
    ctx->pc = 0x3851A8u;
    {
        const bool branch_taken_0x3851a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x3851ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851A8u;
        // 0x3851ac: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3851a8) {
            ctx->pc = 0x3851C8u;
            goto label_3851c8;
        }
    }
    ctx->pc = 0x3851B0u;
label_3851b0:
    // 0x3851b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_3851b4:
    if (ctx->pc == 0x3851B4u) {
        ctx->pc = 0x3851B8u;
        goto label_3851b8;
    }
    ctx->pc = 0x3851B0u;
    {
        const bool branch_taken_0x3851b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3851b0) {
            ctx->pc = 0x3851DCu;
            goto label_3851dc;
        }
    }
    ctx->pc = 0x3851B8u;
label_3851b8:
    // 0x3851b8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3851b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_3851bc:
    // 0x3851bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3851bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3851c0:
    // 0x3851c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3851c4:
    if (ctx->pc == 0x3851C4u) {
        ctx->pc = 0x3851C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851C0u;
        // 0x3851c4: 0x8c44ad40  lw          $a0, -0x52C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3851C8u;
        goto label_3851c8;
    }
    ctx->pc = 0x3851C0u;
    {
        const bool branch_taken_0x3851c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3851C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851C0u;
        // 0x3851c4: 0x8c44ad40  lw          $a0, -0x52C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3851c0) {
            ctx->pc = 0x3851D0u;
            goto label_3851d0;
        }
    }
    ctx->pc = 0x3851C8u;
label_3851c8:
    // 0x3851c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3851c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3851cc:
    // 0x3851cc: 0x8c44ad70  lw          $a0, -0x5290($v0)
    ctx->pc = 0x3851ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946160)));
label_3851d0:
    // 0x3851d0: 0xc0ef26c  jal         func_3BC9B0
label_3851d4:
    if (ctx->pc == 0x3851D4u) {
        ctx->pc = 0x3851D8u;
        goto label_3851d8;
    }
    ctx->pc = 0x3851D0u;
    SET_GPR_U32(ctx, 31, 0x3851D8u);
    ctx->pc = 0x3BC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC9B0u, 0x3851D0u, 0x3851D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3851D8u;
label_3851d8:
    // 0x3851d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3851d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3851dc:
    // 0x3851dc: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_3851e0:
    if (ctx->pc == 0x3851E0u) {
        ctx->pc = 0x3851E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851DCu;
        // 0x3851e0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3851E4u;
        goto label_3851e4;
    }
    ctx->pc = 0x3851DCu;
    {
        const bool branch_taken_0x3851dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3851E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851DCu;
        // 0x3851e0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3851dc) {
            ctx->pc = 0x385238u;
            goto label_385238;
        }
    }
    ctx->pc = 0x3851E4u;
label_3851e4:
    // 0x3851e4: 0x8f84bd04  lw          $a0, -0x42FC($gp)
    ctx->pc = 0x3851e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950148)));
label_3851e8:
    // 0x3851e8: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x3851e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_3851ec:
    // 0x3851ec: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3851ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3851f0:
    // 0x3851f0: 0x40f809  jalr        $v0
label_3851f4:
    if (ctx->pc == 0x3851F4u) {
        ctx->pc = 0x3851F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851F0u;
        // 0x3851f4: 0x34a50135  ori         $a1, $a1, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3851F8u;
        goto label_3851f8;
    }
    ctx->pc = 0x3851F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3851F8u);
        ctx->pc = 0x3851F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851F0u;
        // 0x3851f4: 0x34a50135  ori         $a1, $a1, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3851F0u, 0x3851F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3851F8u;
label_3851f8:
    // 0x3851f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3851f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3851fc:
    // 0x3851fc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_385200:
    if (ctx->pc == 0x385200u) {
        ctx->pc = 0x385200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851FCu;
        // 0x385200: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385204u;
        goto label_385204;
    }
    ctx->pc = 0x3851FCu;
    {
        const bool branch_taken_0x3851fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x385200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851FCu;
        // 0x385200: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3851fc) {
            ctx->pc = 0x385238u;
            goto label_385238;
        }
    }
    ctx->pc = 0x385204u;
label_385204:
    // 0x385204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385208:
    // 0x385208: 0xc0bc77e  jal         func_2F1DF8
label_38520c:
    if (ctx->pc == 0x38520Cu) {
        ctx->pc = 0x38520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385208u;
        // 0x38520c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385210u;
        goto label_385210;
    }
    ctx->pc = 0x385208u;
    SET_GPR_U32(ctx, 31, 0x385210u);
    ctx->pc = 0x38520Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385208u;
    // 0x38520c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x385208u, 0x385210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385210u;
label_385210:
    // 0x385210: 0xa200001f  sb          $zero, 0x1F($s0)
    ctx->pc = 0x385210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
label_385214:
    // 0x385214: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x385214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_385218:
    // 0x385218: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x385218u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_38521c:
    // 0x38521c: 0xc0bb778  jal         func_2EDDE0
label_385220:
    if (ctx->pc == 0x385220u) {
        ctx->pc = 0x385220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38521Cu;
        // 0x385220: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385224u;
        goto label_385224;
    }
    ctx->pc = 0x38521Cu;
    SET_GPR_U32(ctx, 31, 0x385224u);
    ctx->pc = 0x385220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38521Cu;
    // 0x385220: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x38521Cu, 0x385224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385224u;
label_385224:
    // 0x385224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x385224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385228:
    // 0x385228: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x385228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_38522c:
    // 0x38522c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x38522cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_385230:
    // 0x385230: 0x10000002  b           . + 4 + (0x2 << 2)
label_385234:
    if (ctx->pc == 0x385234u) {
        ctx->pc = 0x385234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385230u;
        // 0x385234: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385238u;
        goto label_385238;
    }
    ctx->pc = 0x385230u;
    {
        const bool branch_taken_0x385230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385230u;
        // 0x385234: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385230) {
            ctx->pc = 0x38523Cu;
            goto label_38523c;
        }
    }
    ctx->pc = 0x385238u;
label_385238:
    // 0x385238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x385238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38523c:
    // 0x38523c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x38523cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_385240:
    // 0x385240: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x385240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_385244:
    // 0x385244: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x385244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_385248:
    // 0x385248: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x385248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38524c:
    // 0x38524c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x38524cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_385250:
    // 0x385250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_385254:
    // 0x385254: 0x3e00008  jr          $ra
label_385258:
    if (ctx->pc == 0x385258u) {
        ctx->pc = 0x385258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385254u;
        // 0x385258: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38525Cu;
        goto label_38525c;
    }
    ctx->pc = 0x385254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385254u;
        // 0x385258: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38525Cu;
label_38525c:
    // 0x38525c: 0x0  nop
    ctx->pc = 0x38525cu;
    // NOP
    ctx->pc = 0x385260u;
}
