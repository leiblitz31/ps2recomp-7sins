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

// Function: sub_0030D428
// Address: 0x30d428 - 0x30dc90
void sub_0030D428_0x30d428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D428_0x30d428");
#endif

    switch (ctx->pc) {
        case 0x30d4c0u: goto label_30d4c0;
        case 0x30d500u: goto label_30d500;
        case 0x30d520u: goto label_30d520;
        case 0x30d55cu: goto label_30d55c;
        case 0x30d590u: goto label_30d590;
        case 0x30d5d8u: goto label_30d5d8;
        case 0x30d5f0u: goto label_30d5f0;
        case 0x30d6a0u: goto label_30d6a0;
        case 0x30d744u: goto label_30d744;
        case 0x30d770u: goto label_30d770;
        case 0x30d7b8u: goto label_30d7b8;
        case 0x30d820u: goto label_30d820;
        case 0x30d848u: goto label_30d848;
        case 0x30d8c0u: goto label_30d8c0;
        case 0x30d8f0u: goto label_30d8f0;
        case 0x30d970u: goto label_30d970;
        case 0x30d990u: goto label_30d990;
        case 0x30d9d8u: goto label_30d9d8;
        case 0x30da00u: goto label_30da00;
        case 0x30daa8u: goto label_30daa8;
        case 0x30daf0u: goto label_30daf0;
        case 0x30db30u: goto label_30db30;
        case 0x30db78u: goto label_30db78;
        case 0x30dbc0u: goto label_30dbc0;
        case 0x30dc08u: goto label_30dc08;
        default: break;
    }

    ctx->pc = 0x30d428u;

    // 0x30d428: 0x24c2fffd  addiu       $v0, $a2, -0x3
    ctx->pc = 0x30d428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x30d42c: 0x24ca0004  addiu       $t2, $a2, 0x4
    ctx->pc = 0x30d42cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x30d430: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x30d430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30d434: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x30d434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x30d438: 0x143100b  movn        $v0, $t2, $v1
    ctx->pc = 0x30d438u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
    // 0x30d43c: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x30d43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x30d440: 0x2b8c3  sra         $s7, $v0, 3
    ctx->pc = 0x30d440u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 3));
    // 0x30d444: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x30d444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x30d448: 0x2ae20000  slti        $v0, $s7, 0x0
    ctx->pc = 0x30d448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30d44c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x30d44cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x30d450: 0x2b80b  movn        $s7, $zero, $v0
    ctx->pc = 0x30d450u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
    // 0x30d454: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x30d454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x30d458: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x30d458u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x30d45c: 0x288a021  addu        $s4, $s4, $t0
    ctx->pc = 0x30d45cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x30d460: 0x8e94b488  lw          $s4, -0x4B78($s4)
    ctx->pc = 0x30d460u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947976)));
    // 0x30d464: 0x1710c0  sll         $v0, $s7, 3
    ctx->pc = 0x30d464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x30d468: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x30d468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x30d46c: 0x24f2ffff  addiu       $s2, $a3, -0x1
    ctx->pc = 0x30d46cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x30d470: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x30d470u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x30d474: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x30d474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x30d478: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x30d478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x30d47c: 0x24d1fff8  addiu       $s1, $a2, -0x8
    ctx->pc = 0x30d47cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x30d480: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x30d480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x30d484: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x30d484u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d488: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x30d488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x30d48c: 0x2f22823  subu        $a1, $s7, $s2
    ctx->pc = 0x30d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x30d490: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x30d490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x30d494: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x30d494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x30d498: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x30d498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x30d49c: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x30d49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x30d4a0: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x30d4a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x30d4a4: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x30d4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x30d4a8: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x30D4A8u;
    {
        const bool branch_taken_0x30d4a8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x30D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4A8u;
        // 0x30d4ac: 0xafa90148  sw          $t1, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d4a8) {
            ctx->pc = 0x30D4E8u;
            goto label_30d4e8;
        }
    }
    ctx->pc = 0x30D4B0u;
    // 0x30d4b0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x30d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30d4b4: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x30d4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30d4b8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x30d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x30d4bc: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x30d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_30d4c0:
    // 0x30d4c0: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D4C0u;
    {
        const bool branch_taken_0x30d4c0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x30d4c0) {
            ctx->pc = 0x30D4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D4C0u;
            // 0x30d4c4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D4D4u;
            goto label_30d4d4;
        }
    }
    ctx->pc = 0x30D4C8u;
    // 0x30d4c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30d4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30d4cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30d4ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30d4d0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30d4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_30d4d4:
    // 0x30d4d4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30d4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30d4d8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x30d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x30d4dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30d4e0: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x30D4E0u;
    {
        const bool branch_taken_0x30d4e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4E0u;
        // 0x30d4e4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d4e0) {
            ctx->pc = 0x30D4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d4c0;
        }
    }
    ctx->pc = 0x30D4E8u;
label_30d4e8:
    // 0x30d4e8: 0x680001b  bltz        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x30D4E8u;
    {
        const bool branch_taken_0x30d4e8 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x30D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4E8u;
        // 0x30d4ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d4e8) {
            ctx->pc = 0x30D558u;
            goto label_30d558;
        }
    }
    ctx->pc = 0x30D4F0u;
    // 0x30d4f0: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x30d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30d4f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30d4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d4f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x30d4f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d4fc: 0x0  nop
    ctx->pc = 0x30d4fcu;
    // NOP
label_30d500:
    // 0x30d500: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x30d500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30d504: 0x642000f  bltzl       $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x30D504u;
    {
        const bool branch_taken_0x30d504 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x30d504) {
            ctx->pc = 0x30D508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D504u;
            // 0x30d508: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D544u;
            goto label_30d544;
        }
    }
    ctx->pc = 0x30D50Cu;
    // 0x30d50c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x30d50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30d510: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x30d510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30d514: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x30d514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x30d518: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30d51c: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x30d51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_30d520:
    // 0x30d520: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x30d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30d524: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x30d524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x30d528: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x30d528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30d52c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x30d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x30d530: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x30d530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30d534: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30d534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30d538: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x30D538u;
    {
        const bool branch_taken_0x30d538 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D538u;
        // 0x30d53c: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d538) {
            ctx->pc = 0x30D520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d520;
        }
    }
    ctx->pc = 0x30D540u;
    // 0x30d540: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30d540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_30d544:
    // 0x30d544: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x30d544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x30d548: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x30d548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30d54c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30d54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30d550: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x30D550u;
    {
        const bool branch_taken_0x30d550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D550u;
        // 0x30d554: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d550) {
            ctx->pc = 0x30D500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d500;
        }
    }
    ctx->pc = 0x30D558u;
label_30d558:
    // 0x30d558: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x30d558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30d55c:
    // 0x30d55c: 0x109880  sll         $s3, $s0, 2
    ctx->pc = 0x30d55cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30d560: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x30d560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30d564: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x30d564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x30d568: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30d568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d56c: 0x1a000017  blez        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x30D56Cu;
    {
        const bool branch_taken_0x30d56c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x30D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D56Cu;
        // 0x30d570: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d56c) {
            ctx->pc = 0x30D5CCu;
            goto label_30d5cc;
        }
    }
    ctx->pc = 0x30D574u;
    // 0x30d574: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x30d574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x30d578: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x30d578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30d57c: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x30d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x30d580: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x30d580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x30d584: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30d584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30d588: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30d588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d58c: 0x0  nop
    ctx->pc = 0x30d58cu;
    // NOP
label_30d590:
    // 0x30d590: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x30d590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x30d594: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x30d594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30d598: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x30d598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30d59c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x30d59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x30d5a0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d5a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30d5a4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x30d5a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30d5a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30d5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30d5ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30d5acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30d5b0: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x30d5b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x30d5b4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x30d5b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x30d5b8: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x30d5b8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30d5bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d5bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30d5c0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x30d5c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x30d5c4: 0x1ca0fff2  bgtz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x30D5C4u;
    {
        const bool branch_taken_0x30d5c4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x30D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5C4u;
        // 0x30d5c8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d5c4) {
            ctx->pc = 0x30D590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d590;
        }
    }
    ctx->pc = 0x30D5CCu;
label_30d5cc:
    // 0x30d5cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30d5ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30d5d0: 0xc0bc268  jal         func_2F09A0
    ctx->pc = 0x30D5D0u;
    SET_GPR_U32(ctx, 31, 0x30D5D8u);
    ctx->pc = 0x30D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5D0u;
    // 0x30d5d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F09A0u, 0x30D5D0u, 0x30D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5D8u;
label_30d5d8:
    // 0x30d5d8: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x30d5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x30d5dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30d5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30d5e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30d5e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x30d5e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x30d5e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d5e8: 0xc0c3930  jal         func_30E4C0
    ctx->pc = 0x30D5E8u;
    SET_GPR_U32(ctx, 31, 0x30D5F0u);
    ctx->pc = 0x30D5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5E8u;
    // 0x30d5ec: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E4C0u, 0x30D5E8u, 0x30D5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5F0u;
label_30d5f0:
    // 0x30d5f0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x30d5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x30d5f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30d5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30d5f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30d5f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30d5fc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x30d5fcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x30d600: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d600u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30d604: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x30d604u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x30d608: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x30d608u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d60c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30d60cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30d610: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x30D610u;
    {
        const bool branch_taken_0x30d610 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x30D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D610u;
        // 0x30d614: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d610) {
            ctx->pc = 0x30D650u;
            goto label_30d650;
        }
    }
    ctx->pc = 0x30D618u;
    // 0x30d618: 0x2663fffc  addiu       $v1, $s3, -0x4
    ctx->pc = 0x30d618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x30d61c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x30d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30d620: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x30d620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x30d624: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x30d624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30d628: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30d628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30d62c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x30d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30d630: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x30d630u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x30d634: 0x433007  srav        $a2, $v1, $v0
    ctx->pc = 0x30d634u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x30d638: 0x461004  sllv        $v0, $a2, $v0
    ctx->pc = 0x30d638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x30d63c: 0x2a6a821  addu        $s5, $s5, $a2
    ctx->pc = 0x30d63cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x30d640: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x30d640u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30d644: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x30d644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x30d648: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30D648u;
    {
        const bool branch_taken_0x30d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D648u;
        // 0x30d64c: 0x83b007  srav        $s6, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d648) {
            ctx->pc = 0x30D67Cu;
            goto label_30d67c;
        }
    }
    ctx->pc = 0x30D650u;
label_30d650:
    // 0x30d650: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D650u;
    {
        const bool branch_taken_0x30d650 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D650u;
        // 0x30d654: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d650) {
            ctx->pc = 0x30D668u;
            goto label_30d668;
        }
    }
    ctx->pc = 0x30D658u;
    // 0x30d658: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x30d658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x30d65c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30D65Cu;
    {
        const bool branch_taken_0x30d65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D65Cu;
        // 0x30d660: 0x3b203  sra         $s6, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d65c) {
            ctx->pc = 0x30D67Cu;
            goto label_30d67c;
        }
    }
    ctx->pc = 0x30D664u;
    // 0x30d664: 0x0  nop
    ctx->pc = 0x30d664u;
    // NOP
label_30d668:
    // 0x30d668: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30d668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30d66c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30d66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d670: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x30d670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30d674: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30D674u;
    {
        const bool branch_taken_0x30d674 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30d674) {
            ctx->pc = 0x30D678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D674u;
            // 0x30d678: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D67Cu;
            goto label_30d67c;
        }
    }
    ctx->pc = 0x30D67Cu;
label_30d67c:
    // 0x30d67c: 0x1ac00032  blez        $s6, . + 4 + (0x32 << 2)
    ctx->pc = 0x30D67Cu;
    {
        const bool branch_taken_0x30d67c = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x30d67c) {
            ctx->pc = 0x30D748u;
            goto label_30d748;
        }
    }
    ctx->pc = 0x30D684u;
    // 0x30d684: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x30d684u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x30d688: 0x1a000012  blez        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30D688u;
    {
        const bool branch_taken_0x30d688 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x30D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D688u;
        // 0x30d68c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d688) {
            ctx->pc = 0x30D6D4u;
            goto label_30d6d4;
        }
    }
    ctx->pc = 0x30D690u;
    // 0x30d690: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30d690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30d694: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x30d694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30d698: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x30d698u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d69c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30d69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30d6a0:
    // 0x30d6a0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D6A0u;
    {
        const bool branch_taken_0x30d6a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6A0u;
        // 0x30d6a4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6a0) {
            ctx->pc = 0x30D6B8u;
            goto label_30d6b8;
        }
    }
    ctx->pc = 0x30D6A8u;
    // 0x30d6a8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D6A8u;
    {
        const bool branch_taken_0x30d6a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6A8u;
        // 0x30d6ac: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6a8) {
            ctx->pc = 0x30D6C0u;
            goto label_30d6c0;
        }
    }
    ctx->pc = 0x30D6B0u;
    // 0x30d6b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30D6B0u;
    {
        const bool branch_taken_0x30d6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6B0u;
        // 0x30d6b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6b0) {
            ctx->pc = 0x30D6BCu;
            goto label_30d6bc;
        }
    }
    ctx->pc = 0x30D6B8u;
label_30d6b8:
    // 0x30d6b8: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x30d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_30d6bc:
    // 0x30d6bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30d6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_30d6c0:
    // 0x30d6c0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30d6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30d6c4: 0x0  nop
    ctx->pc = 0x30d6c4u;
    // NOP
    // 0x30d6c8: 0x0  nop
    ctx->pc = 0x30d6c8u;
    // NOP
    // 0x30d6cc: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x30D6CCu;
    {
        const bool branch_taken_0x30d6cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6CCu;
        // 0x30d6d0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6cc) {
            ctx->pc = 0x30D6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d6a0;
        }
    }
    ctx->pc = 0x30D6D4u;
label_30d6d4:
    // 0x30d6d4: 0x1a200013  blez        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30D6D4u;
    {
        const bool branch_taken_0x30d6d4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x30D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6D4u;
        // 0x30d6d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6d4) {
            ctx->pc = 0x30D724u;
            goto label_30d724;
        }
    }
    ctx->pc = 0x30D6DCu;
    // 0x30d6dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d6e0: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D6E0u;
    {
        const bool branch_taken_0x30d6e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x30D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6E0u;
        // 0x30d6e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6e0) {
            ctx->pc = 0x30D6F8u;
            goto label_30d6f8;
        }
    }
    ctx->pc = 0x30D6E8u;
    // 0x30d6e8: 0x52220009  beql        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30D6E8u;
    {
        const bool branch_taken_0x30d6e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x30d6e8) {
            ctx->pc = 0x30D6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D6E8u;
            // 0x30d6ec: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D710u;
            goto label_30d710;
        }
    }
    ctx->pc = 0x30D6F0u;
    // 0x30d6f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30D6F0u;
    {
        const bool branch_taken_0x30d6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d6f0) {
            ctx->pc = 0x30D724u;
            goto label_30d724;
        }
    }
    ctx->pc = 0x30D6F8u;
label_30d6f8:
    // 0x30d6f8: 0x2662fffc  addiu       $v0, $s3, -0x4
    ctx->pc = 0x30d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x30d6fc: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x30d6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x30d700: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x30d700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d704: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30D704u;
    {
        const bool branch_taken_0x30d704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D704u;
        // 0x30d708: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d704) {
            ctx->pc = 0x30D71Cu;
            goto label_30d71c;
        }
    }
    ctx->pc = 0x30D70Cu;
    // 0x30d70c: 0x0  nop
    ctx->pc = 0x30d70cu;
    // NOP
label_30d710:
    // 0x30d710: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x30d710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x30d714: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x30d714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d718: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x30d718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_30d71c:
    // 0x30d71c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x30d71cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x30d720: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30d720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30d724:
    // 0x30d724: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30D724u;
    {
        const bool branch_taken_0x30d724 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x30d724) {
            ctx->pc = 0x30D748u;
            goto label_30d748;
        }
    }
    ctx->pc = 0x30D72Cu;
    // 0x30d72c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30d72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30d730: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30d730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30d734: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D734u;
    {
        const bool branch_taken_0x30d734 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D734u;
        // 0x30d738: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d734) {
            ctx->pc = 0x30D748u;
            goto label_30d748;
        }
    }
    ctx->pc = 0x30D73Cu;
    // 0x30d73c: 0xc0bc268  jal         func_2F09A0
    ctx->pc = 0x30D73Cu;
    SET_GPR_U32(ctx, 31, 0x30D744u);
    ctx->pc = 0x30D740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D73Cu;
    // 0x30d740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F09A0u, 0x30D73Cu, 0x30D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D744u;
label_30d744:
    // 0x30d744: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x30d744u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_30d748:
    // 0x30d748: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30d748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d74c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x30d74cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30d750: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x30D750u;
    {
        const bool branch_taken_0x30d750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D750u;
        // 0x30d754: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d750) {
            ctx->pc = 0x30D898u;
            goto label_30d898;
        }
    }
    ctx->pc = 0x30D758u;
    // 0x30d758: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x30d758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x30d75c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30D75Cu;
    {
        const bool branch_taken_0x30d75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D75Cu;
        // 0x30d760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d75c) {
            ctx->pc = 0x30D78Cu;
            goto label_30d78c;
        }
    }
    ctx->pc = 0x30D764u;
    // 0x30d764: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x30d764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30d768: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x30d768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x30d76c: 0x0  nop
    ctx->pc = 0x30d76cu;
    // NOP
label_30d770:
    // 0x30d770: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x30d770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d774: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x30d774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x30d778: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30d778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30d77c: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x30d77cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x30d780: 0x0  nop
    ctx->pc = 0x30d780u;
    // NOP
    // 0x30d784: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30D784u;
    {
        const bool branch_taken_0x30d784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D784u;
        // 0x30d788: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d784) {
            ctx->pc = 0x30D770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d770;
        }
    }
    ctx->pc = 0x30D78Cu;
label_30d78c:
    // 0x30d78c: 0x14a00040  bnez        $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x30D78Cu;
    {
        const bool branch_taken_0x30d78c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D78Cu;
        // 0x30d790: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d78c) {
            ctx->pc = 0x30D890u;
            goto label_30d890;
        }
    }
    ctx->pc = 0x30D794u;
    // 0x30d794: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30d794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30d798: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x30d798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x30d79c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d7a0: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x30D7A0u;
    {
        const bool branch_taken_0x30d7a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D7A0u;
        // 0x30d7a4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d7a0) {
            ctx->pc = 0x30D7D4u;
            goto label_30d7d4;
        }
    }
    ctx->pc = 0x30D7A8u;
    // 0x30d7a8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x30d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x30d7ac: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x30d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x30d7b0: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x30d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x30d7b4: 0x0  nop
    ctx->pc = 0x30d7b4u;
    // NOP
label_30d7b8:
    // 0x30d7b8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x30d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x30d7bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d7c0: 0x0  nop
    ctx->pc = 0x30d7c0u;
    // NOP
    // 0x30d7c4: 0x0  nop
    ctx->pc = 0x30d7c4u;
    // NOP
    // 0x30d7c8: 0x0  nop
    ctx->pc = 0x30d7c8u;
    // NOP
    // 0x30d7cc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30D7CCu;
    {
        const bool branch_taken_0x30d7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D7CCu;
        // 0x30d7d0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d7cc) {
            ctx->pc = 0x30D7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d7b8;
        }
    }
    ctx->pc = 0x30D7D4u;
label_30d7d4:
    // 0x30d7d4: 0x2084821  addu        $t1, $s0, $t0
    ctx->pc = 0x30d7d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x30d7d8: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x30d7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30d7dc: 0x126102a  slt         $v0, $t1, $a2
    ctx->pc = 0x30d7dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30d7e0: 0x1440ff5e  bnez        $v0, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x30D7E0u;
    {
        const bool branch_taken_0x30d7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D7E0u;
        // 0x30d7e4: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d7e0) {
            ctx->pc = 0x30D55Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d55c;
        }
    }
    ctx->pc = 0x30D7E8u;
    // 0x30d7e8: 0x8fab0148  lw          $t3, 0x148($sp)
    ctx->pc = 0x30d7e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x30d7ec: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x30d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x30d7f0: 0x2e62021  addu        $a0, $s7, $a2
    ctx->pc = 0x30d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x30d7f4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x30d7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30d7f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30d7fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30d800: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x30d800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30d804: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x30d804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30d808: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x30d808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x30d80c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x30d80cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d810: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x30d810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x30d814: 0x454021  addu        $t0, $v0, $a1
    ctx->pc = 0x30d814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30d818: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x30d818u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d81c: 0x0  nop
    ctx->pc = 0x30d81cu;
    // NOP
label_30d820:
    // 0x30d820: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x30d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30d824: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30d824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30d828: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x30d828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x30d82c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x30d82cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30d830: 0x640000d  bltz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x30D830u;
    {
        const bool branch_taken_0x30d830 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x30D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D830u;
        // 0x30d834: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d830) {
            ctx->pc = 0x30D868u;
            goto label_30d868;
        }
    }
    ctx->pc = 0x30D838u;
    // 0x30d838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30d838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30d83c: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x30d83cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x30d840: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x30d840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x30d844: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x30d844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_30d848:
    // 0x30d848: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30d848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30d84c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x30d84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x30d850: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x30d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30d854: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x30d854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x30d858: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x30d858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30d85c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30d85cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30d860: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x30D860u;
    {
        const bool branch_taken_0x30d860 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D860u;
        // 0x30d864: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d860) {
            ctx->pc = 0x30D848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d848;
        }
    }
    ctx->pc = 0x30D868u;
label_30d868:
    // 0x30d868: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30d868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30d86c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x30d86cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x30d870: 0x146102a  slt         $v0, $t2, $a2
    ctx->pc = 0x30d870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30d874: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x30d874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x30d878: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x30d878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x30d87c: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x30D87Cu;
    {
        const bool branch_taken_0x30d87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D87Cu;
        // 0x30d880: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d87c) {
            ctx->pc = 0x30D820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d820;
        }
    }
    ctx->pc = 0x30D884u;
    // 0x30d884: 0x1000ff35  b           . + 4 + (-0xCB << 2)
    ctx->pc = 0x30D884u;
    {
        const bool branch_taken_0x30d884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D884u;
        // 0x30d888: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d884) {
            ctx->pc = 0x30D55Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d55c;
        }
    }
    ctx->pc = 0x30D88Cu;
    // 0x30d88c: 0x0  nop
    ctx->pc = 0x30d88cu;
    // NOP
label_30d890:
    // 0x30d890: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30d890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d894: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x30d894u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30d898:
    // 0x30d898: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x30D898u;
    {
        const bool branch_taken_0x30d898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D898u;
        // 0x30d89c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d898) {
            ctx->pc = 0x30D8E8u;
            goto label_30d8e8;
        }
    }
    ctx->pc = 0x30D8A0u;
    // 0x30d8a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x30d8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x30d8a4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x30d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30d8a8: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x30d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x30d8ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30d8b0: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x30D8B0u;
    {
        const bool branch_taken_0x30d8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8B0u;
        // 0x30d8b4: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8b0) {
            ctx->pc = 0x30D960u;
            goto label_30d960;
        }
    }
    ctx->pc = 0x30D8B8u;
    // 0x30d8b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30d8b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d8bc: 0x0  nop
    ctx->pc = 0x30d8bcu;
    // NOP
label_30d8c0:
    // 0x30d8c0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x30d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x30d8c4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x30d8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x30d8c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d8cc: 0x0  nop
    ctx->pc = 0x30d8ccu;
    // NOP
    // 0x30d8d0: 0x0  nop
    ctx->pc = 0x30d8d0u;
    // NOP
    // 0x30d8d4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30D8D4u;
    {
        const bool branch_taken_0x30d8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8D4u;
        // 0x30d8d8: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8d4) {
            ctx->pc = 0x30D8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d8c0;
        }
    }
    ctx->pc = 0x30D8DCu;
    // 0x30d8dc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x30D8DCu;
    {
        const bool branch_taken_0x30d8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d8dc) {
            ctx->pc = 0x30D960u;
            goto label_30d960;
        }
    }
    ctx->pc = 0x30D8E4u;
    // 0x30d8e4: 0x0  nop
    ctx->pc = 0x30d8e4u;
    // NOP
label_30d8e8:
    // 0x30d8e8: 0xc0bc268  jal         func_2F09A0
    ctx->pc = 0x30D8E8u;
    SET_GPR_U32(ctx, 31, 0x30D8F0u);
    ctx->pc = 0x30D8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D8E8u;
    // 0x30d8ec: 0x112023  negu        $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F09A0u, 0x30D8E8u, 0x30D8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D8F0u;
label_30d8f0:
    // 0x30d8f0: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x30d8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x30d8f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30d8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30d8f8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30d8f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x30d8fc: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x30d8fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30d900: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x30D900u;
    {
        const bool branch_taken_0x30d900 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D900u;
        // 0x30d904: 0x3b31021  addu        $v0, $sp, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d900) {
            ctx->pc = 0x30D958u;
            goto label_30d958;
        }
    }
    ctx->pc = 0x30D908u;
    // 0x30d908: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x30d908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x30d90c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30d90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d910: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30d910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30d914: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x30d914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30d918: 0x3b32021  addu        $a0, $sp, $s3
    ctx->pc = 0x30d918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
    // 0x30d91c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x30d91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x30d920: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x30d920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x30d924: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d924u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30d928: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x30d928u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30d92c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30d92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30d930: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30d930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30d934: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x30d934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30d938: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x30d938u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x30d93c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d93cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30d940: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x30d940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x30d944: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d944u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30d948: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30d948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x30d94c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30D94Cu;
    {
        const bool branch_taken_0x30d94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D94Cu;
        // 0x30d950: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d94c) {
            ctx->pc = 0x30D960u;
            goto label_30d960;
        }
    }
    ctx->pc = 0x30D954u;
    // 0x30d954: 0x0  nop
    ctx->pc = 0x30d954u;
    // NOP
label_30d958:
    // 0x30d958: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30d958u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30d95c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x30d95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_30d960:
    // 0x30d960: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30d960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30d964: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30d964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30d968: 0xc0bc268  jal         func_2F09A0
    ctx->pc = 0x30D968u;
    SET_GPR_U32(ctx, 31, 0x30D970u);
    ctx->pc = 0x30D96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D968u;
    // 0x30d96c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F09A0u, 0x30D968u, 0x30D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D970u;
label_30d970:
    // 0x30d970: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30d970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d974: 0x4c00011  bltz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x30D974u;
    {
        const bool branch_taken_0x30d974 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x30D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D974u;
        // 0x30d978: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d974) {
            ctx->pc = 0x30D9BCu;
            goto label_30d9bc;
        }
    }
    ctx->pc = 0x30D97Cu;
    // 0x30d97c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x30d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30d980: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x30d980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x30d984: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30d984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30d988: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30d988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d98c: 0x0  nop
    ctx->pc = 0x30d98cu;
    // NOP
label_30d990:
    // 0x30d990: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x30d990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30d994: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30d994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30d998: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x30d998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x30d99c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x30d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30d9a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x30d9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30d9a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30d9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30d9a8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30d9a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30d9ac: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x30d9acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30d9b0: 0x4c1fff7  bgez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x30D9B0u;
    {
        const bool branch_taken_0x30d9b0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x30D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9B0u;
        // 0x30d9b4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d9b0) {
            ctx->pc = 0x30D990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d990;
        }
    }
    ctx->pc = 0x30D9B8u;
    // 0x30d9b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30d9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30d9bc:
    // 0x30d9bc: 0x4c00024  bltz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x30D9BCu;
    {
        const bool branch_taken_0x30d9bc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x30D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9BCu;
        // 0x30d9c0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d9bc) {
            ctx->pc = 0x30DA50u;
            goto label_30da50;
        }
    }
    ctx->pc = 0x30D9C4u;
    // 0x30d9c4: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x30d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30d9c8: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x30d9c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9cc: 0x244cb498  addiu       $t4, $v0, -0x4B68
    ctx->pc = 0x30d9ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947992));
    // 0x30d9d0: 0x27ab00a0  addiu       $t3, $sp, 0xA0
    ctx->pc = 0x30d9d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30d9d4: 0x0  nop
    ctx->pc = 0x30d9d4u;
    // NOP
label_30d9d8:
    // 0x30d9d8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x30d9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30d9dc: 0x6800016  bltz        $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x30D9DCu;
    {
        const bool branch_taken_0x30d9dc = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x30D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9DCu;
        // 0x30d9e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d9dc) {
            ctx->pc = 0x30DA38u;
            goto label_30da38;
        }
    }
    ctx->pc = 0x30D9E4u;
    // 0x30d9e4: 0x2063823  subu        $a3, $s0, $a2
    ctx->pc = 0x30d9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x30d9e8: 0x4e00014  bltz        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x30D9E8u;
    {
        const bool branch_taken_0x30d9e8 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x30D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9E8u;
        // 0x30d9ec: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d9e8) {
            ctx->pc = 0x30DA3Cu;
            goto label_30da3c;
        }
    }
    ctx->pc = 0x30D9F0u;
    // 0x30d9f0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x30d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30d9f4: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x30d9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9f8: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x30d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x30d9fc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x30d9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30da00:
    // 0x30da00: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x30da00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x30da04: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x30da04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30da08: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x30da08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x30da0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x30da0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x30da10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30da10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30da14: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x30da14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x30da18: 0x128182a  slt         $v1, $t1, $t0
    ctx->pc = 0x30da18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x30da1c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30DA1Cu;
    {
        const bool branch_taken_0x30da1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA1Cu;
        // 0x30da20: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da1c) {
            ctx->pc = 0x30DA3Cu;
            goto label_30da3c;
        }
    }
    ctx->pc = 0x30DA24u;
    // 0x30da24: 0x5060fff6  beql        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x30DA24u;
    {
        const bool branch_taken_0x30da24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30da24) {
            ctx->pc = 0x30DA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30DA24u;
            // 0x30da28: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30da00;
        }
    }
    ctx->pc = 0x30DA2Cu;
    // 0x30da2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30DA2Cu;
    {
        const bool branch_taken_0x30da2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA2Cu;
        // 0x30da30: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da2c) {
            ctx->pc = 0x30DA40u;
            goto label_30da40;
        }
    }
    ctx->pc = 0x30DA34u;
    // 0x30da34: 0x0  nop
    ctx->pc = 0x30da34u;
    // NOP
label_30da38:
    // 0x30da38: 0x2063823  subu        $a3, $s0, $a2
    ctx->pc = 0x30da38u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_30da3c:
    // 0x30da3c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x30da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_30da40:
    // 0x30da40: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30da40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30da44: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x30da44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x30da48: 0x4c1ffe3  bgez        $a2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x30DA48u;
    {
        const bool branch_taken_0x30da48 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x30DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA48u;
        // 0x30da4c: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da48) {
            ctx->pc = 0x30D9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d9d8;
        }
    }
    ctx->pc = 0x30DA50u;
label_30da50:
    // 0x30da50: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x30da50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x30da54: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x30da54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x30da58: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x30DA58u;
    {
        const bool branch_taken_0x30da58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30da58) {
            ctx->pc = 0x30DA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30DA58u;
            // 0x30da5c: 0x8fa60144  lw          $a2, 0x144($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DA78u;
            goto label_30da78;
        }
    }
    ctx->pc = 0x30DA60u;
    // 0x30da60: 0x5ca0001d  bgtzl       $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x30DA60u;
    {
        const bool branch_taken_0x30da60 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x30da60) {
            ctx->pc = 0x30DA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30DA60u;
            // 0x30da64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DAD8u;
            goto label_30dad8;
        }
    }
    ctx->pc = 0x30DA68u;
    // 0x30da68: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30DA68u;
    {
        const bool branch_taken_0x30da68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA68u;
        // 0x30da6c: 0x32a20007  andi        $v0, $s5, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da68) {
            ctx->pc = 0x30DA90u;
            goto label_30da90;
        }
    }
    ctx->pc = 0x30DA70u;
    // 0x30da70: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x30DA70u;
    {
        const bool branch_taken_0x30da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA70u;
        // 0x30da74: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da70) {
            ctx->pc = 0x30DC5Cu;
            goto label_30dc5c;
        }
    }
    ctx->pc = 0x30DA78u;
label_30da78:
    // 0x30da78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30da78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30da7c: 0x10c20038  beq         $a2, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x30DA7Cu;
    {
        const bool branch_taken_0x30da7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x30DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA7Cu;
        // 0x30da80: 0x32a20007  andi        $v0, $s5, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da7c) {
            ctx->pc = 0x30DB60u;
            goto label_30db60;
        }
    }
    ctx->pc = 0x30DA84u;
    // 0x30da84: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x30DA84u;
    {
        const bool branch_taken_0x30da84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA84u;
        // 0x30da88: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da84) {
            ctx->pc = 0x30DC5Cu;
            goto label_30dc5c;
        }
    }
    ctx->pc = 0x30DA8Cu;
    // 0x30da8c: 0x0  nop
    ctx->pc = 0x30da8cu;
    // NOP
label_30da90:
    // 0x30da90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30da90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da94: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x30da94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30da98: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x30DA98u;
    {
        const bool branch_taken_0x30da98 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x30DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA98u;
        // 0x30da9c: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da98) {
            ctx->pc = 0x30DAC4u;
            goto label_30dac4;
        }
    }
    ctx->pc = 0x30DAA0u;
    // 0x30daa0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x30daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30daa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30daa8:
    // 0x30daa8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30daa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30daac: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x30daacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x30dab0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30dab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30dab4: 0x0  nop
    ctx->pc = 0x30dab4u;
    // NOP
    // 0x30dab8: 0x0  nop
    ctx->pc = 0x30dab8u;
    // NOP
    // 0x30dabc: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30DABCu;
    {
        const bool branch_taken_0x30dabc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x30DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DABCu;
        // 0x30dac0: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dabc) {
            ctx->pc = 0x30DAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30daa8;
        }
    }
    ctx->pc = 0x30DAC4u;
label_30dac4:
    // 0x30dac4: 0x12c00063  beqz        $s6, . + 4 + (0x63 << 2)
    ctx->pc = 0x30DAC4u;
    {
        const bool branch_taken_0x30dac4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAC4u;
        // 0x30dac8: 0xe7c20000  swc1        $f2, 0x0($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dac4) {
            ctx->pc = 0x30DC54u;
            goto label_30dc54;
        }
    }
    ctx->pc = 0x30DACCu;
    // 0x30dacc: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x30daccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x30dad0: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x30DAD0u;
    {
        const bool branch_taken_0x30dad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAD0u;
        // 0x30dad4: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dad0) {
            ctx->pc = 0x30DC54u;
            goto label_30dc54;
        }
    }
    ctx->pc = 0x30DAD8u;
label_30dad8:
    // 0x30dad8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x30dad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30dadc: 0x4c0000b  bltz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x30DADCu;
    {
        const bool branch_taken_0x30dadc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x30DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DADCu;
        // 0x30dae0: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dadc) {
            ctx->pc = 0x30DB0Cu;
            goto label_30db0c;
        }
    }
    ctx->pc = 0x30DAE4u;
    // 0x30dae4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x30dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30dae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30daec: 0x0  nop
    ctx->pc = 0x30daecu;
    // NOP
label_30daf0:
    // 0x30daf0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30daf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30daf4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x30daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x30daf8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30daf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30dafc: 0x0  nop
    ctx->pc = 0x30dafcu;
    // NOP
    // 0x30db00: 0x0  nop
    ctx->pc = 0x30db00u;
    // NOP
    // 0x30db04: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30DB04u;
    {
        const bool branch_taken_0x30db04 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x30DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB04u;
        // 0x30db08: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db04) {
            ctx->pc = 0x30DAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30daf0;
        }
    }
    ctx->pc = 0x30DB0Cu;
label_30db0c:
    // 0x30db0c: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DB0Cu;
    {
        const bool branch_taken_0x30db0c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB0Cu;
        // 0x30db10: 0xe7c20000  swc1        $f2, 0x0($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db0c) {
            ctx->pc = 0x30DB1Cu;
            goto label_30db1c;
        }
    }
    ctx->pc = 0x30DB14u;
    // 0x30db14: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x30db14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x30db18: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x30db18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_30db1c:
    // 0x30db1c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x30db1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30db20: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x30DB20u;
    {
        const bool branch_taken_0x30db20 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x30DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB20u;
        // 0x30db24: 0x46020081  sub.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db20) {
            ctx->pc = 0x30DB4Cu;
            goto label_30db4c;
        }
    }
    ctx->pc = 0x30DB28u;
    // 0x30db28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30db28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30db2c: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x30db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_30db30:
    // 0x30db30: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30db30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30db34: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30db38: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30db38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30db3c: 0x0  nop
    ctx->pc = 0x30db3cu;
    // NOP
    // 0x30db40: 0x0  nop
    ctx->pc = 0x30db40u;
    // NOP
    // 0x30db44: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30DB44u;
    {
        const bool branch_taken_0x30db44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB44u;
        // 0x30db48: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db44) {
            ctx->pc = 0x30DB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30db30;
        }
    }
    ctx->pc = 0x30DB4Cu;
label_30db4c:
    // 0x30db4c: 0x12c00041  beqz        $s6, . + 4 + (0x41 << 2)
    ctx->pc = 0x30DB4Cu;
    {
        const bool branch_taken_0x30db4c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB4Cu;
        // 0x30db50: 0xe7c20004  swc1        $f2, 0x4($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db4c) {
            ctx->pc = 0x30DC54u;
            goto label_30dc54;
        }
    }
    ctx->pc = 0x30DB54u;
    // 0x30db54: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x30db54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x30db58: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x30DB58u;
    {
        const bool branch_taken_0x30db58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB58u;
        // 0x30db5c: 0xe7c00004  swc1        $f0, 0x4($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db58) {
            ctx->pc = 0x30DC54u;
            goto label_30dc54;
        }
    }
    ctx->pc = 0x30DB60u;
label_30db60:
    // 0x30db60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30db60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30db64: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x30DB64u;
    {
        const bool branch_taken_0x30db64 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x30DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB64u;
        // 0x30db68: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db64) {
            ctx->pc = 0x30DBA8u;
            goto label_30dba8;
        }
    }
    ctx->pc = 0x30DB6Cu;
    // 0x30db6c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x30db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30db70: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x30db70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x30db74: 0x2463009c  addiu       $v1, $v1, 0x9C
    ctx->pc = 0x30db74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
label_30db78:
    // 0x30db78: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x30db78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30db7c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30db7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30db80: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x30db80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30db84: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x30db84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30db88: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x30db88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x30db8c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x30db8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x30db90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30db90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30db94: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x30db94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x30db98: 0x1cc0fff7  bgtz        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x30DB98u;
    {
        const bool branch_taken_0x30db98 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x30DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB98u;
        // 0x30db9c: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db98) {
            ctx->pc = 0x30DB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30db78;
        }
    }
    ctx->pc = 0x30DBA0u;
    // 0x30dba0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30dba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dba4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x30dba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_30dba8:
    // 0x30dba8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x30DBA8u;
    {
        const bool branch_taken_0x30dba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30dba8) {
            ctx->pc = 0x30DBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30DBA8u;
            // 0x30dbac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DBF0u;
            goto label_30dbf0;
        }
    }
    ctx->pc = 0x30DBB0u;
    // 0x30dbb0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x30dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30dbb4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x30dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x30dbb8: 0x2463009c  addiu       $v1, $v1, 0x9C
    ctx->pc = 0x30dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
    // 0x30dbbc: 0x0  nop
    ctx->pc = 0x30dbbcu;
    // NOP
label_30dbc0:
    // 0x30dbc0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x30dbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30dbc4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30dbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30dbc8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x30dbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30dbcc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x30dbccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30dbd0: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x30dbd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30dbd4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x30dbd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x30dbd8: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x30dbd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x30dbdc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x30dbdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30dbe0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x30dbe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x30dbe4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x30DBE4u;
    {
        const bool branch_taken_0x30dbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DBE4u;
        // 0x30dbe8: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbe4) {
            ctx->pc = 0x30DBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30dbc0;
        }
    }
    ctx->pc = 0x30DBECu;
    // 0x30dbec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30dbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30dbf0:
    // 0x30dbf0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x30dbf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30dbf4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x30dbf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30dbf8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30DBF8u;
    {
        const bool branch_taken_0x30dbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DBF8u;
        // 0x30dbfc: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbf8) {
            ctx->pc = 0x30DC24u;
            goto label_30dc24;
        }
    }
    ctx->pc = 0x30DC00u;
    // 0x30dc00: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x30dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30dc04: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30dc08:
    // 0x30dc08: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x30dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30dc0c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x30dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x30dc10: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30dc10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30dc14: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x30dc14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30dc18: 0x0  nop
    ctx->pc = 0x30dc18u;
    // NOP
    // 0x30dc1c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30DC1Cu;
    {
        const bool branch_taken_0x30dc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC1Cu;
        // 0x30dc20: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc1c) {
            ctx->pc = 0x30DC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30dc08;
        }
    }
    ctx->pc = 0x30DC24u;
label_30dc24:
    // 0x30dc24: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x30DC24u;
    {
        const bool branch_taken_0x30dc24 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC24u;
        // 0x30dc28: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc24) {
            ctx->pc = 0x30DC38u;
            goto label_30dc38;
        }
    }
    ctx->pc = 0x30DC2Cu;
    // 0x30dc2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30DC2Cu;
    {
        const bool branch_taken_0x30dc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC2Cu;
        // 0x30dc30: 0xc7a100a4  lwc1        $f1, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc2c) {
            ctx->pc = 0x30DC48u;
            goto label_30dc48;
        }
    }
    ctx->pc = 0x30DC34u;
    // 0x30dc34: 0x0  nop
    ctx->pc = 0x30dc34u;
    // NOP
label_30dc38:
    // 0x30dc38: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x30dc38u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x30dc3c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x30dc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30dc40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30dc40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30dc44: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x30dc44u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_30dc48:
    // 0x30dc48: 0xe7c20008  swc1        $f2, 0x8($fp)
    ctx->pc = 0x30dc48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x30dc4c: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x30dc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x30dc50: 0xe7c10004  swc1        $f1, 0x4($fp)
    ctx->pc = 0x30dc50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_30dc54:
    // 0x30dc54: 0x32a20007  andi        $v0, $s5, 0x7
    ctx->pc = 0x30dc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
    // 0x30dc58: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x30dc58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_30dc5c:
    // 0x30dc5c: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x30dc5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x30dc60: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x30dc60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x30dc64: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x30dc64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x30dc68: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x30dc68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x30dc6c: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x30dc6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x30dc70: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x30dc70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x30dc74: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x30dc74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x30dc78: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x30dc78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x30dc7c: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x30dc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x30dc80: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x30dc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30dc84: 0x3e00008  jr          $ra
    ctx->pc = 0x30DC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC84u;
        // 0x30dc88: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DC8Cu;
    // 0x30dc8c: 0x0  nop
    ctx->pc = 0x30dc8cu;
    // NOP
    ctx->pc = 0x30dc90u;
}
