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

// Function: sub_004E2FB0
// Address: 0x4e2fb0 - 0x4e3150
void sub_004E2FB0_0x4e2fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2FB0_0x4e2fb0");
#endif

    switch (ctx->pc) {
        case 0x4e2fb0u: goto label_4e2fb0;
        case 0x4e2fb4u: goto label_4e2fb4;
        case 0x4e2fb8u: goto label_4e2fb8;
        case 0x4e2fbcu: goto label_4e2fbc;
        case 0x4e2fc0u: goto label_4e2fc0;
        case 0x4e2fc4u: goto label_4e2fc4;
        case 0x4e2fc8u: goto label_4e2fc8;
        case 0x4e2fccu: goto label_4e2fcc;
        case 0x4e2fd0u: goto label_4e2fd0;
        case 0x4e2fd4u: goto label_4e2fd4;
        case 0x4e2fd8u: goto label_4e2fd8;
        case 0x4e2fdcu: goto label_4e2fdc;
        case 0x4e2fe0u: goto label_4e2fe0;
        case 0x4e2fe4u: goto label_4e2fe4;
        case 0x4e2fe8u: goto label_4e2fe8;
        case 0x4e2fecu: goto label_4e2fec;
        case 0x4e2ff0u: goto label_4e2ff0;
        case 0x4e2ff4u: goto label_4e2ff4;
        case 0x4e2ff8u: goto label_4e2ff8;
        case 0x4e2ffcu: goto label_4e2ffc;
        case 0x4e3000u: goto label_4e3000;
        case 0x4e3004u: goto label_4e3004;
        case 0x4e3008u: goto label_4e3008;
        case 0x4e300cu: goto label_4e300c;
        case 0x4e3010u: goto label_4e3010;
        case 0x4e3014u: goto label_4e3014;
        case 0x4e3018u: goto label_4e3018;
        case 0x4e301cu: goto label_4e301c;
        case 0x4e3020u: goto label_4e3020;
        case 0x4e3024u: goto label_4e3024;
        case 0x4e3028u: goto label_4e3028;
        case 0x4e302cu: goto label_4e302c;
        case 0x4e3030u: goto label_4e3030;
        case 0x4e3034u: goto label_4e3034;
        case 0x4e3038u: goto label_4e3038;
        case 0x4e303cu: goto label_4e303c;
        case 0x4e3040u: goto label_4e3040;
        case 0x4e3044u: goto label_4e3044;
        case 0x4e3048u: goto label_4e3048;
        case 0x4e304cu: goto label_4e304c;
        case 0x4e3050u: goto label_4e3050;
        case 0x4e3054u: goto label_4e3054;
        case 0x4e3058u: goto label_4e3058;
        case 0x4e305cu: goto label_4e305c;
        case 0x4e3060u: goto label_4e3060;
        case 0x4e3064u: goto label_4e3064;
        case 0x4e3068u: goto label_4e3068;
        case 0x4e306cu: goto label_4e306c;
        case 0x4e3070u: goto label_4e3070;
        case 0x4e3074u: goto label_4e3074;
        case 0x4e3078u: goto label_4e3078;
        case 0x4e307cu: goto label_4e307c;
        case 0x4e3080u: goto label_4e3080;
        case 0x4e3084u: goto label_4e3084;
        case 0x4e3088u: goto label_4e3088;
        case 0x4e308cu: goto label_4e308c;
        case 0x4e3090u: goto label_4e3090;
        case 0x4e3094u: goto label_4e3094;
        case 0x4e3098u: goto label_4e3098;
        case 0x4e309cu: goto label_4e309c;
        case 0x4e30a0u: goto label_4e30a0;
        case 0x4e30a4u: goto label_4e30a4;
        case 0x4e30a8u: goto label_4e30a8;
        case 0x4e30acu: goto label_4e30ac;
        case 0x4e30b0u: goto label_4e30b0;
        case 0x4e30b4u: goto label_4e30b4;
        case 0x4e30b8u: goto label_4e30b8;
        case 0x4e30bcu: goto label_4e30bc;
        case 0x4e30c0u: goto label_4e30c0;
        case 0x4e30c4u: goto label_4e30c4;
        case 0x4e30c8u: goto label_4e30c8;
        case 0x4e30ccu: goto label_4e30cc;
        case 0x4e30d0u: goto label_4e30d0;
        case 0x4e30d4u: goto label_4e30d4;
        case 0x4e30d8u: goto label_4e30d8;
        case 0x4e30dcu: goto label_4e30dc;
        case 0x4e30e0u: goto label_4e30e0;
        case 0x4e30e4u: goto label_4e30e4;
        case 0x4e30e8u: goto label_4e30e8;
        case 0x4e30ecu: goto label_4e30ec;
        case 0x4e30f0u: goto label_4e30f0;
        case 0x4e30f4u: goto label_4e30f4;
        case 0x4e30f8u: goto label_4e30f8;
        case 0x4e30fcu: goto label_4e30fc;
        case 0x4e3100u: goto label_4e3100;
        case 0x4e3104u: goto label_4e3104;
        case 0x4e3108u: goto label_4e3108;
        case 0x4e310cu: goto label_4e310c;
        case 0x4e3110u: goto label_4e3110;
        case 0x4e3114u: goto label_4e3114;
        case 0x4e3118u: goto label_4e3118;
        case 0x4e311cu: goto label_4e311c;
        case 0x4e3120u: goto label_4e3120;
        case 0x4e3124u: goto label_4e3124;
        case 0x4e3128u: goto label_4e3128;
        case 0x4e312cu: goto label_4e312c;
        case 0x4e3130u: goto label_4e3130;
        case 0x4e3134u: goto label_4e3134;
        case 0x4e3138u: goto label_4e3138;
        case 0x4e313cu: goto label_4e313c;
        case 0x4e3140u: goto label_4e3140;
        case 0x4e3144u: goto label_4e3144;
        case 0x4e3148u: goto label_4e3148;
        case 0x4e314cu: goto label_4e314c;
        default: break;
    }

    ctx->pc = 0x4e2fb0u;

label_4e2fb0:
    // 0x4e2fb0: 0x5f6e7077  .word       0x5F6E7077                   # bgtzl       $k1, . + 4 + (0x7077 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e2fb4:
    if (ctx->pc == 0x4E2FB4u) {
        ctx->pc = 0x4E2FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2FB0u;
        // 0x4e2fb4: 0x656c6573  daddiu      $t4, $t3, 0x6573 (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25971);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2FB8u;
        goto label_4e2fb8;
    }
    ctx->pc = 0x4E2FB0u;
    {
        const bool branch_taken_0x4e2fb0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e2fb0) {
            ctx->pc = 0x4E2FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2FB0u;
            // 0x4e2fb4: 0x656c6573  daddiu      $t4, $t3, 0x6573 (Delay Slot)
            SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25971);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF190u;
            return;
        }
    }
    ctx->pc = 0x4E2FB8u;
label_4e2fb8:
    // 0x4e2fb8: 0x255f7463  addiu       $ra, $t2, 0x7463
    ctx->pc = 0x4e2fb8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 10), 29795));
label_4e2fbc:
    // 0x4e2fbc: 0x6e702e73  ldr         $s0, 0x2E73($s3)
    ctx->pc = 0x4e2fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 11891); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_4e2fc0:
    // 0x4e2fc0: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2fc0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_4e2fc4:
    // 0x4e2fc4: 0x0  nop
    ctx->pc = 0x4e2fc4u;
    // NOP
label_4e2fc8:
    // 0x4e2fc8: 0x0  nop
    ctx->pc = 0x4e2fc8u;
    // NOP
label_4e2fcc:
    // 0x4e2fcc: 0x0  nop
    ctx->pc = 0x4e2fccu;
    // NOP
label_4e2fd0:
    // 0x4e2fd0: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e2fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e2fd4:
    // 0x4e2fd4: 0x4152465f  .word       0x4152465F                   # INVALID     $t2, $s2, 0x465F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e2fd4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E2FD4 raw=0x4152465F");
label_4e2fd8:
    // 0x4e2fd8: 0x494c4947  .word       0x494C4947                   # INVALID     $t2, $t4, 0x4947 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4e2fd8u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4E2FD8 raw=0x494C4947");
label_4e2fdc:
    // 0x4e2fdc: 0x4554  .word       0x00004554                   # dsllv       $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2fdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_4e2fe0:
    // 0x4e2fe0: 0x0  nop
    ctx->pc = 0x4e2fe0u;
    // NOP
label_4e2fe4:
    // 0x4e2fe4: 0x0  nop
    ctx->pc = 0x4e2fe4u;
    // NOP
label_4e2fe8:
    // 0x4e2fe8: 0x0  nop
    ctx->pc = 0x4e2fe8u;
    // NOP
label_4e2fec:
    // 0x4e2fec: 0x0  nop
    ctx->pc = 0x4e2fecu;
    // NOP
label_4e2ff0:
    // 0x4e2ff0: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e2ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e2ff4:
    // 0x4e2ff4: 0x43414d5f  .word       0x43414D5F                   # INVALID     $k0, $at, 0x4D5F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e2ff4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E2FF4 raw=0x43414D5F");
label_4e2ff8:
    // 0x4e2ff8: 0x4f48  .word       0x00004F48                   # jr          $zero # 00004F40 <InstrIdType: CPU_SPECIAL>
label_4e2ffc:
    if (ctx->pc == 0x4E2FFCu) {
        ctx->pc = 0x4E3000u;
        goto label_4e3000;
    }
    ctx->pc = 0x4E2FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2FF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E3000u;
label_4e3000:
    // 0x4e3000: 0x0  nop
    ctx->pc = 0x4e3000u;
    // NOP
label_4e3004:
    // 0x4e3004: 0x0  nop
    ctx->pc = 0x4e3004u;
    // NOP
label_4e3008:
    // 0x4e3008: 0x0  nop
    ctx->pc = 0x4e3008u;
    // NOP
label_4e300c:
    // 0x4e300c: 0x0  nop
    ctx->pc = 0x4e300cu;
    // NOP
label_4e3010:
    // 0x4e3010: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e3010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e3014:
    // 0x4e3014: 0x4d55485f  .word       0x4D55485F                   # INVALID     $t2, $s5, 0x485F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3014u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3014 raw=0x4D55485F");
label_4e3018:
    // 0x4e3018: 0x52554f  .word       0x0052554F                   # sync.p # 00525000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3018u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4e301c:
    // 0x4e301c: 0x0  nop
    ctx->pc = 0x4e301cu;
    // NOP
label_4e3020:
    // 0x4e3020: 0x0  nop
    ctx->pc = 0x4e3020u;
    // NOP
label_4e3024:
    // 0x4e3024: 0x0  nop
    ctx->pc = 0x4e3024u;
    // NOP
label_4e3028:
    // 0x4e3028: 0x0  nop
    ctx->pc = 0x4e3028u;
    // NOP
label_4e302c:
    // 0x4e302c: 0x0  nop
    ctx->pc = 0x4e302cu;
    // NOP
label_4e3030:
    // 0x4e3030: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e3030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e3034:
    // 0x4e3034: 0x4c55435f  .word       0x4C55435F                   # INVALID     $v0, $s5, 0x435F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3034u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3034 raw=0x4C55435F");
label_4e3038:
    // 0x4e3038: 0x45525554  .word       0x45525554                   # INVALID     $t2, $s2, 0x5554 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e3038u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x14 at 0x4E3038 raw=0x45525554");
label_4e303c:
    // 0x4e303c: 0x0  nop
    ctx->pc = 0x4e303cu;
    // NOP
label_4e3040:
    // 0x4e3040: 0x0  nop
    ctx->pc = 0x4e3040u;
    // NOP
label_4e3044:
    // 0x4e3044: 0x0  nop
    ctx->pc = 0x4e3044u;
    // NOP
label_4e3048:
    // 0x4e3048: 0x0  nop
    ctx->pc = 0x4e3048u;
    // NOP
label_4e304c:
    // 0x4e304c: 0x0  nop
    ctx->pc = 0x4e304cu;
    // NOP
label_4e3050:
    // 0x4e3050: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e3050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e3054:
    // 0x4e3054: 0x5845535f  .word       0x5845535F                   # blezl       $v0, . + 4 + (0x535F << 2) # 00050000 <InstrIdType: CPU_NORMAL>
label_4e3058:
    if (ctx->pc == 0x4E3058u) {
        ctx->pc = 0x4E3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3054u;
        // 0x4e3058: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E3058 raw=0x00000045");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E305Cu;
        goto label_4e305c;
    }
    ctx->pc = 0x4E3054u;
    {
        const bool branch_taken_0x4e3054 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e3054) {
            ctx->pc = 0x4E3058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3054u;
            // 0x4e3058: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E3058 raw=0x00000045");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7DD4u;
            return;
        }
    }
    ctx->pc = 0x4E305Cu;
label_4e305c:
    // 0x4e305c: 0x0  nop
    ctx->pc = 0x4e305cu;
    // NOP
label_4e3060:
    // 0x4e3060: 0x0  nop
    ctx->pc = 0x4e3060u;
    // NOP
label_4e3064:
    // 0x4e3064: 0x0  nop
    ctx->pc = 0x4e3064u;
    // NOP
label_4e3068:
    // 0x4e3068: 0x0  nop
    ctx->pc = 0x4e3068u;
    // NOP
label_4e306c:
    // 0x4e306c: 0x0  nop
    ctx->pc = 0x4e306cu;
    // NOP
label_4e3070:
    // 0x4e3070: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e3070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e3074:
    // 0x4e3074: 0x414c465f  .word       0x414C465F                   # INVALID     $t2, $t4, 0x465F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e3074u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E3074 raw=0x414C465F");
label_4e3078:
    // 0x4e3078: 0x52455454  beql        $s2, $a1, . + 4 + (0x5454 << 2)
label_4e307c:
    if (ctx->pc == 0x4E307Cu) {
        ctx->pc = 0x4E307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3078u;
        // 0x4e307c: 0x4549  .word       0x00004549                   # jalr        $t0, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $8, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3080u;
        goto label_4e3080;
    }
    ctx->pc = 0x4E3078u;
    {
        const bool branch_taken_0x4e3078 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e3078) {
            ctx->pc = 0x4E307Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3078u;
            // 0x4e307c: 0x4549  .word       0x00004549                   # jalr        $t0, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            // JALR $8, $0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F81CCu;
            return;
        }
    }
    ctx->pc = 0x4E3080u;
label_4e3080:
    // 0x4e3080: 0x0  nop
    ctx->pc = 0x4e3080u;
    // NOP
label_4e3084:
    // 0x4e3084: 0x0  nop
    ctx->pc = 0x4e3084u;
    // NOP
label_4e3088:
    // 0x4e3088: 0x0  nop
    ctx->pc = 0x4e3088u;
    // NOP
label_4e308c:
    // 0x4e308c: 0x0  nop
    ctx->pc = 0x4e308cu;
    // NOP
label_4e3090:
    // 0x4e3090: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e3090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e3094:
    // 0x4e3094: 0x5245535f  beql        $s2, $a1, . + 4 + (0x535F << 2)
label_4e3098:
    if (ctx->pc == 0x4E3098u) {
        ctx->pc = 0x4E3098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3094u;
        // 0x4e3098: 0x58554549  .word       0x58554549                   # blezl       $v0, . + 4 + (0x4549 << 2) # 00150000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4E3098 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E309Cu;
        goto label_4e309c;
    }
    ctx->pc = 0x4E3094u;
    {
        const bool branch_taken_0x4e3094 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e3094) {
            ctx->pc = 0x4E3098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3094u;
            // 0x4e3098: 0x58554549  .word       0x58554549                   # blezl       $v0, . + 4 + (0x4549 << 2) # 00150000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E3098 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7E14u;
            return;
        }
    }
    ctx->pc = 0x4E309Cu;
label_4e309c:
    // 0x4e309c: 0x0  nop
    ctx->pc = 0x4e309cu;
    // NOP
label_4e30a0:
    // 0x4e30a0: 0x0  nop
    ctx->pc = 0x4e30a0u;
    // NOP
label_4e30a4:
    // 0x4e30a4: 0x0  nop
    ctx->pc = 0x4e30a4u;
    // NOP
label_4e30a8:
    // 0x4e30a8: 0x0  nop
    ctx->pc = 0x4e30a8u;
    // NOP
label_4e30ac:
    // 0x4e30ac: 0x0  nop
    ctx->pc = 0x4e30acu;
    // NOP
label_4e30b0:
    // 0x4e30b0: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e30b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e30b4:
    // 0x4e30b4: 0x57454e5f  bnel        $k0, $a1, . + 4 + (0x4E5F << 2)
label_4e30b8:
    if (ctx->pc == 0x4E30B8u) {
        ctx->pc = 0x4E30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E30B4u;
        // 0x4e30b8: 0x454741  .word       0x00454741                   # INVALID     $v0, $a1, 0x4741 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E30B8 raw=0x00454741");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E30BCu;
        goto label_4e30bc;
    }
    ctx->pc = 0x4E30B4u;
    {
        const bool branch_taken_0x4e30b4 = (GPR_U64(ctx, 26) != GPR_U64(ctx, 5));
        if (branch_taken_0x4e30b4) {
            ctx->pc = 0x4E30B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E30B4u;
            // 0x4e30b8: 0x454741  .word       0x00454741                   # INVALID     $v0, $a1, 0x4741 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E30B8 raw=0x00454741");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6A34u;
            return;
        }
    }
    ctx->pc = 0x4E30BCu;
label_4e30bc:
    // 0x4e30bc: 0x0  nop
    ctx->pc = 0x4e30bcu;
    // NOP
label_4e30c0:
    // 0x4e30c0: 0x0  nop
    ctx->pc = 0x4e30c0u;
    // NOP
label_4e30c4:
    // 0x4e30c4: 0x0  nop
    ctx->pc = 0x4e30c4u;
    // NOP
label_4e30c8:
    // 0x4e30c8: 0x0  nop
    ctx->pc = 0x4e30c8u;
    // NOP
label_4e30cc:
    // 0x4e30cc: 0x0  nop
    ctx->pc = 0x4e30ccu;
    // NOP
label_4e30d0:
    // 0x4e30d0: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e30d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e30d4:
    // 0x4e30d4: 0x4752415f  .word       0x4752415F                   # INVALID     $k0, $s2, 0x415F # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e30d4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x1F at 0x4E30D4 raw=0x4752415F");
label_4e30d8:
    // 0x4e30d8: 0x544e45  .word       0x00544E45                   # INVALID     $v0, $s4, 0x4E45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e30d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E30D8 raw=0x00544E45");
label_4e30dc:
    // 0x4e30dc: 0x0  nop
    ctx->pc = 0x4e30dcu;
    // NOP
label_4e30e0:
    // 0x4e30e0: 0x0  nop
    ctx->pc = 0x4e30e0u;
    // NOP
label_4e30e4:
    // 0x4e30e4: 0x0  nop
    ctx->pc = 0x4e30e4u;
    // NOP
label_4e30e8:
    // 0x4e30e8: 0x0  nop
    ctx->pc = 0x4e30e8u;
    // NOP
label_4e30ec:
    // 0x4e30ec: 0x0  nop
    ctx->pc = 0x4e30ecu;
    // NOP
label_4e30f0:
    // 0x4e30f0: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e30f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e30f4:
    // 0x4e30f4: 0x4f52445f  .word       0x4F52445F                   # INVALID     $k0, $s2, 0x445F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e30f4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E30F4 raw=0x4F52445F");
label_4e30f8:
    // 0x4e30f8: 0x455547  .word       0x00455547                   # srav        $t2, $a1, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e30f8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_4e30fc:
    // 0x4e30fc: 0x0  nop
    ctx->pc = 0x4e30fcu;
    // NOP
label_4e3100:
    // 0x4e3100: 0x0  nop
    ctx->pc = 0x4e3100u;
    // NOP
label_4e3104:
    // 0x4e3104: 0x0  nop
    ctx->pc = 0x4e3104u;
    // NOP
label_4e3108:
    // 0x4e3108: 0x0  nop
    ctx->pc = 0x4e3108u;
    // NOP
label_4e310c:
    // 0x4e310c: 0x0  nop
    ctx->pc = 0x4e310cu;
    // NOP
label_4e3110:
    // 0x4e3110: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e3110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e3114:
    // 0x4e3114: 0x54454a5f  bnel        $v0, $a1, . + 4 + (0x4A5F << 2)
label_4e3118:
    if (ctx->pc == 0x4E3118u) {
        ctx->pc = 0x4E3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3114u;
        // 0x4e3118: 0x544553  .word       0x00544553                   # mtlo        $v0 # 00144540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->lo = GPR_U64(ctx, 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E311Cu;
        goto label_4e311c;
    }
    ctx->pc = 0x4E3114u;
    {
        const bool branch_taken_0x4e3114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4e3114) {
            ctx->pc = 0x4E3118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3114u;
            // 0x4e3118: 0x544553  .word       0x00544553                   # mtlo        $v0 # 00144540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            ctx->lo = GPR_U64(ctx, 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5A94u;
            return;
        }
    }
    ctx->pc = 0x4E311Cu;
label_4e311c:
    // 0x4e311c: 0x0  nop
    ctx->pc = 0x4e311cu;
    // NOP
label_4e3120:
    // 0x4e3120: 0x0  nop
    ctx->pc = 0x4e3120u;
    // NOP
label_4e3124:
    // 0x4e3124: 0x0  nop
    ctx->pc = 0x4e3124u;
    // NOP
label_4e3128:
    // 0x4e3128: 0x0  nop
    ctx->pc = 0x4e3128u;
    // NOP
label_4e312c:
    // 0x4e312c: 0x0  nop
    ctx->pc = 0x4e312cu;
    // NOP
label_4e3130:
    // 0x4e3130: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e3130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e3134:
    // 0x4e3134: 0x4e4f4e5f  .word       0x4E4F4E5F                   # INVALID     $s2, $t7, 0x4E5F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3134u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3134 raw=0x4E4F4E5F");
label_4e3138:
    // 0x4e3138: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3138u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E3138 raw=0x00000045");
label_4e313c:
    // 0x4e313c: 0x0  nop
    ctx->pc = 0x4e313cu;
    // NOP
label_4e3140:
    // 0x4e3140: 0x0  nop
    ctx->pc = 0x4e3140u;
    // NOP
label_4e3144:
    // 0x4e3144: 0x0  nop
    ctx->pc = 0x4e3144u;
    // NOP
label_4e3148:
    // 0x4e3148: 0x0  nop
    ctx->pc = 0x4e3148u;
    // NOP
label_4e314c:
    // 0x4e314c: 0x0  nop
    ctx->pc = 0x4e314cu;
    // NOP
    ctx->pc = 0x4e3150u;
}
