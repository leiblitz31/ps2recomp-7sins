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

// Function: sub_003565D8
// Address: 0x3565d8 - 0x356990
void sub_003565D8_0x3565d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003565D8_0x3565d8");
#endif

    switch (ctx->pc) {
        case 0x356680u: goto label_356680;
        case 0x3566e8u: goto label_3566e8;
        case 0x356728u: goto label_356728;
        case 0x356778u: goto label_356778;
        case 0x356814u: goto label_356814;
        case 0x356820u: goto label_356820;
        case 0x3568dcu: goto label_3568dc;
        default: break;
    }

    ctx->pc = 0x3565d8u;

    // 0x3565d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3565d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3565dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3565dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3565e0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3565e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3565e4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3565e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3565e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3565e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3565ec: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3565ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3565f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3565f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3565f4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3565f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3565f8: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x3565f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3565fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3565fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x356600: 0x2614003c  addiu       $s4, $s0, 0x3C
    ctx->pc = 0x356600u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x356604: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x356604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x356608: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x356608u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35660c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x35660cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x356610: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x356610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x356614: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x356614u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x356618: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x356618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x35661c: 0x8e32004c  lw          $s2, 0x4C($s1)
    ctx->pc = 0x35661cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x356620: 0x8e4400e0  lw          $a0, 0xE0($s2)
    ctx->pc = 0x356620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x356624: 0x1482002a  bne         $a0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x356624u;
    {
        const bool branch_taken_0x356624 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x356628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356624u;
        // 0x356628: 0x100b82d  daddu       $s7, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356624) {
            ctx->pc = 0x3566D0u;
            goto label_3566d0;
        }
    }
    ctx->pc = 0x35662Cu;
    // 0x35662c: 0x8e5600e4  lw          $s6, 0xE4($s2)
    ctx->pc = 0x35662cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x356630: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x356630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x356634: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x356634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x356638: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x356638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35663c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x35663Cu;
    {
        const bool branch_taken_0x35663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35663Cu;
        // 0x356640: 0xae4300e4  sw          $v1, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35663c) {
            ctx->pc = 0x356648u;
            goto label_356648;
        }
    }
    ctx->pc = 0x356644u;
    // 0x356644: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x356644u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
label_356648:
    // 0x356648: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x356648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x35664c: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x35664cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x356650: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x356650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x356654: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x356654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356658: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x356658u;
    {
        const bool branch_taken_0x356658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356658) {
            ctx->pc = 0x35665Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356658u;
            // 0x35665c: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356670u;
            goto label_356670;
        }
    }
    ctx->pc = 0x356660u;
    // 0x356660: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x356660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356664: 0x50440008  beql        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x356664u;
    {
        const bool branch_taken_0x356664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x356664) {
            ctx->pc = 0x356668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356664u;
            // 0x356668: 0x8e4200e4  lw          $v0, 0xE4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356688u;
            goto label_356688;
        }
    }
    ctx->pc = 0x35666Cu;
    // 0x35666c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x35666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_356670:
    // 0x356670: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x356670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356674: 0x8f84bd78  lw          $a0, -0x4288($gp)
    ctx->pc = 0x356674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x356678: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x356678u;
    SET_GPR_U32(ctx, 31, 0x356680u);
    ctx->pc = 0x35667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356678u;
    // 0x35667c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x356678u, 0x356680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356680u;
label_356680:
    // 0x356680: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x356680u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356684: 0x8e4200e4  lw          $v0, 0xE4($s2)
    ctx->pc = 0x356684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_356688:
    // 0x356688: 0x26470138  addiu       $a3, $s2, 0x138
    ctx->pc = 0x356688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 312));
    // 0x35668c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35668cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356690: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x356690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x356694: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x356694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x356698: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x356698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35669c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x35669cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3566a0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3566A0u;
    {
        const bool branch_taken_0x3566a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3566A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3566A0u;
        // 0x3566a4: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3566a0) {
            ctx->pc = 0x3566B4u;
            goto label_3566b4;
        }
    }
    ctx->pc = 0x3566A8u;
    // 0x3566a8: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x3566a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3566ac: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x3566acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x3566b0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x3566b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_3566b4:
    // 0x3566b4: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x3566b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x3566b8: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x3566b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3566bc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3566BCu;
    {
        const bool branch_taken_0x3566bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3566C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3566BCu;
        // 0x3566c0: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3566bc) {
            ctx->pc = 0x3566D0u;
            goto label_3566d0;
        }
    }
    ctx->pc = 0x3566C4u;
    // 0x3566c4: 0x24620138  addiu       $v0, $v1, 0x138
    ctx->pc = 0x3566c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 312));
    // 0x3566c8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3566c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3566cc: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x3566ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_3566d0:
    // 0x3566d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3566d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3566d4: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x3566d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x3566d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3566D8u;
    {
        const bool branch_taken_0x3566d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3566DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3566D8u;
        // 0x3566dc: 0x8e5600e4  lw          $s6, 0xE4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3566d8) {
            ctx->pc = 0x3566E8u;
            goto label_3566e8;
        }
    }
    ctx->pc = 0x3566E0u;
    // 0x3566e0: 0xc0d4426  jal         func_351098
    ctx->pc = 0x3566E0u;
    SET_GPR_U32(ctx, 31, 0x3566E8u);
    ctx->pc = 0x3566E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3566E0u;
    // 0x3566e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351098u, 0x3566E0u, 0x3566E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3566E8u;
label_3566e8:
    // 0x3566e8: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x3566e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x3566ec: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x3566ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x3566f0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3566f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566f4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x3566f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3566f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3566f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3566fc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3566FCu;
    {
        const bool branch_taken_0x3566fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x356700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3566FCu;
        // 0x356700: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3566fc) {
            ctx->pc = 0x35671Cu;
            goto label_35671c;
        }
    }
    ctx->pc = 0x356704u;
    // 0x356704: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x356704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35670c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35670Cu;
    {
        const bool branch_taken_0x35670c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x356710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35670Cu;
        // 0x356710: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35670c) {
            ctx->pc = 0x356720u;
            goto label_356720;
        }
    }
    ctx->pc = 0x356714u;
    // 0x356714: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x356714u;
    {
        const bool branch_taken_0x356714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356714u;
        // 0x356718: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356714) {
            ctx->pc = 0x356728u;
            goto label_356728;
        }
    }
    ctx->pc = 0x35671Cu;
label_35671c:
    // 0x35671c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x35671cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_356720:
    // 0x356720: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x356720u;
    SET_GPR_U32(ctx, 31, 0x356728u);
    ctx->pc = 0x356724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356720u;
    // 0x356724: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x356720u, 0x356728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356728u;
label_356728:
    // 0x356728: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x356728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35672c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x35672cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x356730: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x356730u;
    {
        const bool branch_taken_0x356730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x356734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356730u;
        // 0x356734: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356730) {
            ctx->pc = 0x35676Cu;
            goto label_35676c;
        }
    }
    ctx->pc = 0x356738u;
    // 0x356738: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x356738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x35673c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x35673cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x356740: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x356740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x356744: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x356744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x356748: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x356748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x35674c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x35674cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x356750: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x356750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x356754: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x356754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x356758: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x356758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x35675c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x35675cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x356760: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x356760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x356764: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x356764u;
    {
        const bool branch_taken_0x356764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356764u;
        // 0x356768: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356764) {
            ctx->pc = 0x35695Cu;
            goto label_35695c;
        }
    }
    ctx->pc = 0x35676Cu;
label_35676c:
    // 0x35676c: 0x8c43e880  lw          $v1, -0x1780($v0)
    ctx->pc = 0x35676cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
    // 0x356770: 0xc106784  jal         func_419E10
    ctx->pc = 0x356770u;
    SET_GPR_U32(ctx, 31, 0x356778u);
    ctx->pc = 0x356774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356770u;
    // 0x356774: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x356770u, 0x356778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356778u;
label_356778:
    // 0x356778: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x356778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x35677c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35677cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356780: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x356780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x356784: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x356784u;
    {
        const bool branch_taken_0x356784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356784u;
        // 0x356788: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356784) {
            ctx->pc = 0x3567C4u;
            goto label_3567c4;
        }
    }
    ctx->pc = 0x35678Cu;
    // 0x35678c: 0x6a2200b7  ldl         $v0, 0xB7($s1)
    ctx->pc = 0x35678cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x356790: 0x6e2200b0  ldr         $v0, 0xB0($s1)
    ctx->pc = 0x356790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x356794: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x356794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x356798: 0xb2620007  sdl         $v0, 0x7($s3)
    ctx->pc = 0x356798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35679c: 0xb6620000  sdr         $v0, 0x0($s3)
    ctx->pc = 0x35679cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3567a0: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x3567a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x3567a4: 0x6a2200c7  ldl         $v0, 0xC7($s1)
    ctx->pc = 0x3567a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3567a8: 0x6e2200c0  ldr         $v0, 0xC0($s1)
    ctx->pc = 0x3567a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3567ac: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x3567acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x3567b0: 0xb2820007  sdl         $v0, 0x7($s4)
    ctx->pc = 0x3567b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3567b4: 0xb6820000  sdr         $v0, 0x0($s4)
    ctx->pc = 0x3567b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3567b8: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3567b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3567bc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x3567BCu;
    {
        const bool branch_taken_0x3567bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3567bc) {
            ctx->pc = 0x3568D4u;
            goto label_3568d4;
        }
    }
    ctx->pc = 0x3567C4u;
label_3567c4:
    // 0x3567c4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3567c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3567c8: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x3567C8u;
    {
        const bool branch_taken_0x3567c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3567c8) {
            ctx->pc = 0x3567CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3567C8u;
            // 0x3567cc: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x35689Cu;
            goto label_35689c;
        }
    }
    ctx->pc = 0x3567D0u;
    // 0x3567d0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3567d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3567d4: 0xc62c0078  lwc1        $f12, 0x78($s1)
    ctx->pc = 0x3567d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3567d8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3567d8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3567dc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3567dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3567e0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3567e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3567e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3567e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3567e8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3567e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3567ec: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3567ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3567f0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3567f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3567f4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3567f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3567f8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3567f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3567fc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3567fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x356800: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x356800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356804: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x356804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x356808: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x356808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35680c: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x35680Cu;
    SET_GPR_U32(ctx, 31, 0x356814u);
    ctx->pc = 0x356810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35680Cu;
    // 0x356810: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x35680Cu, 0x356814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356814u;
label_356814:
    // 0x356814: 0xc62c0078  lwc1        $f12, 0x78($s1)
    ctx->pc = 0x356814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x356818: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x356818u;
    SET_GPR_U32(ctx, 31, 0x356820u);
    ctx->pc = 0x35681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356818u;
    // 0x35681c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x356818u, 0x356820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356820u;
label_356820:
    // 0x356820: 0x4600a0c7  neg.s       $f3, $f20
    ctx->pc = 0x356820u;
    ctx->f[3] = FPU_NEG_S(ctx->f[20]);
    // 0x356824: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x356824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x356828: 0xc7a90014  lwc1        $f9, 0x14($sp)
    ctx->pc = 0x356828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x35682c: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x35682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x356830: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x356830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356834: 0x46061b02  mul.s       $f12, $f3, $f6
    ctx->pc = 0x356834u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x356838: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x356838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35683c: 0x46091ac2  mul.s       $f11, $f3, $f9
    ctx->pc = 0x35683cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x356840: 0xc7aa0004  lwc1        $f10, 0x4($sp)
    ctx->pc = 0x356840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x356844: 0x46040202  mul.s       $f8, $f0, $f4
    ctx->pc = 0x356844u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x356848: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x356848u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35684c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x35684cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x356850: 0x460a01c2  mul.s       $f7, $f0, $f10
    ctx->pc = 0x356850u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x356854: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x356854u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x356858: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x356858u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x35685c: 0x4604a102  mul.s       $f4, $f20, $f4
    ctx->pc = 0x35685cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x356860: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x356860u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x356864: 0x460aa502  mul.s       $f20, $f20, $f10
    ctx->pc = 0x356864u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[10]);
    // 0x356868: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x356868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x35686c: 0x460c4200  add.s       $f8, $f8, $f12
    ctx->pc = 0x35686cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[12]);
    // 0x356870: 0x460b39c0  add.s       $f7, $f7, $f11
    ctx->pc = 0x356870u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[11]);
    // 0x356874: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x356874u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x356878: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x356878u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x35687c: 0xe6680000  swc1        $f8, 0x0($s3)
    ctx->pc = 0x35687cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x356880: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x356880u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x356884: 0xe6670004  swc1        $f7, 0x4($s3)
    ctx->pc = 0x356884u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x356888: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x356888u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x35688c: 0xe6650008  swc1        $f5, 0x8($s3)
    ctx->pc = 0x35688cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x356890: 0xe6840000  swc1        $f4, 0x0($s4)
    ctx->pc = 0x356890u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x356894: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x356894u;
    {
        const bool branch_taken_0x356894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356894u;
        // 0x356898: 0xe6940004  swc1        $f20, 0x4($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x356894) {
            ctx->pc = 0x3568D0u;
            goto label_3568d0;
        }
    }
    ctx->pc = 0x35689Cu;
label_35689c:
    // 0x35689c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35689cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3568a0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x3568a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x3568a4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3568a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3568a8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3568a8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3568ac: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x3568acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x3568b0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3568b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3568b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3568b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3568b8: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x3568b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x3568bc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x3568bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3568c0: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x3568c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x3568c4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x3568c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3568c8: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x3568c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x3568cc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3568ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3568d0:
    // 0x3568d0: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x3568d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_3568d4:
    // 0x3568d4: 0xc10a450  jal         func_429140
    ctx->pc = 0x3568D4u;
    SET_GPR_U32(ctx, 31, 0x3568DCu);
    ctx->pc = 0x429140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429140u, 0x3568D4u, 0x3568DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3568DCu;
label_3568dc:
    // 0x3568dc: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x3568dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3568e0: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x3568e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x3568e4: 0x2c44818  mult        $t1, $s6, $a0
    ctx->pc = 0x3568e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3568e8: 0x3c02ffe7  lui         $v0, 0xFFE7
    ctx->pc = 0x3568e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65511 << 16));
    // 0x3568ec: 0x3463dfbd  ori         $v1, $v1, 0xDFBD
    ctx->pc = 0x3568ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57277);
    // 0x3568f0: 0x3442fe7f  ori         $v0, $v0, 0xFE7F
    ctx->pc = 0x3568f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65151);
    // 0x3568f4: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x3568f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x3568f8: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x3568f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
    // 0x3568fc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3568fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x356900: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x356900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x356904: 0x2492021  addu        $a0, $s2, $t1
    ctx->pc = 0x356904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x356908: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x356908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35690c: 0x8c860140  lw          $a2, 0x140($a0)
    ctx->pc = 0x35690cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x356910: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x356910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x356914: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x356914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x356918: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x356918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x35691c: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x35691cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x356920: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x356920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
    // 0x356924: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x356924u;
    {
        const bool branch_taken_0x356924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x356928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356924u;
        // 0x356928: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356924) {
            ctx->pc = 0x356940u;
            goto label_356940;
        }
    }
    ctx->pc = 0x35692Cu;
    // 0x35692c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35692cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356930: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x356930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x356934: 0x8c440154  lw          $a0, 0x154($v0)
    ctx->pc = 0x356934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x356938: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x356938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x35693c: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x35693cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_356940:
    // 0x356940: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x356940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x356944: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x356944u;
    {
        const bool branch_taken_0x356944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356944u;
        // 0x356948: 0x2491021  addu        $v0, $s2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356944) {
            ctx->pc = 0x35695Cu;
            goto label_35695c;
        }
    }
    ctx->pc = 0x35694Cu;
    // 0x35694c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x35694cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x356950: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x356950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x356954: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x356954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x356958: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x356958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_35695c:
    // 0x35695c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x35695cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x356960: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x356960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x356964: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x356964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x356968: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x356968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35696c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x35696cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x356970: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x356970u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x356974: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x356974u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x356978: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x356978u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35697c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35697cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356980: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x356980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x356984: 0x3e00008  jr          $ra
    ctx->pc = 0x356984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356984u;
        // 0x356988: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35698Cu;
    // 0x35698c: 0x0  nop
    ctx->pc = 0x35698cu;
    // NOP
    ctx->pc = 0x356990u;
}
