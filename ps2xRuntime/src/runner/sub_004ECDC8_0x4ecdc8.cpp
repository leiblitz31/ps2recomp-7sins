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

// Function: sub_004ECDC8
// Address: 0x4ecdc8 - 0x4ece60
void sub_004ECDC8_0x4ecdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECDC8_0x4ecdc8");
#endif

    switch (ctx->pc) {
        case 0x4ecdc8u: goto label_4ecdc8;
        case 0x4ecdccu: goto label_4ecdcc;
        case 0x4ecdd0u: goto label_4ecdd0;
        case 0x4ecdd4u: goto label_4ecdd4;
        case 0x4ecdd8u: goto label_4ecdd8;
        case 0x4ecddcu: goto label_4ecddc;
        case 0x4ecde0u: goto label_4ecde0;
        case 0x4ecde4u: goto label_4ecde4;
        case 0x4ecde8u: goto label_4ecde8;
        case 0x4ecdecu: goto label_4ecdec;
        case 0x4ecdf0u: goto label_4ecdf0;
        case 0x4ecdf4u: goto label_4ecdf4;
        case 0x4ecdf8u: goto label_4ecdf8;
        case 0x4ecdfcu: goto label_4ecdfc;
        case 0x4ece00u: goto label_4ece00;
        case 0x4ece04u: goto label_4ece04;
        case 0x4ece08u: goto label_4ece08;
        case 0x4ece0cu: goto label_4ece0c;
        case 0x4ece10u: goto label_4ece10;
        case 0x4ece14u: goto label_4ece14;
        case 0x4ece18u: goto label_4ece18;
        case 0x4ece1cu: goto label_4ece1c;
        case 0x4ece20u: goto label_4ece20;
        case 0x4ece24u: goto label_4ece24;
        case 0x4ece28u: goto label_4ece28;
        case 0x4ece2cu: goto label_4ece2c;
        case 0x4ece30u: goto label_4ece30;
        case 0x4ece34u: goto label_4ece34;
        case 0x4ece38u: goto label_4ece38;
        case 0x4ece3cu: goto label_4ece3c;
        case 0x4ece40u: goto label_4ece40;
        case 0x4ece44u: goto label_4ece44;
        case 0x4ece48u: goto label_4ece48;
        case 0x4ece4cu: goto label_4ece4c;
        case 0x4ece50u: goto label_4ece50;
        case 0x4ece54u: goto label_4ece54;
        case 0x4ece58u: goto label_4ece58;
        case 0x4ece5cu: goto label_4ece5c;
        default: break;
    }

    ctx->pc = 0x4ecdc8u;

label_4ecdc8:
    // 0x4ecdc8: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4ecdcc:
    if (ctx->pc == 0x4ECDCCu) {
        ctx->pc = 0x4ECDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECDC8u;
        // 0x4ecdcc: 0x64616f6c  daddiu      $at, $v1, 0x6F6C (Delay Slot)
        SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28524);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECDD0u;
        goto label_4ecdd0;
    }
    ctx->pc = 0x4ECDC8u;
    {
        const bool branch_taken_0x4ecdc8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ecdc8) {
            ctx->pc = 0x4ECDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECDC8u;
            // 0x4ecdcc: 0x64616f6c  daddiu      $at, $v1, 0x6F6C (Delay Slot)
            SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28524);
            ctx->in_delay_slot = false;
            ctx->pc = 0x500E64u;
            return;
        }
    }
    ctx->pc = 0x4ECDD0u;
label_4ecdd0:
    // 0x4ecdd0: 0x676e69  .word       0x00676E69                   # mtsa        $v1 # 00076E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ecdd0u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4ecdd4:
    // 0x4ecdd4: 0x0  nop
    ctx->pc = 0x4ecdd4u;
    // NOP
label_4ecdd8:
    // 0x4ecdd8: 0x73697263  .word       0x73697263                   # INVALID     $k1, $t1, 0x7263 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ecdd8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4ECDD8 raw=0x73697263");
label_4ecddc:
    // 0x4ecddc: 0x6e757265  ldr         $s5, 0x7265($s3)
    ctx->pc = 0x4ecddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_4ecde0:
    // 0x4ecde0: 0x0  nop
    ctx->pc = 0x4ecde0u;
    // NOP
label_4ecde4:
    // 0x4ecde4: 0x0  nop
    ctx->pc = 0x4ecde4u;
    // NOP
label_4ecde8:
    // 0x4ecde8: 0x6b6c6177  ldl         $t4, 0x6177($k1)
    ctx->pc = 0x4ecde8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24951); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_4ecdec:
    // 0x4ecdec: 0x67617473  daddiu      $at, $k1, 0x7473
    ctx->pc = 0x4ecdecu;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29811);
label_4ecdf0:
    // 0x4ecdf0: 0x726567  .word       0x00726567                   # nor         $t4, $v1, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecdf0u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 18)));
label_4ecdf4:
    // 0x4ecdf4: 0x0  nop
    ctx->pc = 0x4ecdf4u;
    // NOP
label_4ecdf8:
    // 0x4ecdf8: 0x0  nop
    ctx->pc = 0x4ecdf8u;
    // NOP
label_4ecdfc:
    // 0x4ecdfc: 0x0  nop
    ctx->pc = 0x4ecdfcu;
    // NOP
label_4ece00:
    // 0x4ece00: 0x4ecdd8  .word       0x004ECDD8                   # mult        $t9, $v0, $t6 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ece00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_4ece04:
    // 0x4ece04: 0x4ecdd8  .word       0x004ECDD8                   # mult        $t9, $v0, $t6 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ece04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_4ece08:
    // 0x4ece08: 0x4ecdd8  .word       0x004ECDD8                   # mult        $t9, $v0, $t6 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ece08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_4ece0c:
    // 0x4ece0c: 0x4ecde8  .word       0x004ECDE8                   # mfsa        $t9 # 004E05C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ece0cu;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_4ece10:
    // 0x4ece10: 0x4b4c4157  vminiw.xz   $vf5, $vf8, $vf12w
    ctx->pc = 0x4ece10u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_4ece14:
    // 0x4ece14: 0x53495243  beql        $k0, $t1, . + 4 + (0x5243 << 2)
label_4ece18:
    if (ctx->pc == 0x4ECE18u) {
        ctx->pc = 0x4ECE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECE14u;
        // 0x4ece18: 0x565349  .word       0x00565349                   # jalr        $t2, $v0 # 00160340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $10, $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECE1Cu;
        goto label_4ece1c;
    }
    ctx->pc = 0x4ECE14u;
    {
        const bool branch_taken_0x4ece14 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 9));
        if (branch_taken_0x4ece14) {
            ctx->pc = 0x4ECE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECE14u;
            // 0x4ece18: 0x565349  .word       0x00565349                   # jalr        $t2, $v0 # 00160340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            // JALR $10, $2 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x501724u;
            return;
        }
    }
    ctx->pc = 0x4ECE1Cu;
label_4ece1c:
    // 0x4ece1c: 0x0  nop
    ctx->pc = 0x4ece1cu;
    // NOP
label_4ece20:
    // 0x4ece20: 0x4b4c4157  vminiw.xz   $vf5, $vf8, $vf12w
    ctx->pc = 0x4ece20u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_4ece24:
    // 0x4ece24: 0x53495243  beql        $k0, $t1, . + 4 + (0x5243 << 2)
label_4ece28:
    if (ctx->pc == 0x4ECE28u) {
        ctx->pc = 0x4ECE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECE24u;
        // 0x4ece28: 0x535349  .word       0x00535349                   # jalr        $t2, $v0 # 00130340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $10, $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECE2Cu;
        goto label_4ece2c;
    }
    ctx->pc = 0x4ECE24u;
    {
        const bool branch_taken_0x4ece24 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 9));
        if (branch_taken_0x4ece24) {
            ctx->pc = 0x4ECE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECE24u;
            // 0x4ece28: 0x535349  .word       0x00535349                   # jalr        $t2, $v0 # 00130340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            // JALR $10, $2 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x501734u;
            return;
        }
    }
    ctx->pc = 0x4ECE2Cu;
label_4ece2c:
    // 0x4ece2c: 0x0  nop
    ctx->pc = 0x4ece2cu;
    // NOP
label_4ece30:
    // 0x4ece30: 0x4b4c4157  vminiw.xz   $vf5, $vf8, $vf12w
    ctx->pc = 0x4ece30u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_4ece34:
    // 0x4ece34: 0x53495243  beql        $k0, $t1, . + 4 + (0x5243 << 2)
label_4ece38:
    if (ctx->pc == 0x4ECE38u) {
        ctx->pc = 0x4ECE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECE34u;
        // 0x4ece38: 0x465349  .word       0x00465349                   # jalr        $t2, $v0 # 00060340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $10, $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECE3Cu;
        goto label_4ece3c;
    }
    ctx->pc = 0x4ECE34u;
    {
        const bool branch_taken_0x4ece34 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 9));
        if (branch_taken_0x4ece34) {
            ctx->pc = 0x4ECE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECE34u;
            // 0x4ece38: 0x465349  .word       0x00465349                   # jalr        $t2, $v0 # 00060340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            // JALR $10, $2 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x501744u;
            return;
        }
    }
    ctx->pc = 0x4ECE3Cu;
label_4ece3c:
    // 0x4ece3c: 0x0  nop
    ctx->pc = 0x4ece3cu;
    // NOP
label_4ece40:
    // 0x4ece40: 0x4b4c4157  vminiw.xz   $vf5, $vf8, $vf12w
    ctx->pc = 0x4ece40u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_4ece44:
    // 0x4ece44: 0x4e555244  .word       0x4E555244                   # INVALID     $s2, $s5, 0x5244 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ece44u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4ECE44 raw=0x4E555244");
label_4ece48:
    // 0x4ece48: 0x4b  .word       0x0000004B                   # movn        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ece48u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_4ece4c:
    // 0x4ece4c: 0x0  nop
    ctx->pc = 0x4ece4cu;
    // NOP
label_4ece50:
    // 0x4ece50: 0x4ece10  .word       0x004ECE10                   # mfhi        $t9 # 004E0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ece50u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_4ece54:
    // 0x4ece54: 0x4ece20  .word       0x004ECE20                   # add         $t9, $v0, $t6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ece54u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_4ece58:
    // 0x4ece58: 0x4ece30  tge         $v0, $t6, 824
    ctx->pc = 0x4ece58u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4ece5c:
    // 0x4ece5c: 0x4ece40  .word       0x004ECE40                   # sll         $t9, $t6, 25 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ece5cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 14), 25));
    ctx->pc = 0x4ece60u;
}
