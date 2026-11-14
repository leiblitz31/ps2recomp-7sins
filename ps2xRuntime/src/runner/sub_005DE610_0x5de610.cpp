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

// Function: sub_005DE610
// Address: 0x5de610 - 0x5de660
void sub_005DE610_0x5de610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DE610_0x5de610");
#endif

    ctx->pc = 0x5de610u;

    // 0x5de610: 0x20212121  addi        $at, $at, 0x2121
    ctx->pc = 0x5de610u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8481, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x5de614: 0x544e4144  bnel        $v0, $t6, . + 4 + (0x4144 << 2)
    ctx->pc = 0x5DE614u;
    {
        const bool branch_taken_0x5de614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x5de614) {
            ctx->pc = 0x5DE618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE614u;
            // 0x5de618: 0x64205345  daddiu      $zero, $at, 0x5345 (Delay Slot)
            SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)21317);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5EEB28u;
            return;
        }
    }
    ctx->pc = 0x5DE61Cu;
    // 0x5de61c: 0x6e456374  ldr         $a1, 0x6374($s2)
    ctx->pc = 0x5de61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 25460); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x5de620: 0x50797274  beql        $v1, $t9, . + 4 + (0x7274 << 2)
    ctx->pc = 0x5DE620u;
    {
        const bool branch_taken_0x5de620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 25));
        if (branch_taken_0x5de620) {
            ctx->pc = 0x5DE624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE620u;
            // 0x5de624: 0x746e696f  .word       0x746E696F                   # INVALID     $v1, $t6, 0x696F # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE624 raw=0x746E696F");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FAFF4u;
            return;
        }
    }
    ctx->pc = 0x5DE628u;
    // 0x5de628: 0x6e493a3a  ldr         $t1, 0x3A3A($s2)
    ctx->pc = 0x5de628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14906); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5de62c: 0x61697469  daddi       $t1, $t3, 0x7469
    ctx->pc = 0x5de62cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x5de630: 0x6573696c  daddiu      $s3, $t3, 0x696C
    ctx->pc = 0x5de630u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
    // 0x5de634: 0x64203a20  daddiu      $zero, $at, 0x3A20
    ctx->pc = 0x5de634u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)14880);
    // 0x5de638: 0x654d6374  daddiu      $t5, $t2, 0x6374
    ctx->pc = 0x5de638u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25460);
    // 0x5de63c: 0x493a3a6d  .word       0x493A3A6D                   # INVALID     $t1, $k0, 0x3A6D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5de63cu;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5DE63C raw=0x493A3A6D");
    // 0x5de640: 0x6974696e  ldl         $s4, 0x696E($t3)
    ctx->pc = 0x5de640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5de644: 0x73696c61  .word       0x73696C61                   # maddu1      $t5, $k1, $t1 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de644u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x5de648: 0x41462065  .word       0x41462065                   # INVALID     $t2, $a2, 0x2065 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5de648u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5DE648 raw=0x41462065");
    // 0x5de64c: 0x44454c49  .word       0x44454C49                   # cfc1        $a1, $9 # 00000449 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5de64cu;
    SET_GPR_U32(ctx, 5, 0); // Unimplemented FCR9
    // 0x5de650: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5de650u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x5de654: 0x0  nop
    ctx->pc = 0x5de654u;
    // NOP
    // 0x5de658: 0x0  nop
    ctx->pc = 0x5de658u;
    // NOP
    // 0x5de65c: 0x0  nop
    ctx->pc = 0x5de65cu;
    // NOP
    ctx->pc = 0x5de660u;
}
