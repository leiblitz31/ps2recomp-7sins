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

// Function: sub_005DFCD0
// Address: 0x5dfcd0 - 0x5e0060
void sub_005DFCD0_0x5dfcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DFCD0_0x5dfcd0");
#endif

    switch (ctx->pc) {
        case 0x5dfcf0u: goto label_5dfcf0;
        case 0x5dfd7cu: goto label_5dfd7c;
        case 0x5dfdd4u: goto label_5dfdd4;
        case 0x5dfdf4u: goto label_5dfdf4;
        case 0x5dfe58u: goto label_5dfe58;
        case 0x5dfea0u: goto label_5dfea0;
        case 0x5dfea4u: goto label_5dfea4;
        case 0x5dfec4u: goto label_5dfec4;
        case 0x5dff08u: goto label_5dff08;
        case 0x5dff50u: goto label_5dff50;
        case 0x5dff98u: goto label_5dff98;
        case 0x5dffc4u: goto label_5dffc4;
        default: break;
    }

    ctx->pc = 0x5dfcd0u;

    // 0x5dfcd0: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DFCD0u;
    {
        const bool branch_taken_0x5dfcd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5dfcd0) {
            ctx->pc = 0x5DFCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFCD0u;
            // 0x5dfcd4: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FCE64u;
            return;
        }
    }
    ctx->pc = 0x5DFCD8u;
    // 0x5dfcd8: 0x6572433a  daddiu      $s2, $t3, 0x433A
    ctx->pc = 0x5dfcd8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17210);
    // 0x5dfcdc: 0x42657461  .word       0x42657461                   # INVALID     $s3, $a1, 0x7461 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dfcdcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x5DFCDC raw=0x42657461");
    // 0x5dfce0: 0x68737572  ldl         $s3, 0x7572($v1)
    ctx->pc = 0x5dfce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30066); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x5dfce4: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfce4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
    // 0x5dfce8: 0x32745220  andi        $s4, $s3, 0x5220
    ctx->pc = 0x5dfce8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)21024);
    // 0x5dfcec: 0x75724264  .word       0x75724264                   # INVALID     $t3, $s2, 0x4264 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfcecu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFCEC raw=0x75724264");
label_5dfcf0:
    // 0x5dfcf0: 0x65536873  daddiu      $s3, $t2, 0x6873
    ctx->pc = 0x5dfcf0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)26739);
    // 0x5dfcf4: 0x78655474  lq          $a1, 0x5474($v1)
    ctx->pc = 0x5dfcf4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 21620)));
    // 0x5dfcf8: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x5dfcf8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
    // 0x5dfcfc: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x5dfcfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
    // 0x5dfd00: 0xa64656c  j           func_99195B0
    ctx->pc = 0x5DFD00u;
    ctx->pc = 0x99195B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x99195B0u, 0x5DFD00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DFD08u;
    // 0x5dfd08: 0x0  nop
    ctx->pc = 0x5dfd08u;
    // NOP
    // 0x5dfd0c: 0x0  nop
    ctx->pc = 0x5dfd0cu;
    // NOP
    // 0x5dfd10: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DFD10u;
    {
        const bool branch_taken_0x5dfd10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5dfd10) {
            ctx->pc = 0x5DFD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFD10u;
            // 0x5dfd14: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FCEA4u;
            return;
        }
    }
    ctx->pc = 0x5DFD18u;
    // 0x5dfd18: 0x6572433a  daddiu      $s2, $t3, 0x433A
    ctx->pc = 0x5dfd18u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17210);
    // 0x5dfd1c: 0x42657461  .word       0x42657461                   # INVALID     $s3, $a1, 0x7461 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dfd1cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x5DFD1C raw=0x42657461");
    // 0x5dfd20: 0x68737572  ldl         $s3, 0x7572($v1)
    ctx->pc = 0x5dfd20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30066); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x5dfd24: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfd24u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
    // 0x5dfd28: 0x32745220  andi        $s4, $s3, 0x5220
    ctx->pc = 0x5dfd28u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)21024);
    // 0x5dfd2c: 0x75724264  .word       0x75724264                   # INVALID     $t3, $s2, 0x4264 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfd2cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFD2C raw=0x75724264");
    // 0x5dfd30: 0x65536873  daddiu      $s3, $t2, 0x6873
    ctx->pc = 0x5dfd30u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)26739);
    // 0x5dfd34: 0x20565574  addi        $s6, $v0, 0x5574
    ctx->pc = 0x5dfd34u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)21876, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 22, (int32_t)tmp); }
    // 0x5dfd38: 0x6c696166  ldr         $t1, 0x6166($v1)
    ctx->pc = 0x5dfd38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5dfd3c: 0xa6465  .word       0x000A6465                   # or          $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dfd3cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    // 0x5dfd40: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DFD40u;
    {
        const bool branch_taken_0x5dfd40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5dfd40) {
            ctx->pc = 0x5DFD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFD40u;
            // 0x5dfd44: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FCED4u;
            return;
        }
    }
    ctx->pc = 0x5DFD48u;
    // 0x5dfd48: 0x6572433a  daddiu      $s2, $t3, 0x433A
    ctx->pc = 0x5dfd48u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17210);
    // 0x5dfd4c: 0x42657461  .word       0x42657461                   # INVALID     $s3, $a1, 0x7461 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dfd4cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x5DFD4C raw=0x42657461");
    // 0x5dfd50: 0x68737572  ldl         $s3, 0x7572($v1)
    ctx->pc = 0x5dfd50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30066); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x5dfd54: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfd54u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
    // 0x5dfd58: 0x32745220  andi        $s4, $s3, 0x5220
    ctx->pc = 0x5dfd58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)21024);
    // 0x5dfd5c: 0x75724264  .word       0x75724264                   # INVALID     $t3, $s2, 0x4264 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfd5cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFD5C raw=0x75724264");
    // 0x5dfd60: 0x65536873  daddiu      $s3, $t2, 0x6873
    ctx->pc = 0x5dfd60u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)26739);
    // 0x5dfd64: 0x42475274  .word       0x42475274                   # INVALID     $s2, $a3, 0x5274 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dfd64u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x5DFD64 raw=0x42475274");
    // 0x5dfd68: 0x61662041  daddi       $a2, $t3, 0x2041
    ctx->pc = 0x5dfd68u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8257; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
    // 0x5dfd6c: 0x64656c69  daddiu      $a1, $v1, 0x6C69
    ctx->pc = 0x5dfd6cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27753);
    // 0x5dfd70: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5dfd70u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x5dfd74: 0x0  nop
    ctx->pc = 0x5dfd74u;
    // NOP
    // 0x5dfd78: 0x0  nop
    ctx->pc = 0x5dfd78u;
    // NOP
label_5dfd7c:
    // 0x5dfd7c: 0x0  nop
    ctx->pc = 0x5dfd7cu;
    // NOP
    // 0x5dfd80: 0x42677464  .word       0x42677464                   # INVALID     $s3, $a3, 0x7464 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dfd80u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x5DFD80 raw=0x42677464");
    // 0x5dfd84: 0x68737572  ldl         $s3, 0x7572($v1)
    ctx->pc = 0x5dfd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30066); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x5dfd88: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5dfd88u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5dfd8c: 0x54746553  bnel        $v1, $s4, . + 4 + (0x6553 << 2)
    ctx->pc = 0x5DFD8Cu;
    {
        const bool branch_taken_0x5dfd8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x5dfd8c) {
            ctx->pc = 0x5DFD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFD8Cu;
            // 0x5dfd90: 0x75747865  .word       0x75747865                   # INVALID     $t3, $s4, 0x7865 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFD90 raw=0x75747865");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F92DCu;
            return;
        }
    }
    ctx->pc = 0x5DFD94u;
    // 0x5dfd94: 0x3a206572  xori        $zero, $s1, 0x6572
    ctx->pc = 0x5dfd94u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25970);
    // 0x5dfd98: 0x74746120  .word       0x74746120                   # INVALID     $v1, $s4, 0x6120 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfd98u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFD98 raw=0x74746120");
    // 0x5dfd9c: 0x74706d65  .word       0x74706D65                   # INVALID     $v1, $s0, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfd9cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFD9C raw=0x74706D65");
    // 0x5dfda0: 0x20676e69  addi        $a3, $v1, 0x6E69
    ctx->pc = 0x5dfda0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x5dfda4: 0x75206f74  .word       0x75206F74                   # INVALID     $t1, $zero, 0x6F74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfda4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFDA4 raw=0x75206F74");
    // 0x5dfda8: 0x61206573  daddi       $zero, $t1, 0x6573
    ctx->pc = 0x5dfda8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25971; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5dfdac: 0x6e756620  ldr         $s5, 0x6620($s3)
    ctx->pc = 0x5dfdacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x5dfdb0: 0x6f697463  ldr         $t1, 0x7463($k1)
    ctx->pc = 0x5dfdb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5dfdb4: 0x6e6f206e  ldr         $t7, 0x206E($s3)
    ctx->pc = 0x5dfdb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x5dfdb8: 0x206e6120  addi        $t6, $v1, 0x6120
    ctx->pc = 0x5dfdb8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24864, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x5dfdbc: 0x656a626f  daddiu      $t2, $t3, 0x626F
    ctx->pc = 0x5dfdbcu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25199);
    // 0x5dfdc0: 0x6e207463  ldr         $zero, 0x7463($s1)
    ctx->pc = 0x5dfdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5dfdc4: 0x6320746f  daddi       $zero, $t9, 0x746F
    ctx->pc = 0x5dfdc4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29807; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5dfdc8: 0x74616572  .word       0x74616572                   # INVALID     $v1, $at, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfdc8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFDC8 raw=0x74616572");
    // 0x5dfdcc: 0x79206465  lq          $zero, 0x6465($t1)
    ctx->pc = 0x5dfdccu;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 9), 25701)));
    // 0x5dfdd0: 0x7465  .word       0x00007465                   # move        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dfdd0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5dfdd4:
    // 0x5dfdd4: 0x0  nop
    ctx->pc = 0x5dfdd4u;
    // NOP
    // 0x5dfdd8: 0x0  nop
    ctx->pc = 0x5dfdd8u;
    // NOP
    // 0x5dfddc: 0x0  nop
    ctx->pc = 0x5dfddcu;
    // NOP
    // 0x5dfde0: 0x6554705f  daddiu      $s4, $t2, 0x705F
    ctx->pc = 0x5dfde0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)28767);
    // 0x5dfde4: 0x72757478  .word       0x72757478                   # INVALID     $s3, $s5, 0x7478 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dfde4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x5DFDE4 raw=0x72757478");
    // 0x5dfde8: 0x3d212065  .word       0x3D212065                   # lui         $at, 0x2065 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8293 << 16));
    // 0x5dfdec: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfdecu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFDEC raw=0x4C554E20");
    // 0x5dfdf0: 0x4c  syscall     1
    ctx->pc = 0x5dfdf0u;
    ctx->pc = 0x5DFDF4u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5dfdf4:
    // 0x5dfdf4: 0x0  nop
    ctx->pc = 0x5dfdf4u;
    // NOP
    // 0x5dfdf8: 0x0  nop
    ctx->pc = 0x5dfdf8u;
    // NOP
    // 0x5dfdfc: 0x0  nop
    ctx->pc = 0x5dfdfcu;
    // NOP
    // 0x5dfe00: 0x42677464  .word       0x42677464                   # INVALID     $s3, $a3, 0x7464 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dfe00u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x5DFE00 raw=0x42677464");
    // 0x5dfe04: 0x68737572  ldl         $s3, 0x7572($v1)
    ctx->pc = 0x5dfe04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30066); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x5dfe08: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5dfe08u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5dfe0c: 0x54746553  bnel        $v1, $s4, . + 4 + (0x6553 << 2)
    ctx->pc = 0x5DFE0Cu;
    {
        const bool branch_taken_0x5dfe0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x5dfe0c) {
            ctx->pc = 0x5DFE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFE0Cu;
            // 0x5dfe10: 0x75747865  .word       0x75747865                   # INVALID     $t3, $s4, 0x7865 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFE10 raw=0x75747865");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F935Cu;
            return;
        }
    }
    ctx->pc = 0x5DFE14u;
    // 0x5dfe14: 0x3a206572  xori        $zero, $s1, 0x6572
    ctx->pc = 0x5dfe14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25970);
    // 0x5dfe18: 0x746f6720  .word       0x746F6720                   # INVALID     $v1, $t7, 0x6720 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfe18u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFE18 raw=0x746F6720");
    // 0x5dfe1c: 0x4e206120  .word       0x4E206120                   # INVALID     $s1, $zero, 0x6120 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfe1cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFE1C raw=0x4E206120");
    // 0x5dfe20: 0x204c4c55  addi        $t4, $v0, 0x4C55
    ctx->pc = 0x5dfe20u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19541, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x5dfe24: 0x6e696f70  ldr         $t1, 0x6F70($s3)
    ctx->pc = 0x5dfe24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5dfe28: 0x726574  teq         $v1, $s2, 405
    ctx->pc = 0x5dfe28u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
    // 0x5dfe2c: 0x0  nop
    ctx->pc = 0x5dfe2cu;
    // NOP
    // 0x5dfe30: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DFE30u;
    {
        const bool branch_taken_0x5dfe30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5dfe30) {
            ctx->pc = 0x5DFE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFE30u;
            // 0x5dfe34: 0x2e443274  sltiu       $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12916) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FCFC4u;
            return;
        }
    }
    ctx->pc = 0x5DFE38u;
    // 0x5dfe38: 0x707063  .word       0x00707063                   # subu        $t6, $v1, $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dfe38u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x5dfe3c: 0x0  nop
    ctx->pc = 0x5dfe3cu;
    // NOP
    // 0x5dfe40: 0x6f43705f  ldr         $v1, 0x705F($k0)
    ctx->pc = 0x5dfe40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 28767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x5dfe44: 0x6769666e  daddiu      $t1, $k1, 0x666E
    ctx->pc = 0x5dfe44u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26222);
    // 0x5dfe48: 0x75727453  .word       0x75727453                   # INVALID     $t3, $s2, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfe48u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFE48 raw=0x75727453");
    // 0x5dfe4c: 0x21207463  addi        $zero, $t1, 0x7463
    ctx->pc = 0x5dfe4cu;
    // NOP (addi to $zero)
    // 0x5dfe50: 0x554e203d  bnel        $t2, $t6, . + 4 + (0x203D << 2)
    ctx->pc = 0x5DFE50u;
    {
        const bool branch_taken_0x5dfe50 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5dfe50) {
            ctx->pc = 0x5DFE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFE50u;
            // 0x5dfe54: 0x4c4c  syscall     305 (Delay Slot)
            ctx->pc = 0x5DFE58u;
            runtime->handleSyscall(rdram, ctx, 0x131u);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E7F48u;
            return;
        }
    }
    ctx->pc = 0x5DFE58u;
label_5dfe58:
    // 0x5dfe58: 0x0  nop
    ctx->pc = 0x5dfe58u;
    // NOP
    // 0x5dfe5c: 0x0  nop
    ctx->pc = 0x5dfe5cu;
    // NOP
    // 0x5dfe60: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DFE60u;
    {
        const bool branch_taken_0x5dfe60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5dfe60) {
            ctx->pc = 0x5DFE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFE60u;
            // 0x5dfe64: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FCFF4u;
            return;
        }
    }
    ctx->pc = 0x5DFE68u;
    // 0x5dfe68: 0x7465473a  .word       0x7465473A                   # INVALID     $v1, $a1, 0x473A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfe68u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFE68 raw=0x7465473A");
    // 0x5dfe6c: 0x61666544  daddi       $a2, $t3, 0x6544
    ctx->pc = 0x5dfe6cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25924; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
    // 0x5dfe70: 0x43746c75  .word       0x43746C75                   # INVALID     $k1, $s4, 0x6C75 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dfe70u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5DFE70 raw=0x43746C75");
    // 0x5dfe74: 0x69666e6f  ldl         $a2, 0x6E6F($t3)
    ctx->pc = 0x5dfe74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x5dfe78: 0x61727567  daddi       $s2, $t3, 0x7567
    ctx->pc = 0x5dfe78u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)30055; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
    // 0x5dfe7c: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5dfe7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x5dfe80: 0x67203a20  daddiu      $zero, $t9, 0x3A20
    ctx->pc = 0x5dfe80u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)14880);
    // 0x5dfe84: 0x6120746f  daddi       $zero, $t1, 0x746F
    ctx->pc = 0x5dfe84u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)29807; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5dfe88: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfe88u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFE88 raw=0x4C554E20");
    // 0x5dfe8c: 0x6f70204c  ldr         $s0, 0x204C($k1)
    ctx->pc = 0x5dfe8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x5dfe90: 0x65746e69  daddiu      $s4, $t3, 0x6E69
    ctx->pc = 0x5dfe90u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
    // 0x5dfe94: 0xa72  tlt         $zero, $zero, 41
    ctx->pc = 0x5dfe94u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5dfe98: 0x0  nop
    ctx->pc = 0x5dfe98u;
    // NOP
    // 0x5dfe9c: 0x0  nop
    ctx->pc = 0x5dfe9cu;
    // NOP
label_5dfea0:
    // 0x5dfea0: 0x6143705f  daddi       $v1, $t2, 0x705F
    ctx->pc = 0x5dfea0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)28767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_5dfea4:
    // 0x5dfea4: 0x6172656d  daddi       $s2, $t3, 0x656D
    ctx->pc = 0x5dfea4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25965; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
    // 0x5dfea8: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5dfea8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
    // 0x5dfeac: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfeacu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFEAC raw=0x4C4C554E");
    // 0x5dfeb0: 0x0  nop
    ctx->pc = 0x5dfeb0u;
    // NOP
    // 0x5dfeb4: 0x0  nop
    ctx->pc = 0x5dfeb4u;
    // NOP
    // 0x5dfeb8: 0x0  nop
    ctx->pc = 0x5dfeb8u;
    // NOP
    // 0x5dfebc: 0x0  nop
    ctx->pc = 0x5dfebcu;
    // NOP
    // 0x5dfec0: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
label_5dfec4:
    if (ctx->pc == 0x5DFEC4u) {
        ctx->pc = 0x5DFEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DFEC0u;
        // 0x5dfec4: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DFEC8u;
        goto label_fallthrough_0x5dfec0;
    }
    ctx->pc = 0x5DFEC0u;
    {
        const bool branch_taken_0x5dfec0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5dfec0) {
            ctx->pc = 0x5DFEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFEC0u;
            // 0x5dfec4: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD054u;
            return;
        }
    }
label_fallthrough_0x5dfec0:
    ctx->pc = 0x5DFEC8u;
    // 0x5dfec8: 0x696e493a  ldl         $t6, 0x493A($t3)
    ctx->pc = 0x5dfec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 18746); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x5dfecc: 0x6c616974  ldr         $at, 0x6974($v1)
    ctx->pc = 0x5dfeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5dfed0: 0x20657369  addi        $a1, $v1, 0x7369
    ctx->pc = 0x5dfed0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29545, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5dfed4: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5dfed4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
    // 0x5dfed8: 0x20746f67  addi        $s4, $v1, 0x6F67
    ctx->pc = 0x5dfed8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28519, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x5dfedc: 0x554e2061  bnel        $t2, $t6, . + 4 + (0x2061 << 2)
    ctx->pc = 0x5DFEDCu;
    {
        const bool branch_taken_0x5dfedc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5dfedc) {
            ctx->pc = 0x5DFEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFEDCu;
            // 0x5dfee0: 0x70204c4c  .word       0x70204C4C                   # INVALID     $at, $zero, 0x4C4C # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0xC at 0x5DFEE0 raw=0x70204C4C");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E8064u;
            return;
        }
    }
    ctx->pc = 0x5DFEE4u;
    // 0x5dfee4: 0x746e696f  .word       0x746E696F                   # INVALID     $v1, $t6, 0x696F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfee4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFEE4 raw=0x746E696F");
    // 0x5dfee8: 0xa7265  .word       0x000A7265                   # or          $t6, $zero, $t2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dfee8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    // 0x5dfeec: 0x0  nop
    ctx->pc = 0x5dfeecu;
    // NOP
    // 0x5dfef0: 0x52705f6d  beql        $s3, $s0, . + 4 + (0x5F6D << 2)
    ctx->pc = 0x5DFEF0u;
    {
        const bool branch_taken_0x5dfef0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x5dfef0) {
            ctx->pc = 0x5DFEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFEF0u;
            // 0x5dfef4: 0x43643274  .word       0x43643274                   # INVALID     $k1, $a0, 0x3274 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5DFEF4 raw=0x43643274");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F7CA8u;
            return;
        }
    }
    ctx->pc = 0x5DFEF8u;
    // 0x5dfef8: 0x72656d61  .word       0x72656D61                   # maddu1      $t5, $s3, $a1 # 00000540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dfef8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x5dfefc: 0x3d212061  .word       0x3D212061                   # lui         $at, 0x2061 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8289 << 16));
    // 0x5dff00: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dff00u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFF00 raw=0x4C554E20");
    // 0x5dff04: 0x4c  syscall     1
    ctx->pc = 0x5dff04u;
    ctx->pc = 0x5DFF08u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5dff08:
    // 0x5dff08: 0x0  nop
    ctx->pc = 0x5dff08u;
    // NOP
    // 0x5dff0c: 0x0  nop
    ctx->pc = 0x5dff0cu;
    // NOP
    // 0x5dff10: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DFF10u;
    {
        const bool branch_taken_0x5dff10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5dff10) {
            ctx->pc = 0x5DFF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFF10u;
            // 0x5dff14: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD0A4u;
            return;
        }
    }
    ctx->pc = 0x5DFF18u;
    // 0x5dff18: 0x696e493a  ldl         $t6, 0x493A($t3)
    ctx->pc = 0x5dff18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 18746); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x5dff1c: 0x6c616974  ldr         $at, 0x6974($v1)
    ctx->pc = 0x5dff1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5dff20: 0x20657369  addi        $a1, $v1, 0x7369
    ctx->pc = 0x5dff20u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29545, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5dff24: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5dff24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
    // 0x5dff28: 0x61437752  daddi       $v1, $t2, 0x7752
    ctx->pc = 0x5dff28u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)30546; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
    // 0x5dff2c: 0x6172656d  daddi       $s2, $t3, 0x656D
    ctx->pc = 0x5dff2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25965; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
    // 0x5dff30: 0x61657243  daddi       $a1, $t3, 0x7243
    ctx->pc = 0x5dff30u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29251; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x5dff34: 0x66206574  daddiu      $zero, $s1, 0x6574
    ctx->pc = 0x5dff34u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)25972);
    // 0x5dff38: 0x656c6961  daddiu      $t4, $t3, 0x6961
    ctx->pc = 0x5dff38u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26977);
    // 0x5dff3c: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dff3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x5dff40: 0x61724670  daddi       $s2, $t3, 0x4670
    ctx->pc = 0x5dff40u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18032; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
    // 0x5dff44: 0x2120656d  addi        $zero, $t1, 0x656D
    ctx->pc = 0x5dff44u;
    // NOP (addi to $zero)
    // 0x5dff48: 0x554e203d  bnel        $t2, $t6, . + 4 + (0x203D << 2)
    ctx->pc = 0x5DFF48u;
    {
        const bool branch_taken_0x5dff48 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5dff48) {
            ctx->pc = 0x5DFF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFF48u;
            // 0x5dff4c: 0x4c4c  syscall     305 (Delay Slot)
            ctx->pc = 0x5DFF50u;
            runtime->handleSyscall(rdram, ctx, 0x131u);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E8040u;
            return;
        }
    }
    ctx->pc = 0x5DFF50u;
label_5dff50:
    // 0x5dff50: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DFF50u;
    {
        const bool branch_taken_0x5dff50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5dff50) {
            ctx->pc = 0x5DFF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFF50u;
            // 0x5dff54: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD0E4u;
            return;
        }
    }
    ctx->pc = 0x5DFF58u;
    // 0x5dff58: 0x696e493a  ldl         $t6, 0x493A($t3)
    ctx->pc = 0x5dff58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 18746); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x5dff5c: 0x6c616974  ldr         $at, 0x6974($v1)
    ctx->pc = 0x5dff5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5dff60: 0x20657369  addi        $a1, $v1, 0x7369
    ctx->pc = 0x5dff60u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29545, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5dff64: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5dff64u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
    // 0x5dff68: 0x72467752  .word       0x72467752                   # mflo1       $t6 # 02460740 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dff68u;
    SET_GPR_U64(ctx, 14, ctx->lo1);
    // 0x5dff6c: 0x43656d61  .word       0x43656D61                   # INVALID     $k1, $a1, 0x6D61 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dff6cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5DFF6C raw=0x43656D61");
    // 0x5dff70: 0x74616572  .word       0x74616572                   # INVALID     $v1, $at, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dff70u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFF70 raw=0x74616572");
    // 0x5dff74: 0x61662065  daddi       $a2, $t3, 0x2065
    ctx->pc = 0x5dff74u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8293; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
    // 0x5dff78: 0x64656c69  daddiu      $a1, $v1, 0x6C69
    ctx->pc = 0x5dff78u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27753);
    // 0x5dff7c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5dff7cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x5dff80: 0x6d614370  ldr         $at, 0x4370($t3)
    ctx->pc = 0x5dff80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5dff84: 0x52617265  beql        $s3, $at, . + 4 + (0x7265 << 2)
    ctx->pc = 0x5DFF84u;
    {
        const bool branch_taken_0x5dff84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 1));
        if (branch_taken_0x5dff84) {
            ctx->pc = 0x5DFF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFF84u;
            // 0x5dff88: 0x65747361  daddiu      $s4, $t3, 0x7361 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29537);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FC91Cu;
            return;
        }
    }
    ctx->pc = 0x5DFF8Cu;
    // 0x5dff8c: 0x3d212072  .word       0x3D212072                   # lui         $at, 0x2072 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dff8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8306 << 16));
    // 0x5dff90: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dff90u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFF90 raw=0x4C554E20");
    // 0x5dff94: 0x4c  syscall     1
    ctx->pc = 0x5dff94u;
    ctx->pc = 0x5DFF98u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5dff98:
    // 0x5dff98: 0x0  nop
    ctx->pc = 0x5dff98u;
    // NOP
    // 0x5dff9c: 0x0  nop
    ctx->pc = 0x5dff9cu;
    // NOP
    // 0x5dffa0: 0x5766705f  bnel        $k1, $a2, . + 4 + (0x705F << 2)
    ctx->pc = 0x5DFFA0u;
    {
        const bool branch_taken_0x5dffa0 = (GPR_U64(ctx, 27) != GPR_U64(ctx, 6));
        if (branch_taken_0x5dffa0) {
            ctx->pc = 0x5DFFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFFA0u;
            // 0x5dffa4: 0x68746469  ldl         $s4, 0x6469($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25705); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FC120u;
            return;
        }
    }
    ctx->pc = 0x5DFFA8u;
    // 0x5dffa8: 0x554e3d21  bnel        $t2, $t6, . + 4 + (0x3D21 << 2)
    ctx->pc = 0x5DFFA8u;
    {
        const bool branch_taken_0x5dffa8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5dffa8) {
            ctx->pc = 0x5DFFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFFA8u;
            // 0x5dffac: 0x26204c4c  addiu       $zero, $s1, 0x4C4C (Delay Slot)
            // NOP (addiu $zero, ...)
            ctx->in_delay_slot = false;
            ctx->pc = 0x5EF430u;
            return;
        }
    }
    ctx->pc = 0x5DFFB0u;
    // 0x5dffb0: 0x705f2026  .word       0x705F2026                   # INVALID     $v0, $ra, 0x2026 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dffb0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x5DFFB0 raw=0x705F2026");
    // 0x5dffb4: 0x69654866  ldl         $a1, 0x4866($t3)
    ctx->pc = 0x5dffb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 18534); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x5dffb8: 0x21746867  addi        $s4, $t3, 0x6867
    ctx->pc = 0x5dffb8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)26727, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x5dffbc: 0x4c554e3d  .word       0x4C554E3D                   # INVALID     $v0, $s5, 0x4E3D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dffbcu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFFBC raw=0x4C554E3D");
    // 0x5dffc0: 0x4c  syscall     1
    ctx->pc = 0x5dffc0u;
    ctx->pc = 0x5DFFC4u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5dffc4:
    // 0x5dffc4: 0x0  nop
    ctx->pc = 0x5dffc4u;
    // NOP
    // 0x5dffc8: 0x0  nop
    ctx->pc = 0x5dffc8u;
    // NOP
    // 0x5dffcc: 0x0  nop
    ctx->pc = 0x5dffccu;
    // NOP
    // 0x5dffd0: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DFFD0u;
    {
        const bool branch_taken_0x5dffd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5dffd0) {
            ctx->pc = 0x5DFFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFFD0u;
            // 0x5dffd4: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD164u;
            return;
        }
    }
    ctx->pc = 0x5DFFD8u;
    // 0x5dffd8: 0x7465473a  .word       0x7465473A                   # INVALID     $v1, $a1, 0x473A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dffd8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFFD8 raw=0x7465473A");
    // 0x5dffdc: 0x646e6552  daddiu      $t6, $v1, 0x6552
    ctx->pc = 0x5dffdcu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
    // 0x5dffe0: 0x72417265  .word       0x72417265                   # INVALID     $s2, $at, 0x7265 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dffe0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DFFE0 raw=0x72417265");
    // 0x5dffe4: 0x69446165  ldl         $a0, 0x6165($t2)
    ctx->pc = 0x5dffe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x5dffe8: 0x736e656d  .word       0x736E656D                   # INVALID     $k1, $t6, 0x656D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dffe8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x5DFFE8 raw=0x736E656D");
    // 0x5dffec: 0x736e6f69  .word       0x736E6F69                   # INVALID     $k1, $t6, 0x6F69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x5dffecu;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x1D at 0x5DFFEC raw=0x736E6F69");
    // 0x5dfff0: 0x67203a20  daddiu      $zero, $t9, 0x3A20
    ctx->pc = 0x5dfff0u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)14880);
    // 0x5dfff4: 0x6120746f  daddi       $zero, $t1, 0x746F
    ctx->pc = 0x5dfff4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)29807; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5dfff8: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfff8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFFF8 raw=0x4C554E20");
    // 0x5dfffc: 0x6170204c  daddi       $s0, $t3, 0x204C
    ctx->pc = 0x5dfffcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8268; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
    // 0x5e0000: 0x206d6172  addi        $t5, $v1, 0x6172
    ctx->pc = 0x5e0000u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24946, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x5e0004: 0x6e696f70  ldr         $t1, 0x6F70($s3)
    ctx->pc = 0x5e0004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5e0008: 0x726574  teq         $v1, $s2, 405
    ctx->pc = 0x5e0008u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
    // 0x5e000c: 0x0  nop
    ctx->pc = 0x5e000cu;
    // NOP
    // 0x5e0010: 0x6f625f6d  ldr         $v0, 0x5F6D($k1)
    ctx->pc = 0x5e0010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24429); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x5e0014: 0x74696e49  .word       0x74696E49                   # INVALID     $v1, $t1, 0x6E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0014u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0014 raw=0x74696E49");
    // 0x5e0018: 0x696c6169  ldl         $t4, 0x6169($t3)
    ctx->pc = 0x5e0018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x5e001c: 0x646573  tltu        $v1, $a0, 405
    ctx->pc = 0x5e001cu;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x5e0020: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0020u;
    {
        const bool branch_taken_0x5e0020 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0020) {
            ctx->pc = 0x5E0024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0020u;
            // 0x5e0024: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD1B4u;
            return;
        }
    }
    ctx->pc = 0x5E0028u;
    // 0x5e0028: 0x7365443a  .word       0x7365443A                   # INVALID     $k1, $a1, 0x443A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0028u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x5E0028 raw=0x7365443A");
    // 0x5e002c: 0x796f7274  lq          $t7, 0x7274($t3)
    ctx->pc = 0x5e002cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 11), 29300)));
    // 0x5e0030: 0x746e6f46  .word       0x746E6F46                   # INVALID     $v1, $t6, 0x6F46 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0030u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0030 raw=0x746E6F46");
    // 0x5e0034: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0034u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
    // 0x5e0038: 0x67746420  daddiu      $s4, $k1, 0x6420
    ctx->pc = 0x5e0038u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25632);
    // 0x5e003c: 0x64327452  daddiu      $s2, $at, 0x7452
    ctx->pc = 0x5e003cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29778);
    // 0x5e0040: 0x6f687320  ldr         $t0, 0x7320($k1)
    ctx->pc = 0x5e0040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x5e0044: 0x20646c75  addi        $a0, $v1, 0x6C75
    ctx->pc = 0x5e0044u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27765, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5e0048: 0x69206562  ldl         $zero, 0x6562($t1)
    ctx->pc = 0x5e0048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x5e004c: 0x6974696e  ldl         $s4, 0x696E($t3)
    ctx->pc = 0x5e004cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e0050: 0x73696c61  .word       0x73696C61                   # maddu1      $t5, $k1, $t1 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0050u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x5e0054: 0xa2e6465  j           func_8B99194
    ctx->pc = 0x5E0054u;
    ctx->pc = 0x8B99194u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8B99194u, 0x5E0054u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5E005Cu;
    // 0x5e005c: 0x0  nop
    ctx->pc = 0x5e005cu;
    // NOP
    ctx->pc = 0x5e0060u;
}
