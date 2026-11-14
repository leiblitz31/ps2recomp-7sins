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

// Function: sub_004E3390
// Address: 0x4e3390 - 0x4e3400
void sub_004E3390_0x4e3390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3390_0x4e3390");
#endif

    switch (ctx->pc) {
        case 0x4e3390u: goto label_4e3390;
        case 0x4e3394u: goto label_4e3394;
        case 0x4e3398u: goto label_4e3398;
        case 0x4e339cu: goto label_4e339c;
        case 0x4e33a0u: goto label_4e33a0;
        case 0x4e33a4u: goto label_4e33a4;
        case 0x4e33a8u: goto label_4e33a8;
        case 0x4e33acu: goto label_4e33ac;
        case 0x4e33b0u: goto label_4e33b0;
        case 0x4e33b4u: goto label_4e33b4;
        case 0x4e33b8u: goto label_4e33b8;
        case 0x4e33bcu: goto label_4e33bc;
        case 0x4e33c0u: goto label_4e33c0;
        case 0x4e33c4u: goto label_4e33c4;
        case 0x4e33c8u: goto label_4e33c8;
        case 0x4e33ccu: goto label_4e33cc;
        case 0x4e33d0u: goto label_4e33d0;
        case 0x4e33d4u: goto label_4e33d4;
        case 0x4e33d8u: goto label_4e33d8;
        case 0x4e33dcu: goto label_4e33dc;
        case 0x4e33e0u: goto label_4e33e0;
        case 0x4e33e4u: goto label_4e33e4;
        case 0x4e33e8u: goto label_4e33e8;
        case 0x4e33ecu: goto label_4e33ec;
        case 0x4e33f0u: goto label_4e33f0;
        case 0x4e33f4u: goto label_4e33f4;
        case 0x4e33f8u: goto label_4e33f8;
        case 0x4e33fcu: goto label_4e33fc;
        default: break;
    }

    ctx->pc = 0x4e3390u;

label_4e3390:
    // 0x4e3390: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e3394:
    if (ctx->pc == 0x4E3394u) {
        ctx->pc = 0x4E3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3390u;
        // 0x4e3394: 0x72617473  .word       0x72617473                   # INVALID     $s3, $at, 0x7473 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E3394 raw=0x72617473");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3398u;
        goto label_4e3398;
    }
    ctx->pc = 0x4E3390u;
    {
        const bool branch_taken_0x4e3390 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3390) {
            ctx->pc = 0x4E3394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3390u;
            // 0x4e3394: 0x72617473  .word       0x72617473                   # INVALID     $s3, $at, 0x7473 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E3394 raw=0x72617473");
            ctx->in_delay_slot = false;
            ctx->pc = 0x50051Cu;
            return;
        }
    }
    ctx->pc = 0x4E3398u;
label_4e3398:
    // 0x4e3398: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4e3398u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e339c:
    // 0x4e339c: 0x0  nop
    ctx->pc = 0x4e339cu;
    // NOP
label_4e33a0:
    // 0x4e33a0: 0x6e657261  ldr         $a1, 0x7261($s3)
    ctx->pc = 0x4e33a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e33a4:
    // 0x4e33a4: 0x63612061  daddi       $at, $k1, 0x2061
    ctx->pc = 0x4e33a4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8289; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_4e33a8:
    // 0x4e33a8: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e33a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e33ac:
    // 0x4e33ac: 0x72756320  .word       0x72756320                   # madd1       $t4, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e33acu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_4e33b0:
    // 0x4e33b0: 0x3a726f73  xori        $s2, $s3, 0x6F73
    ctx->pc = 0x4e33b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28531);
label_4e33b4:
    // 0x4e33b4: 0x41524620  .word       0x41524620                   # INVALID     $t2, $s2, 0x4620 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e33b4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E33B4 raw=0x41524620");
label_4e33b8:
    // 0x4e33b8: 0x494c4947  .word       0x494C4947                   # INVALID     $t2, $t4, 0x4947 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4e33b8u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4E33B8 raw=0x494C4947");
label_4e33bc:
    // 0x4e33bc: 0xa4554  .word       0x000A4554                   # dsllv       $t0, $t2, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e33bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) << (GPR_U32(ctx, 0) & 0x3F));
label_4e33c0:
    // 0x4e33c0: 0x6e657261  ldr         $a1, 0x7261($s3)
    ctx->pc = 0x4e33c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e33c4:
    // 0x4e33c4: 0x63612061  daddi       $at, $k1, 0x2061
    ctx->pc = 0x4e33c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8289; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_4e33c8:
    // 0x4e33c8: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e33c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e33cc:
    // 0x4e33cc: 0x72756320  .word       0x72756320                   # madd1       $t4, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e33ccu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_4e33d0:
    // 0x4e33d0: 0x3a726f73  xori        $s2, $s3, 0x6F73
    ctx->pc = 0x4e33d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28531);
label_4e33d4:
    // 0x4e33d4: 0x43414d20  .word       0x43414D20                   # INVALID     $k0, $at, 0x4D20 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e33d4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E33D4 raw=0x43414D20");
label_4e33d8:
    // 0x4e33d8: 0xa4f48  .word       0x000A4F48                   # jr          $zero # 000A4F40 <InstrIdType: CPU_SPECIAL>
label_4e33dc:
    if (ctx->pc == 0x4E33DCu) {
        ctx->pc = 0x4E33E0u;
        goto label_4e33e0;
    }
    ctx->pc = 0x4E33D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E33D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E33E0u;
label_4e33e0:
    // 0x4e33e0: 0x6e657261  ldr         $a1, 0x7261($s3)
    ctx->pc = 0x4e33e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e33e4:
    // 0x4e33e4: 0x63612061  daddi       $at, $k1, 0x2061
    ctx->pc = 0x4e33e4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8289; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_4e33e8:
    // 0x4e33e8: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e33e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e33ec:
    // 0x4e33ec: 0x72756320  .word       0x72756320                   # madd1       $t4, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e33ecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_4e33f0:
    // 0x4e33f0: 0x3a726f73  xori        $s2, $s3, 0x6F73
    ctx->pc = 0x4e33f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28531);
label_4e33f4:
    // 0x4e33f4: 0x4d554820  .word       0x4D554820                   # INVALID     $t2, $s5, 0x4820 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e33f4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E33F4 raw=0x4D554820");
label_4e33f8:
    // 0x4e33f8: 0xa52554f  j           func_949553C
label_4e33fc:
    if (ctx->pc == 0x4E33FCu) {
        ctx->pc = 0x4E3400u;
        goto label_fallthrough_0x4e33f8;
    }
    ctx->pc = 0x4E33F8u;
    ctx->pc = 0x949553Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x949553Cu, 0x4E33F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x4e33f8:
    ctx->pc = 0x4E3400u;
}
