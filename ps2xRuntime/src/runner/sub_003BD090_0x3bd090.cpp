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

// Function: sub_003BD090
// Address: 0x3bd090 - 0x3bd1e0
void sub_003BD090_0x3bd090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD090_0x3bd090");
#endif

    switch (ctx->pc) {
        case 0x3bd090u: goto label_3bd090;
        case 0x3bd094u: goto label_3bd094;
        case 0x3bd098u: goto label_3bd098;
        case 0x3bd09cu: goto label_3bd09c;
        case 0x3bd0a0u: goto label_3bd0a0;
        case 0x3bd0a4u: goto label_3bd0a4;
        case 0x3bd0a8u: goto label_3bd0a8;
        case 0x3bd0acu: goto label_3bd0ac;
        case 0x3bd0b0u: goto label_3bd0b0;
        case 0x3bd0b4u: goto label_3bd0b4;
        case 0x3bd0b8u: goto label_3bd0b8;
        case 0x3bd0bcu: goto label_3bd0bc;
        case 0x3bd0c0u: goto label_3bd0c0;
        case 0x3bd0c4u: goto label_3bd0c4;
        case 0x3bd0c8u: goto label_3bd0c8;
        case 0x3bd0ccu: goto label_3bd0cc;
        case 0x3bd0d0u: goto label_3bd0d0;
        case 0x3bd0d4u: goto label_3bd0d4;
        case 0x3bd0d8u: goto label_3bd0d8;
        case 0x3bd0dcu: goto label_3bd0dc;
        case 0x3bd0e0u: goto label_3bd0e0;
        case 0x3bd0e4u: goto label_3bd0e4;
        case 0x3bd0e8u: goto label_3bd0e8;
        case 0x3bd0ecu: goto label_3bd0ec;
        case 0x3bd0f0u: goto label_3bd0f0;
        case 0x3bd0f4u: goto label_3bd0f4;
        case 0x3bd0f8u: goto label_3bd0f8;
        case 0x3bd0fcu: goto label_3bd0fc;
        case 0x3bd100u: goto label_3bd100;
        case 0x3bd104u: goto label_3bd104;
        case 0x3bd108u: goto label_3bd108;
        case 0x3bd10cu: goto label_3bd10c;
        case 0x3bd110u: goto label_3bd110;
        case 0x3bd114u: goto label_3bd114;
        case 0x3bd118u: goto label_3bd118;
        case 0x3bd11cu: goto label_3bd11c;
        case 0x3bd120u: goto label_3bd120;
        case 0x3bd124u: goto label_3bd124;
        case 0x3bd128u: goto label_3bd128;
        case 0x3bd12cu: goto label_3bd12c;
        case 0x3bd130u: goto label_3bd130;
        case 0x3bd134u: goto label_3bd134;
        case 0x3bd138u: goto label_3bd138;
        case 0x3bd13cu: goto label_3bd13c;
        case 0x3bd140u: goto label_3bd140;
        case 0x3bd144u: goto label_3bd144;
        case 0x3bd148u: goto label_3bd148;
        case 0x3bd14cu: goto label_3bd14c;
        case 0x3bd150u: goto label_3bd150;
        case 0x3bd154u: goto label_3bd154;
        case 0x3bd158u: goto label_3bd158;
        case 0x3bd15cu: goto label_3bd15c;
        case 0x3bd160u: goto label_3bd160;
        case 0x3bd164u: goto label_3bd164;
        case 0x3bd168u: goto label_3bd168;
        case 0x3bd16cu: goto label_3bd16c;
        case 0x3bd170u: goto label_3bd170;
        case 0x3bd174u: goto label_3bd174;
        case 0x3bd178u: goto label_3bd178;
        case 0x3bd17cu: goto label_3bd17c;
        case 0x3bd180u: goto label_3bd180;
        case 0x3bd184u: goto label_3bd184;
        case 0x3bd188u: goto label_3bd188;
        case 0x3bd18cu: goto label_3bd18c;
        case 0x3bd190u: goto label_3bd190;
        case 0x3bd194u: goto label_3bd194;
        case 0x3bd198u: goto label_3bd198;
        case 0x3bd19cu: goto label_3bd19c;
        case 0x3bd1a0u: goto label_3bd1a0;
        case 0x3bd1a4u: goto label_3bd1a4;
        case 0x3bd1a8u: goto label_3bd1a8;
        case 0x3bd1acu: goto label_3bd1ac;
        case 0x3bd1b0u: goto label_3bd1b0;
        case 0x3bd1b4u: goto label_3bd1b4;
        case 0x3bd1b8u: goto label_3bd1b8;
        case 0x3bd1bcu: goto label_3bd1bc;
        case 0x3bd1c0u: goto label_3bd1c0;
        case 0x3bd1c4u: goto label_3bd1c4;
        case 0x3bd1c8u: goto label_3bd1c8;
        case 0x3bd1ccu: goto label_3bd1cc;
        case 0x3bd1d0u: goto label_3bd1d0;
        case 0x3bd1d4u: goto label_3bd1d4;
        case 0x3bd1d8u: goto label_3bd1d8;
        case 0x3bd1dcu: goto label_3bd1dc;
        default: break;
    }

    ctx->pc = 0x3bd090u;

label_3bd090:
    // 0x3bd090: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3bd090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3bd094:
    // 0x3bd094: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3bd094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3bd098:
    // 0x3bd098: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3bd098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3bd09c:
    // 0x3bd09c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3bd09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bd0a0:
    // 0x3bd0a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bd0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3bd0a4:
    // 0x3bd0a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bd0a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bd0a8:
    // 0x3bd0a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3bd0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3bd0ac:
    // 0x3bd0ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3bd0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bd0b0:
    // 0x3bd0b0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3bd0b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3bd0b4:
    // 0x3bd0b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3bd0b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bd0b8:
    // 0x3bd0b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bd0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bd0bc:
    // 0x3bd0bc: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3bd0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bd0c0:
    // 0x3bd0c0: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
label_3bd0c4:
    if (ctx->pc == 0x3BD0C4u) {
        ctx->pc = 0x3BD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD0C0u;
        // 0x3bd0c4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD0C8u;
        goto label_3bd0c8;
    }
    ctx->pc = 0x3BD0C0u;
    {
        const bool branch_taken_0x3bd0c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD0C0u;
        // 0x3bd0c4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd0c0) {
            ctx->pc = 0x3BD11Cu;
            goto label_3bd11c;
        }
    }
    ctx->pc = 0x3BD0C8u;
label_3bd0c8:
    // 0x3bd0c8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3bd0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bd0cc:
    // 0x3bd0cc: 0x0  nop
    ctx->pc = 0x3bd0ccu;
    // NOP
label_3bd0d0:
    // 0x3bd0d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3bd0d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3bd0d4:
    // 0x3bd0d4: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x3bd0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_3bd0d8:
    // 0x3bd0d8: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x3bd0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3bd0dc:
    // 0x3bd0dc: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x3bd0dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3bd0e0:
    // 0x3bd0e0: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x3bd0e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3bd0e4:
    // 0x3bd0e4: 0x8e2b0040  lw          $t3, 0x40($s1)
    ctx->pc = 0x3bd0e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_3bd0e8:
    // 0x3bd0e8: 0x2063018  mult        $a2, $s0, $a2
    ctx->pc = 0x3bd0e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3bd0ec:
    // 0x3bd0ec: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x3bd0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_3bd0f0:
    // 0x3bd0f0: 0x24a5004c  addiu       $a1, $a1, 0x4C
    ctx->pc = 0x3bd0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
label_3bd0f4:
    // 0x3bd0f4: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3bd0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_3bd0f8:
    // 0x3bd0f8: 0x24c6004c  addiu       $a2, $a2, 0x4C
    ctx->pc = 0x3bd0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 76));
label_3bd0fc:
    // 0x3bd0fc: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x3bd0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_3bd100:
    // 0x3bd100: 0x160f809  jalr        $t3
label_3bd104:
    if (ctx->pc == 0x3BD104u) {
        ctx->pc = 0x3BD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD100u;
        // 0x3bd104: 0x2463021  addu        $a2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD108u;
        goto label_3bd108;
    }
    ctx->pc = 0x3BD100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 11);
        SET_GPR_U32(ctx, 31, 0x3BD108u);
        ctx->pc = 0x3BD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD100u;
        // 0x3bd104: 0x2463021  addu        $a2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD100u, 0x3BD108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BD108u;
label_3bd108:
    // 0x3bd108: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3bd108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3bd10c:
    // 0x3bd10c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3bd10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bd110:
    // 0x3bd110: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3bd110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3bd114:
    // 0x3bd114: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
label_3bd118:
    if (ctx->pc == 0x3BD118u) {
        ctx->pc = 0x3BD118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD114u;
        // 0x3bd118: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD11Cu;
        goto label_3bd11c;
    }
    ctx->pc = 0x3BD114u;
    {
        const bool branch_taken_0x3bd114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bd114) {
            ctx->pc = 0x3BD118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BD114u;
            // 0x3bd118: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bd0d0;
        }
    }
    ctx->pc = 0x3BD11Cu;
label_3bd11c:
    // 0x3bd11c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3bd11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bd120:
    // 0x3bd120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bd120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bd124:
    // 0x3bd124: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3bd124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bd128:
    // 0x3bd128: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bd128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bd12c:
    // 0x3bd12c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3bd12cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bd130:
    // 0x3bd130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bd130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bd134:
    // 0x3bd134: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3bd134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3bd138:
    // 0x3bd138: 0x3e00008  jr          $ra
label_3bd13c:
    if (ctx->pc == 0x3BD13Cu) {
        ctx->pc = 0x3BD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD138u;
        // 0x3bd13c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD140u;
        goto label_3bd140;
    }
    ctx->pc = 0x3BD138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD138u;
        // 0x3bd13c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD140u;
label_3bd140:
    // 0x3bd140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bd140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3bd144:
    // 0x3bd144: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3bd144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3bd148:
    // 0x3bd148: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3bd148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3bd14c:
    // 0x3bd14c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3bd14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bd150:
    // 0x3bd150: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bd150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3bd154:
    // 0x3bd154: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bd154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bd158:
    // 0x3bd158: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3bd158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3bd15c:
    // 0x3bd15c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3bd15cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bd160:
    // 0x3bd160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bd160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bd164:
    // 0x3bd164: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3bd164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bd168:
    // 0x3bd168: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_3bd16c:
    if (ctx->pc == 0x3BD16Cu) {
        ctx->pc = 0x3BD16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD168u;
        // 0x3bd16c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD170u;
        goto label_3bd170;
    }
    ctx->pc = 0x3BD168u;
    {
        const bool branch_taken_0x3bd168 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BD16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD168u;
        // 0x3bd16c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd168) {
            ctx->pc = 0x3BD1C0u;
            goto label_3bd1c0;
        }
    }
    ctx->pc = 0x3BD170u;
label_3bd170:
    // 0x3bd170: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3bd170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bd174:
    // 0x3bd174: 0x0  nop
    ctx->pc = 0x3bd174u;
    // NOP
label_3bd178:
    // 0x3bd178: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x3bd178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_3bd17c:
    // 0x3bd17c: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x3bd17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3bd180:
    // 0x3bd180: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x3bd180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3bd184:
    // 0x3bd184: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x3bd184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3bd188:
    // 0x3bd188: 0x8e2b0048  lw          $t3, 0x48($s1)
    ctx->pc = 0x3bd188u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_3bd18c:
    // 0x3bd18c: 0x2063018  mult        $a2, $s0, $a2
    ctx->pc = 0x3bd18cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3bd190:
    // 0x3bd190: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x3bd190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_3bd194:
    // 0x3bd194: 0x24a5004c  addiu       $a1, $a1, 0x4C
    ctx->pc = 0x3bd194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
label_3bd198:
    // 0x3bd198: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3bd198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_3bd19c:
    // 0x3bd19c: 0x24c6004c  addiu       $a2, $a2, 0x4C
    ctx->pc = 0x3bd19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 76));
label_3bd1a0:
    // 0x3bd1a0: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x3bd1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_3bd1a4:
    // 0x3bd1a4: 0x160f809  jalr        $t3
label_3bd1a8:
    if (ctx->pc == 0x3BD1A8u) {
        ctx->pc = 0x3BD1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD1A4u;
        // 0x3bd1a8: 0x2463021  addu        $a2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD1ACu;
        goto label_3bd1ac;
    }
    ctx->pc = 0x3BD1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 11);
        SET_GPR_U32(ctx, 31, 0x3BD1ACu);
        ctx->pc = 0x3BD1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD1A4u;
        // 0x3bd1a8: 0x2463021  addu        $a2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD1A4u, 0x3BD1ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BD1ACu;
label_3bd1ac:
    // 0x3bd1ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3bd1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3bd1b0:
    // 0x3bd1b0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3bd1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bd1b4:
    // 0x3bd1b4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3bd1b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3bd1b8:
    // 0x3bd1b8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_3bd1bc:
    if (ctx->pc == 0x3BD1BCu) {
        ctx->pc = 0x3BD1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD1B8u;
        // 0x3bd1bc: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD1C0u;
        goto label_3bd1c0;
    }
    ctx->pc = 0x3BD1B8u;
    {
        const bool branch_taken_0x3bd1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bd1b8) {
            ctx->pc = 0x3BD1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BD1B8u;
            // 0x3bd1bc: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bd178;
        }
    }
    ctx->pc = 0x3BD1C0u;
label_3bd1c0:
    // 0x3bd1c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3bd1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bd1c4:
    // 0x3bd1c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bd1c8:
    // 0x3bd1c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3bd1c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bd1cc:
    // 0x3bd1cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bd1ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bd1d0:
    // 0x3bd1d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3bd1d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bd1d4:
    // 0x3bd1d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bd1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bd1d8:
    // 0x3bd1d8: 0x3e00008  jr          $ra
label_3bd1dc:
    if (ctx->pc == 0x3BD1DCu) {
        ctx->pc = 0x3BD1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD1D8u;
        // 0x3bd1dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD1E0u;
        goto label_fallthrough_0x3bd1d8;
    }
    ctx->pc = 0x3BD1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD1D8u;
        // 0x3bd1dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bd1d8:
    ctx->pc = 0x3BD1E0u;
}
