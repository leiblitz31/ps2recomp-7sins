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

// Function: sub_00324180
// Address: 0x324180 - 0x324248
void sub_00324180_0x324180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324180_0x324180");
#endif

    switch (ctx->pc) {
        case 0x324180u: goto label_324180;
        case 0x324184u: goto label_324184;
        case 0x324188u: goto label_324188;
        case 0x32418cu: goto label_32418c;
        case 0x324190u: goto label_324190;
        case 0x324194u: goto label_324194;
        case 0x324198u: goto label_324198;
        case 0x32419cu: goto label_32419c;
        case 0x3241a0u: goto label_3241a0;
        case 0x3241a4u: goto label_3241a4;
        case 0x3241a8u: goto label_3241a8;
        case 0x3241acu: goto label_3241ac;
        case 0x3241b0u: goto label_3241b0;
        case 0x3241b4u: goto label_3241b4;
        case 0x3241b8u: goto label_3241b8;
        case 0x3241bcu: goto label_3241bc;
        case 0x3241c0u: goto label_3241c0;
        case 0x3241c4u: goto label_3241c4;
        case 0x3241c8u: goto label_3241c8;
        case 0x3241ccu: goto label_3241cc;
        case 0x3241d0u: goto label_3241d0;
        case 0x3241d4u: goto label_3241d4;
        case 0x3241d8u: goto label_3241d8;
        case 0x3241dcu: goto label_3241dc;
        case 0x3241e0u: goto label_3241e0;
        case 0x3241e4u: goto label_3241e4;
        case 0x3241e8u: goto label_3241e8;
        case 0x3241ecu: goto label_3241ec;
        case 0x3241f0u: goto label_3241f0;
        case 0x3241f4u: goto label_3241f4;
        case 0x3241f8u: goto label_3241f8;
        case 0x3241fcu: goto label_3241fc;
        case 0x324200u: goto label_324200;
        case 0x324204u: goto label_324204;
        case 0x324208u: goto label_324208;
        case 0x32420cu: goto label_32420c;
        case 0x324210u: goto label_324210;
        case 0x324214u: goto label_324214;
        case 0x324218u: goto label_324218;
        case 0x32421cu: goto label_32421c;
        case 0x324220u: goto label_324220;
        case 0x324224u: goto label_324224;
        case 0x324228u: goto label_324228;
        case 0x32422cu: goto label_32422c;
        case 0x324230u: goto label_324230;
        case 0x324234u: goto label_324234;
        case 0x324238u: goto label_324238;
        case 0x32423cu: goto label_32423c;
        case 0x324240u: goto label_324240;
        case 0x324244u: goto label_324244;
        default: break;
    }

    ctx->pc = 0x324180u;

label_324180:
    // 0x324180: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x324180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_324184:
    // 0x324184: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x324184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_324188:
    // 0x324188: 0x8c43b1e4  lw          $v1, -0x4E1C($v0)
    ctx->pc = 0x324188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947300)));
label_32418c:
    // 0x32418c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x32418cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_324190:
    // 0x324190: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x324190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_324194:
    // 0x324194: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x324194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
label_324198:
    // 0x324198: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x324198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_32419c:
    // 0x32419c: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x32419cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3241a0:
    // 0x3241a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3241a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3241a4:
    // 0x3241a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3241a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3241a8:
    // 0x3241a8: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3241a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_3241ac:
    // 0x3241ac: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x3241acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3241b0:
    // 0x3241b0: 0xc103404  jal         func_40D010
label_3241b4:
    if (ctx->pc == 0x3241B4u) {
        ctx->pc = 0x3241B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241B0u;
        // 0x3241b4: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3241B8u;
        goto label_3241b8;
    }
    ctx->pc = 0x3241B0u;
    SET_GPR_U32(ctx, 31, 0x3241B8u);
    ctx->pc = 0x3241B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3241B0u;
    // 0x3241b4: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3241B0u, 0x3241B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3241B8u;
label_3241b8:
    // 0x3241b8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3241bc:
    if (ctx->pc == 0x3241BCu) {
        ctx->pc = 0x3241BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241B8u;
        // 0x3241bc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3241C0u;
        goto label_3241c0;
    }
    ctx->pc = 0x3241B8u;
    {
        const bool branch_taken_0x3241b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3241b8) {
            ctx->pc = 0x3241BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3241B8u;
            // 0x3241bc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3241C8u;
            goto label_3241c8;
        }
    }
    ctx->pc = 0x3241C0u;
label_3241c0:
    // 0x3241c0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3241c4:
    if (ctx->pc == 0x3241C4u) {
        ctx->pc = 0x3241C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241C0u;
        // 0x3241c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3241C8u;
        goto label_3241c8;
    }
    ctx->pc = 0x3241C0u;
    {
        const bool branch_taken_0x3241c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3241C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241C0u;
        // 0x3241c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3241c0) {
            ctx->pc = 0x324230u;
            goto label_324230;
        }
    }
    ctx->pc = 0x3241C8u;
label_3241c8:
    // 0x3241c8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3241c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3241cc:
    // 0x3241cc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3241ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_3241d0:
    // 0x3241d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3241d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3241d4:
    // 0x3241d4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_3241d8:
    if (ctx->pc == 0x3241D8u) {
        ctx->pc = 0x3241D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241D4u;
        // 0x3241d8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3241DCu;
        goto label_3241dc;
    }
    ctx->pc = 0x3241D4u;
    {
        const bool branch_taken_0x3241d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3241D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241D4u;
        // 0x3241d8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3241d4) {
            ctx->pc = 0x3241FCu;
            goto label_3241fc;
        }
    }
    ctx->pc = 0x3241DCu;
label_3241dc:
    // 0x3241dc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3241dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3241e0:
    // 0x3241e0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3241e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_3241e4:
    // 0x3241e4: 0x8c62e944  lw          $v0, -0x16BC($v1)
    ctx->pc = 0x3241e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961476)));
label_3241e8:
    // 0x3241e8: 0x40f809  jalr        $v0
label_3241ec:
    if (ctx->pc == 0x3241ECu) {
        ctx->pc = 0x3241ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241E8u;
        // 0x3241ec: 0x37a4000c  ori         $a0, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3241F0u;
        goto label_3241f0;
    }
    ctx->pc = 0x3241E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3241F0u);
        ctx->pc = 0x3241ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241E8u;
        // 0x3241ec: 0x37a4000c  ori         $a0, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3241E8u, 0x3241F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3241F0u;
label_3241f0:
    // 0x3241f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3241f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3241f4:
    // 0x3241f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3241f8:
    if (ctx->pc == 0x3241F8u) {
        ctx->pc = 0x3241F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241F4u;
        // 0x3241f8: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3241FCu;
        goto label_3241fc;
    }
    ctx->pc = 0x3241F4u;
    {
        const bool branch_taken_0x3241f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3241F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241F4u;
        // 0x3241f8: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3241f4) {
            ctx->pc = 0x324218u;
            goto label_324218;
        }
    }
    ctx->pc = 0x3241FCu;
label_3241fc:
    // 0x3241fc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3241fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_324200:
    // 0x324200: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x324200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_324204:
    // 0x324204: 0x8c62e944  lw          $v0, -0x16BC($v1)
    ctx->pc = 0x324204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961476)));
label_324208:
    // 0x324208: 0x24a59598  addiu       $a1, $a1, -0x6A68
    ctx->pc = 0x324208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940056));
label_32420c:
    // 0x32420c: 0x40f809  jalr        $v0
label_324210:
    if (ctx->pc == 0x324210u) {
        ctx->pc = 0x324210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32420Cu;
        // 0x324210: 0x37a4000c  ori         $a0, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x324214u;
        goto label_324214;
    }
    ctx->pc = 0x32420Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x324214u);
        ctx->pc = 0x324210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32420Cu;
        // 0x324210: 0x37a4000c  ori         $a0, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32420Cu, 0x324214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324214u;
label_324214:
    // 0x324214: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x324214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_324218:
    // 0x324218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32421c:
    // 0x32421c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32421cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_324220:
    // 0x324220: 0xc10486e  jal         func_4121B8
label_324224:
    if (ctx->pc == 0x324224u) {
        ctx->pc = 0x324224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324220u;
        // 0x324224: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324228u;
        goto label_324228;
    }
    ctx->pc = 0x324220u;
    SET_GPR_U32(ctx, 31, 0x324228u);
    ctx->pc = 0x324224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324220u;
    // 0x324224: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x324220u, 0x324228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324228u;
label_324228:
    // 0x324228: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x324228u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_32422c:
    // 0x32422c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32422cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_324230:
    // 0x324230: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x324230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_324234:
    // 0x324234: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x324234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_324238:
    // 0x324238: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x324238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32423c:
    // 0x32423c: 0x3e00008  jr          $ra
label_324240:
    if (ctx->pc == 0x324240u) {
        ctx->pc = 0x324240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32423Cu;
        // 0x324240: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324244u;
        goto label_324244;
    }
    ctx->pc = 0x32423Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32423Cu;
        // 0x324240: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32423Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324244u;
label_324244:
    // 0x324244: 0x0  nop
    ctx->pc = 0x324244u;
    // NOP
    ctx->pc = 0x324248u;
}
