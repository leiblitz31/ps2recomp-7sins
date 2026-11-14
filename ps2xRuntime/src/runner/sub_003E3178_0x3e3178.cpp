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

// Function: sub_003E3178
// Address: 0x3e3178 - 0x3e3370
void sub_003E3178_0x3e3178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3178_0x3e3178");
#endif

    switch (ctx->pc) {
        case 0x3e31a8u: goto label_3e31a8;
        case 0x3e31c4u: goto label_3e31c4;
        case 0x3e31d0u: goto label_3e31d0;
        case 0x3e3200u: goto label_3e3200;
        case 0x3e3208u: goto label_3e3208;
        case 0x3e3224u: goto label_3e3224;
        case 0x3e322cu: goto label_3e322c;
        case 0x3e3264u: goto label_3e3264;
        case 0x3e3298u: goto label_3e3298;
        case 0x3e32d4u: goto label_3e32d4;
        case 0x3e3308u: goto label_3e3308;
        case 0x3e3320u: goto label_3e3320;
        case 0x3e3334u: goto label_3e3334;
        case 0x3e3354u: goto label_3e3354;
        default: break;
    }

    ctx->pc = 0x3e3178u;

    // 0x3e3178: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3e3178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x3e317c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3e317cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3e3180: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x3e3180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x3e3184: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x3e3184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x3e3188: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3e3188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e318c: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x3e318cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x3e3190: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e3190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3194: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x3e3194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x3e3198: 0x2444e0a0  addiu       $a0, $v0, -0x1F60
    ctx->pc = 0x3e3198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
    // 0x3e319c: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x3e319cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x3e31a0: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x3e31a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3e31a4: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x3e31a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e31a8:
    // 0x3e31a8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x3e31a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e31ac: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3e31acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e31b0: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x3E31B0u;
    {
        const bool branch_taken_0x3e31b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E31B0u;
        // 0x3e31b4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e31b0) {
            ctx->pc = 0x3E32C0u;
            goto label_3e32c0;
        }
    }
    ctx->pc = 0x3E31B8u;
    // 0x3e31b8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E31B8u;
    {
        const bool branch_taken_0x3e31b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E31B8u;
        // 0x3e31bc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e31b8) {
            ctx->pc = 0x3E31A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e31a8;
        }
    }
    ctx->pc = 0x3E31C0u;
    // 0x3e31c0: 0x2e260300  sltiu       $a2, $s1, 0x300
    ctx->pc = 0x3e31c0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)768) ? 1 : 0);
label_3e31c4:
    // 0x3e31c4: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x3e31c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e31c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3e31c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e31cc: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x3e31ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_3e31d0:
    // 0x3e31d0: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x3e31d0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e31d4: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x3e31d4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3e31d8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3e31d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3e31dc: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x3e31dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x3e31e0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3e31e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3e31e4: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E31E4u;
    {
        const bool branch_taken_0x3e31e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3E31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E31E4u;
        // 0x3e31e8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e31e4) {
            ctx->pc = 0x3E31D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e31d0;
        }
    }
    ctx->pc = 0x3E31ECu;
    // 0x3e31ec: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3e31ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e31f0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E31F0u;
    {
        const bool branch_taken_0x3e31f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E31F0u;
        // 0x3e31f4: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e31f0) {
            ctx->pc = 0x3E3210u;
            goto label_3e3210;
        }
    }
    ctx->pc = 0x3E31F8u;
    // 0x3e31f8: 0xc0f8b70  jal         func_3E2DC0
    ctx->pc = 0x3E31F8u;
    SET_GPR_U32(ctx, 31, 0x3E3200u);
    ctx->pc = 0x3E31FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E31F8u;
    // 0x3e31fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2DC0u, 0x3E31F8u, 0x3E3200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3200u;
label_3e3200:
    // 0x3e3200: 0xc0f8b68  jal         func_3E2DA0
    ctx->pc = 0x3E3200u;
    SET_GPR_U32(ctx, 31, 0x3E3208u);
    ctx->pc = 0x3E3204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3200u;
    // 0x3e3204: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2DA0u, 0x3E3200u, 0x3E3208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3208u;
label_3e3208:
    // 0x3e3208: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3e3208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3e320c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e320cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e3210:
    // 0x3e3210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e3214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3218: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x3e3218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x3e321c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3E321Cu;
    SET_GPR_U32(ctx, 31, 0x3E3224u);
    ctx->pc = 0x3E3220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E321Cu;
    // 0x3e3220: 0x26110110  addiu       $s1, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3E321Cu, 0x3E3224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3224u;
label_3e3224:
    // 0x3e3224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3228: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x3e3228u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e322c:
    // 0x3e322c: 0x78690000  lq          $t1, 0x0($v1)
    ctx->pc = 0x3e322cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e3230: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x3e3230u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3e3234: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x3e3234u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x3e3238: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x3e3238u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x3e323c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3e323cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3e3240: 0x1473fffa  bne         $v1, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E3240u;
    {
        const bool branch_taken_0x3e3240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x3E3244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3240u;
        // 0x3e3244: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3240) {
            ctx->pc = 0x3E322Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e322c;
        }
    }
    ctx->pc = 0x3E3248u;
    // 0x3e3248: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x3e3248u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e324c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x3e324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3e3250: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x3e3250u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x3e3254: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x3e3254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3e3258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e325c: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3E325Cu;
    SET_GPR_U32(ctx, 31, 0x3E3264u);
    ctx->pc = 0x3E3260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E325Cu;
    // 0x3e3260: 0xae02015c  sw          $v0, 0x15C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3E325Cu, 0x3E3264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3264u;
label_3e3264:
    // 0x3e3264: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3e3264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x3e3268: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x3e3268u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x3e326c: 0x246316a8  addiu       $v1, $v1, 0x16A8
    ctx->pc = 0x3e326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5800));
    // 0x3e3270: 0x24e71758  addiu       $a3, $a3, 0x1758
    ctx->pc = 0x3e3270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5976));
    // 0x3e3274: 0xae100140  sw          $s0, 0x140($s0)
    ctx->pc = 0x3e3274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 16));
    // 0x3e3278: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3e3278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x3e327c: 0xae030138  sw          $v1, 0x138($s0)
    ctx->pc = 0x3e327cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 3));
    // 0x3e3280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3284: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x3e3284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x3e3288: 0x24a59c68  addiu       $a1, $a1, -0x6398
    ctx->pc = 0x3e3288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941800));
    // 0x3e328c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x3e328cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3e3290: 0xc0f73f2  jal         func_3DCFC8
    ctx->pc = 0x3E3290u;
    SET_GPR_U32(ctx, 31, 0x3E3298u);
    ctx->pc = 0x3E3294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3290u;
    // 0x3e3294: 0xae07013c  sw          $a3, 0x13C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCFC8u, 0x3E3290u, 0x3E3298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3298u;
label_3e3298:
    // 0x3e3298: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e3298u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e329c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x3e329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3e32a0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E32A0u;
    {
        const bool branch_taken_0x3e32a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E32A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E32A0u;
        // 0x3e32a4: 0x2862fffd  slti        $v0, $v1, -0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e32a0) {
            ctx->pc = 0x3E32F8u;
            goto label_3e32f8;
        }
    }
    ctx->pc = 0x3E32A8u;
    // 0x3e32a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E32A8u;
    {
        const bool branch_taken_0x3e32a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E32ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E32A8u;
        // 0x3e32ac: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e32a8) {
            ctx->pc = 0x3E32DCu;
            goto label_3e32dc;
        }
    }
    ctx->pc = 0x3E32B0u;
    // 0x3e32b0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3E32B0u;
    {
        const bool branch_taken_0x3e32b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E32B0u;
        // 0x3e32b4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e32b0) {
            ctx->pc = 0x3E3310u;
            goto label_3e3310;
        }
    }
    ctx->pc = 0x3E32B8u;
    // 0x3e32b8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3E32B8u;
    {
        const bool branch_taken_0x3e32b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E32BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E32B8u;
        // 0x3e32bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e32b8) {
            ctx->pc = 0x3E332Cu;
            goto label_3e332c;
        }
    }
    ctx->pc = 0x3E32C0u;
label_3e32c0:
    // 0x3e32c0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e32c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e32c4: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x3e32c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x3e32c8: 0x24a5e4e0  addiu       $a1, $a1, -0x1B20
    ctx->pc = 0x3e32c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960352));
    // 0x3e32cc: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3E32CCu;
    SET_GPR_U32(ctx, 31, 0x3E32D4u);
    ctx->pc = 0x3E32D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E32CCu;
    // 0x3e32d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3E32CCu, 0x3E32D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E32D4u;
label_3e32d4:
    // 0x3e32d4: 0x1000ffbb  b           . + 4 + (-0x45 << 2)
    ctx->pc = 0x3E32D4u;
    {
        const bool branch_taken_0x3e32d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E32D4u;
        // 0x3e32d8: 0x2e260300  sltiu       $a2, $s1, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)768) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e32d4) {
            ctx->pc = 0x3E31C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e31c4;
        }
    }
    ctx->pc = 0x3E32DCu;
label_3e32dc:
    // 0x3e32dc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3e32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3e32e0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E32E0u;
    {
        const bool branch_taken_0x3e32e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E32E0u;
        // 0x3e32e4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e32e0) {
            ctx->pc = 0x3E32FCu;
            goto label_3e32fc;
        }
    }
    ctx->pc = 0x3E32E8u;
    // 0x3e32e8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3E32E8u;
    {
        const bool branch_taken_0x3e32e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E32E8u;
        // 0x3e32ec: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e32e8) {
            ctx->pc = 0x3E3328u;
            goto label_3e3328;
        }
    }
    ctx->pc = 0x3E32F0u;
    // 0x3e32f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3E32F0u;
    {
        const bool branch_taken_0x3e32f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E32F0u;
        // 0x3e32f4: 0x8e020158  lw          $v0, 0x158($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e32f0) {
            ctx->pc = 0x3E3338u;
            goto label_3e3338;
        }
    }
    ctx->pc = 0x3E32F8u;
label_3e32f8:
    // 0x3e32f8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e32f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3e32fc:
    // 0x3e32fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e32fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3300: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E3300u;
    SET_GPR_U32(ctx, 31, 0x3E3308u);
    ctx->pc = 0x3E3304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3300u;
    // 0x3e3304: 0x24a5e528  addiu       $a1, $a1, -0x1AD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E3300u, 0x3E3308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3308u;
label_3e3308:
    // 0x3e3308: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3E3308u;
    {
        const bool branch_taken_0x3e3308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3308u;
        // 0x3e330c: 0x8e020158  lw          $v0, 0x158($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3308) {
            ctx->pc = 0x3E3338u;
            goto label_3e3338;
        }
    }
    ctx->pc = 0x3E3310u;
label_3e3310:
    // 0x3e3310: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e3310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e3314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3318: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E3318u;
    SET_GPR_U32(ctx, 31, 0x3E3320u);
    ctx->pc = 0x3E331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3318u;
    // 0x3e331c: 0x24a5e538  addiu       $a1, $a1, -0x1AC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E3318u, 0x3E3320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3320u;
label_3e3320:
    // 0x3e3320: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3320u;
    {
        const bool branch_taken_0x3e3320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3320u;
        // 0x3e3324: 0x8e020158  lw          $v0, 0x158($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3320) {
            ctx->pc = 0x3E3338u;
            goto label_3e3338;
        }
    }
    ctx->pc = 0x3E3328u;
label_3e3328:
    // 0x3e3328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e332c:
    // 0x3e332c: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E332Cu;
    SET_GPR_U32(ctx, 31, 0x3E3334u);
    ctx->pc = 0x3E3330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E332Cu;
    // 0x3e3330: 0x24a5e420  addiu       $a1, $a1, -0x1BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E332Cu, 0x3E3334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3334u;
label_3e3334:
    // 0x3e3334: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x3e3334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_3e3338:
    // 0x3e3338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e333c: 0x8e03015c  lw          $v1, 0x15C($s0)
    ctx->pc = 0x3e333cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x3e3340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e3340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3344: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x3e3344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x3e3348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e3348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e334c: 0xc0f94c4  jal         func_3E5310
    ctx->pc = 0x3E334Cu;
    SET_GPR_U32(ctx, 31, 0x3E3354u);
    ctx->pc = 0x3E3350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E334Cu;
    // 0x3e3350: 0xae030124  sw          $v1, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5310u, 0x3E334Cu, 0x3E3354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3354u;
label_3e3354:
    // 0x3e3354: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x3e3354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3e3358: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x3e3358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3e335c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x3e335cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3e3360: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x3e3360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3e3364: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x3e3364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3e3368: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3368u;
        // 0x3e336c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3370u;
}
