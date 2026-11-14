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

// Function: sub_004E31F8
// Address: 0x4e31f8 - 0x4e3238
void sub_004E31F8_0x4e31f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E31F8_0x4e31f8");
#endif

    switch (ctx->pc) {
        case 0x4e31f8u: goto label_4e31f8;
        case 0x4e31fcu: goto label_4e31fc;
        case 0x4e3200u: goto label_4e3200;
        case 0x4e3204u: goto label_4e3204;
        case 0x4e3208u: goto label_4e3208;
        case 0x4e320cu: goto label_4e320c;
        case 0x4e3210u: goto label_4e3210;
        case 0x4e3214u: goto label_4e3214;
        case 0x4e3218u: goto label_4e3218;
        case 0x4e321cu: goto label_4e321c;
        case 0x4e3220u: goto label_4e3220;
        case 0x4e3224u: goto label_4e3224;
        case 0x4e3228u: goto label_4e3228;
        case 0x4e322cu: goto label_4e322c;
        case 0x4e3230u: goto label_4e3230;
        case 0x4e3234u: goto label_4e3234;
        default: break;
    }

    ctx->pc = 0x4e31f8u;

label_4e31f8:
    // 0x4e31f8: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e31fc:
    if (ctx->pc == 0x4E31FCu) {
        ctx->pc = 0x4E31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E31F8u;
        // 0x4e31fc: 0x646e6f66  daddiu      $t6, $v1, 0x6F66 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28518);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3200u;
        goto label_4e3200;
    }
    ctx->pc = 0x4E31F8u;
    {
        const bool branch_taken_0x4e31f8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e31f8) {
            ctx->pc = 0x4E31FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E31F8u;
            // 0x4e31fc: 0x646e6f66  daddiu      $t6, $v1, 0x6F66 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28518);
            ctx->in_delay_slot = false;
            ctx->pc = 0x500384u;
            return;
        }
    }
    ctx->pc = 0x4E3200u;
label_4e3200:
    // 0x4e3200: 0x626425  .word       0x00626425                   # or          $t4, $v1, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3200u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e3204:
    // 0x4e3204: 0x0  nop
    ctx->pc = 0x4e3204u;
    // NOP
label_4e3208:
    // 0x4e3208: 0x0  nop
    ctx->pc = 0x4e3208u;
    // NOP
label_4e320c:
    // 0x4e320c: 0x0  nop
    ctx->pc = 0x4e320cu;
    // NOP
label_4e3210:
    // 0x4e3210: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e3210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e3214:
    // 0x4e3214: 0x4e4f425f  .word       0x4E4F425F                   # INVALID     $s2, $t7, 0x425F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3214u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3214 raw=0x4E4F425F");
label_4e3218:
    // 0x4e3218: 0x4341454e  .word       0x4341454E                   # INVALID     $k0, $at, 0x454E # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e3218u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E3218 raw=0x4341454E");
label_4e321c:
    // 0x4e321c: 0x4e4f4954  .word       0x4E4F4954                   # INVALID     $s2, $t7, 0x4954 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e321cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E321C raw=0x4E4F4954");
label_4e3220:
    // 0x4e3220: 0x0  nop
    ctx->pc = 0x4e3220u;
    // NOP
label_4e3224:
    // 0x4e3224: 0x0  nop
    ctx->pc = 0x4e3224u;
    // NOP
label_4e3228:
    // 0x4e3228: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e3228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e322c:
    // 0x4e322c: 0x4345505f  .word       0x4345505F                   # INVALID     $k0, $a1, 0x505F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e322cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E322C raw=0x4345505F");
label_4e3230:
    // 0x4e3230: 0x4548  .word       0x00004548                   # jr          $zero # 00004540 <InstrIdType: CPU_SPECIAL>
label_4e3234:
    if (ctx->pc == 0x4E3234u) {
        ctx->pc = 0x4E3238u;
        goto label_fallthrough_0x4e3230;
    }
    ctx->pc = 0x4E3230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3230u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4e3230:
    ctx->pc = 0x4E3238u;
}
