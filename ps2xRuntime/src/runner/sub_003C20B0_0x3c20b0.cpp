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

// Function: sub_003C20B0
// Address: 0x3c20b0 - 0x3c2288
void sub_003C20B0_0x3c20b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C20B0_0x3c20b0");
#endif

    switch (ctx->pc) {
        case 0x3c20b0u: goto label_3c20b0;
        case 0x3c20b4u: goto label_3c20b4;
        case 0x3c20b8u: goto label_3c20b8;
        case 0x3c20bcu: goto label_3c20bc;
        case 0x3c20c0u: goto label_3c20c0;
        case 0x3c20c4u: goto label_3c20c4;
        case 0x3c20c8u: goto label_3c20c8;
        case 0x3c20ccu: goto label_3c20cc;
        case 0x3c20d0u: goto label_3c20d0;
        case 0x3c20d4u: goto label_3c20d4;
        case 0x3c20d8u: goto label_3c20d8;
        case 0x3c20dcu: goto label_3c20dc;
        case 0x3c20e0u: goto label_3c20e0;
        case 0x3c20e4u: goto label_3c20e4;
        case 0x3c20e8u: goto label_3c20e8;
        case 0x3c20ecu: goto label_3c20ec;
        case 0x3c20f0u: goto label_3c20f0;
        case 0x3c20f4u: goto label_3c20f4;
        case 0x3c20f8u: goto label_3c20f8;
        case 0x3c20fcu: goto label_3c20fc;
        case 0x3c2100u: goto label_3c2100;
        case 0x3c2104u: goto label_3c2104;
        case 0x3c2108u: goto label_3c2108;
        case 0x3c210cu: goto label_3c210c;
        case 0x3c2110u: goto label_3c2110;
        case 0x3c2114u: goto label_3c2114;
        case 0x3c2118u: goto label_3c2118;
        case 0x3c211cu: goto label_3c211c;
        case 0x3c2120u: goto label_3c2120;
        case 0x3c2124u: goto label_3c2124;
        case 0x3c2128u: goto label_3c2128;
        case 0x3c212cu: goto label_3c212c;
        case 0x3c2130u: goto label_3c2130;
        case 0x3c2134u: goto label_3c2134;
        case 0x3c2138u: goto label_3c2138;
        case 0x3c213cu: goto label_3c213c;
        case 0x3c2140u: goto label_3c2140;
        case 0x3c2144u: goto label_3c2144;
        case 0x3c2148u: goto label_3c2148;
        case 0x3c214cu: goto label_3c214c;
        case 0x3c2150u: goto label_3c2150;
        case 0x3c2154u: goto label_3c2154;
        case 0x3c2158u: goto label_3c2158;
        case 0x3c215cu: goto label_3c215c;
        case 0x3c2160u: goto label_3c2160;
        case 0x3c2164u: goto label_3c2164;
        case 0x3c2168u: goto label_3c2168;
        case 0x3c216cu: goto label_3c216c;
        case 0x3c2170u: goto label_3c2170;
        case 0x3c2174u: goto label_3c2174;
        case 0x3c2178u: goto label_3c2178;
        case 0x3c217cu: goto label_3c217c;
        case 0x3c2180u: goto label_3c2180;
        case 0x3c2184u: goto label_3c2184;
        case 0x3c2188u: goto label_3c2188;
        case 0x3c218cu: goto label_3c218c;
        case 0x3c2190u: goto label_3c2190;
        case 0x3c2194u: goto label_3c2194;
        case 0x3c2198u: goto label_3c2198;
        case 0x3c219cu: goto label_3c219c;
        case 0x3c21a0u: goto label_3c21a0;
        case 0x3c21a4u: goto label_3c21a4;
        case 0x3c21a8u: goto label_3c21a8;
        case 0x3c21acu: goto label_3c21ac;
        case 0x3c21b0u: goto label_3c21b0;
        case 0x3c21b4u: goto label_3c21b4;
        case 0x3c21b8u: goto label_3c21b8;
        case 0x3c21bcu: goto label_3c21bc;
        case 0x3c21c0u: goto label_3c21c0;
        case 0x3c21c4u: goto label_3c21c4;
        case 0x3c21c8u: goto label_3c21c8;
        case 0x3c21ccu: goto label_3c21cc;
        case 0x3c21d0u: goto label_3c21d0;
        case 0x3c21d4u: goto label_3c21d4;
        case 0x3c21d8u: goto label_3c21d8;
        case 0x3c21dcu: goto label_3c21dc;
        case 0x3c21e0u: goto label_3c21e0;
        case 0x3c21e4u: goto label_3c21e4;
        case 0x3c21e8u: goto label_3c21e8;
        case 0x3c21ecu: goto label_3c21ec;
        case 0x3c21f0u: goto label_3c21f0;
        case 0x3c21f4u: goto label_3c21f4;
        case 0x3c21f8u: goto label_3c21f8;
        case 0x3c21fcu: goto label_3c21fc;
        case 0x3c2200u: goto label_3c2200;
        case 0x3c2204u: goto label_3c2204;
        case 0x3c2208u: goto label_3c2208;
        case 0x3c220cu: goto label_3c220c;
        case 0x3c2210u: goto label_3c2210;
        case 0x3c2214u: goto label_3c2214;
        case 0x3c2218u: goto label_3c2218;
        case 0x3c221cu: goto label_3c221c;
        case 0x3c2220u: goto label_3c2220;
        case 0x3c2224u: goto label_3c2224;
        case 0x3c2228u: goto label_3c2228;
        case 0x3c222cu: goto label_3c222c;
        case 0x3c2230u: goto label_3c2230;
        case 0x3c2234u: goto label_3c2234;
        case 0x3c2238u: goto label_3c2238;
        case 0x3c223cu: goto label_3c223c;
        case 0x3c2240u: goto label_3c2240;
        case 0x3c2244u: goto label_3c2244;
        case 0x3c2248u: goto label_3c2248;
        case 0x3c224cu: goto label_3c224c;
        case 0x3c2250u: goto label_3c2250;
        case 0x3c2254u: goto label_3c2254;
        case 0x3c2258u: goto label_3c2258;
        case 0x3c225cu: goto label_3c225c;
        case 0x3c2260u: goto label_3c2260;
        case 0x3c2264u: goto label_3c2264;
        case 0x3c2268u: goto label_3c2268;
        case 0x3c226cu: goto label_3c226c;
        case 0x3c2270u: goto label_3c2270;
        case 0x3c2274u: goto label_3c2274;
        case 0x3c2278u: goto label_3c2278;
        case 0x3c227cu: goto label_3c227c;
        case 0x3c2280u: goto label_3c2280;
        case 0x3c2284u: goto label_3c2284;
        default: break;
    }

    ctx->pc = 0x3c20b0u;

label_3c20b0:
    // 0x3c20b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c20b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3c20b4:
    // 0x3c20b4: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x3c20b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
label_3c20b8:
    // 0x3c20b8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3c20b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3c20bc:
    // 0x3c20bc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3c20bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_3c20c0:
    // 0x3c20c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3c20c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c20c4:
    // 0x3c20c4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3c20c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3c20c8:
    // 0x3c20c8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3c20c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c20cc:
    // 0x3c20cc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3c20ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3c20d0:
    // 0x3c20d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c20d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c20d4:
    // 0x3c20d4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3c20d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_3c20d8:
    // 0x3c20d8: 0x89603  sra         $s2, $t0, 24
    ctx->pc = 0x3c20d8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 8), 24));
label_3c20dc:
    // 0x3c20dc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3c20dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3c20e0:
    // 0x3c20e0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3c20e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c20e4:
    // 0x3c20e4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c20e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3c20e8:
    // 0x3c20e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c20e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c20ec:
    // 0x3c20ec: 0xc0bc60c  jal         func_2F1830
label_3c20f0:
    if (ctx->pc == 0x3C20F0u) {
        ctx->pc = 0x3C20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20ECu;
        // 0x3c20f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C20F4u;
        goto label_3c20f4;
    }
    ctx->pc = 0x3C20ECu;
    SET_GPR_U32(ctx, 31, 0x3C20F4u);
    ctx->pc = 0x3C20F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C20ECu;
    // 0x3c20f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3C20ECu, 0x3C20F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C20F4u;
label_3c20f4:
    // 0x3c20f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c20f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c20f8:
    // 0x3c20f8: 0xc0bc60c  jal         func_2F1830
label_3c20fc:
    if (ctx->pc == 0x3C20FCu) {
        ctx->pc = 0x3C20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20F8u;
        // 0x3c20fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2100u;
        goto label_3c2100;
    }
    ctx->pc = 0x3C20F8u;
    SET_GPR_U32(ctx, 31, 0x3C2100u);
    ctx->pc = 0x3C20FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C20F8u;
    // 0x3c20fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3C20F8u, 0x3C2100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2100u;
label_3c2100:
    // 0x3c2100: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c2100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2104:
    // 0x3c2104: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3c2104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3c2108:
    // 0x3c2108: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x3c2108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_3c210c:
    // 0x3c210c: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x3c210cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c2110:
    // 0x3c2110: 0x16000052  bnez        $s0, . + 4 + (0x52 << 2)
label_3c2114:
    if (ctx->pc == 0x3C2114u) {
        ctx->pc = 0x3C2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2110u;
        // 0x3c2114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2118u;
        goto label_3c2118;
    }
    ctx->pc = 0x3C2110u;
    {
        const bool branch_taken_0x3c2110 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2110u;
        // 0x3c2114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2110) {
            ctx->pc = 0x3C225Cu;
            goto label_3c225c;
        }
    }
    ctx->pc = 0x3C2118u;
label_3c2118:
    // 0x3c2118: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3c2118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3c211c:
    // 0x3c211c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c211cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c2120:
    // 0x3c2120: 0x8c62e94c  lw          $v0, -0x16B4($v1)
    ctx->pc = 0x3c2120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961484)));
label_3c2124:
    // 0x3c2124: 0x40f809  jalr        $v0
label_3c2128:
    if (ctx->pc == 0x3C2128u) {
        ctx->pc = 0x3C2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2124u;
        // 0x3c2128: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C212Cu;
        goto label_3c212c;
    }
    ctx->pc = 0x3C2124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C212Cu);
        ctx->pc = 0x3C2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2124u;
        // 0x3c2128: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2124u, 0x3C212Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C212Cu;
label_3c212c:
    // 0x3c212c: 0x620004a  bltz        $s1, . + 4 + (0x4A << 2)
label_3c2130:
    if (ctx->pc == 0x3C2130u) {
        ctx->pc = 0x3C2130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C212Cu;
        // 0x3c2130: 0x2764021  addu        $t0, $s3, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2134u;
        goto label_3c2134;
    }
    ctx->pc = 0x3C212Cu;
    {
        const bool branch_taken_0x3c212c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3C2130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C212Cu;
        // 0x3c2130: 0x2764021  addu        $t0, $s3, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c212c) {
            ctx->pc = 0x3C2258u;
            goto label_3c2258;
        }
    }
    ctx->pc = 0x3C2134u;
label_3c2134:
    // 0x3c2134: 0x26270001  addiu       $a3, $s1, 0x1
    ctx->pc = 0x3c2134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3c2138:
    // 0x3c2138: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c2138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c213c:
    // 0x3c213c: 0x71023  negu        $v0, $a3
    ctx->pc = 0x3c213cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_3c2140:
    // 0x3c2140: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x3c2140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3c2144:
    // 0x3c2144: 0x240a002f  addiu       $t2, $zero, 0x2F
    ctx->pc = 0x3c2144u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_3c2148:
    // 0x3c2148: 0x2409005c  addiu       $t1, $zero, 0x5C
    ctx->pc = 0x3c2148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_3c214c:
    // 0x3c214c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3c214cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c2150:
    // 0x3c2150: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
label_3c2154:
    if (ctx->pc == 0x3C2154u) {
        ctx->pc = 0x3C2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2150u;
        // 0x3c2154: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2158u;
        goto label_3c2158;
    }
    ctx->pc = 0x3C2150u;
    {
        const bool branch_taken_0x3c2150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2150u;
        // 0x3c2154: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2150) {
            ctx->pc = 0x3C21DCu;
            goto label_3c21dc;
        }
    }
    ctx->pc = 0x3C2158u;
label_3c2158:
    // 0x3c2158: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x3c2158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_3c215c:
    // 0x3c215c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3c2160:
    if (ctx->pc == 0x3C2160u) {
        ctx->pc = 0x3C2160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C215Cu;
        // 0x3c2160: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2164u;
        goto label_3c2164;
    }
    ctx->pc = 0x3C215Cu;
    {
        const bool branch_taken_0x3c215c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C215Cu;
        // 0x3c2160: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c215c) {
            ctx->pc = 0x3C21B4u;
            goto label_3c21b4;
        }
    }
    ctx->pc = 0x3C2164u;
label_3c2164:
    // 0x3c2164: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3c2168:
    if (ctx->pc == 0x3C2168u) {
        ctx->pc = 0x3C2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2164u;
        // 0x3c2168: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C216Cu;
        goto label_3c216c;
    }
    ctx->pc = 0x3C2164u;
    {
        const bool branch_taken_0x3c2164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2164) {
            ctx->pc = 0x3C2168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2164u;
            // 0x3c2168: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2194u;
            goto label_3c2194;
        }
    }
    ctx->pc = 0x3C216Cu;
label_3c216c:
    // 0x3c216c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3c216cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3c2170:
    // 0x3c2170: 0x104a0003  beq         $v0, $t2, . + 4 + (0x3 << 2)
label_3c2174:
    if (ctx->pc == 0x3C2174u) {
        ctx->pc = 0x3C2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2170u;
        // 0x3c2174: 0x90840000  lbu         $a0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2178u;
        goto label_3c2178;
    }
    ctx->pc = 0x3C2170u;
    {
        const bool branch_taken_0x3c2170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x3C2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2170u;
        // 0x3c2174: 0x90840000  lbu         $a0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2170) {
            ctx->pc = 0x3C2180u;
            goto label_3c2180;
        }
    }
    ctx->pc = 0x3C2178u;
label_3c2178:
    // 0x3c2178: 0x54490002  bnel        $v0, $t1, . + 4 + (0x2 << 2)
label_3c217c:
    if (ctx->pc == 0x3C217Cu) {
        ctx->pc = 0x3C217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2178u;
        // 0x3c217c: 0xa1040000  sb          $a0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2180u;
        goto label_3c2180;
    }
    ctx->pc = 0x3C2178u;
    {
        const bool branch_taken_0x3c2178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x3c2178) {
            ctx->pc = 0x3C217Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2178u;
            // 0x3c217c: 0xa1040000  sb          $a0, 0x0($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2184u;
            goto label_3c2184;
        }
    }
    ctx->pc = 0x3C2180u;
label_3c2180:
    // 0x3c2180: 0xa1120000  sb          $s2, 0x0($t0)
    ctx->pc = 0x3c2180u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 18));
label_3c2184:
    // 0x3c2184: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3c2184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3c2188:
    // 0x3c2188: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c2188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c218c:
    // 0x3c218c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3c218cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3c2190:
    // 0x3c2190: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3c2190u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3c2194:
    // 0x3c2194: 0x104a0003  beq         $v0, $t2, . + 4 + (0x3 << 2)
label_3c2198:
    if (ctx->pc == 0x3C2198u) {
        ctx->pc = 0x3C2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2194u;
        // 0x3c2198: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C219Cu;
        goto label_3c219c;
    }
    ctx->pc = 0x3C2194u;
    {
        const bool branch_taken_0x3c2194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x3C2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2194u;
        // 0x3c2198: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2194) {
            ctx->pc = 0x3C21A4u;
            goto label_3c21a4;
        }
    }
    ctx->pc = 0x3C219Cu;
label_3c219c:
    // 0x3c219c: 0x54490002  bnel        $v0, $t1, . + 4 + (0x2 << 2)
label_3c21a0:
    if (ctx->pc == 0x3C21A0u) {
        ctx->pc = 0x3C21A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C219Cu;
        // 0x3c21a0: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C21A4u;
        goto label_3c21a4;
    }
    ctx->pc = 0x3C219Cu;
    {
        const bool branch_taken_0x3c219c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x3c219c) {
            ctx->pc = 0x3C21A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C219Cu;
            // 0x3c21a0: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C21A8u;
            goto label_3c21a8;
        }
    }
    ctx->pc = 0x3C21A4u;
label_3c21a4:
    // 0x3c21a4: 0xa0d20000  sb          $s2, 0x0($a2)
    ctx->pc = 0x3c21a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 18));
label_3c21a8:
    // 0x3c21a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3c21a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3c21ac:
    // 0x3c21ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c21acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c21b0:
    // 0x3c21b0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3c21b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3c21b4:
    // 0x3c21b4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3c21b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3c21b8:
    // 0x3c21b8: 0x104a0003  beq         $v0, $t2, . + 4 + (0x3 << 2)
label_3c21bc:
    if (ctx->pc == 0x3C21BCu) {
        ctx->pc = 0x3C21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C21B8u;
        // 0x3c21bc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C21C0u;
        goto label_3c21c0;
    }
    ctx->pc = 0x3C21B8u;
    {
        const bool branch_taken_0x3c21b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x3C21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C21B8u;
        // 0x3c21bc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c21b8) {
            ctx->pc = 0x3C21C8u;
            goto label_3c21c8;
        }
    }
    ctx->pc = 0x3C21C0u;
label_3c21c0:
    // 0x3c21c0: 0x54490002  bnel        $v0, $t1, . + 4 + (0x2 << 2)
label_3c21c4:
    if (ctx->pc == 0x3C21C4u) {
        ctx->pc = 0x3C21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C21C0u;
        // 0x3c21c4: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C21C8u;
        goto label_3c21c8;
    }
    ctx->pc = 0x3C21C0u;
    {
        const bool branch_taken_0x3c21c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x3c21c0) {
            ctx->pc = 0x3C21C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C21C0u;
            // 0x3c21c4: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C21CCu;
            goto label_3c21cc;
        }
    }
    ctx->pc = 0x3C21C8u;
label_3c21c8:
    // 0x3c21c8: 0xa0d20000  sb          $s2, 0x0($a2)
    ctx->pc = 0x3c21c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 18));
label_3c21cc:
    // 0x3c21cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3c21ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3c21d0:
    // 0x3c21d0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3c21d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3c21d4:
    // 0x3c21d4: 0x10e00020  beqz        $a3, . + 4 + (0x20 << 2)
label_3c21d8:
    if (ctx->pc == 0x3C21D8u) {
        ctx->pc = 0x3C21D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C21D4u;
        // 0x3c21d8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C21DCu;
        goto label_3c21dc;
    }
    ctx->pc = 0x3C21D4u;
    {
        const bool branch_taken_0x3c21d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C21D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C21D4u;
        // 0x3c21d8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c21d4) {
            ctx->pc = 0x3C2258u;
            goto label_3c2258;
        }
    }
    ctx->pc = 0x3C21DCu;
label_3c21dc:
    // 0x3c21dc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3c21dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c21e0:
    // 0x3c21e0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3c21e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c21e4:
    // 0x3c21e4: 0x0  nop
    ctx->pc = 0x3c21e4u;
    // NOP
label_3c21e8:
    // 0x3c21e8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3c21e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3c21ec:
    // 0x3c21ec: 0x104a0003  beq         $v0, $t2, . + 4 + (0x3 << 2)
label_3c21f0:
    if (ctx->pc == 0x3C21F0u) {
        ctx->pc = 0x3C21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C21ECu;
        // 0x3c21f0: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C21F4u;
        goto label_3c21f4;
    }
    ctx->pc = 0x3C21ECu;
    {
        const bool branch_taken_0x3c21ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x3C21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C21ECu;
        // 0x3c21f0: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c21ec) {
            ctx->pc = 0x3C21FCu;
            goto label_3c21fc;
        }
    }
    ctx->pc = 0x3C21F4u;
label_3c21f4:
    // 0x3c21f4: 0x54490002  bnel        $v0, $t1, . + 4 + (0x2 << 2)
label_3c21f8:
    if (ctx->pc == 0x3C21F8u) {
        ctx->pc = 0x3C21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C21F4u;
        // 0x3c21f8: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C21FCu;
        goto label_3c21fc;
    }
    ctx->pc = 0x3C21F4u;
    {
        const bool branch_taken_0x3c21f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x3c21f4) {
            ctx->pc = 0x3C21F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C21F4u;
            // 0x3c21f8: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2200u;
            goto label_3c2200;
        }
    }
    ctx->pc = 0x3C21FCu;
label_3c21fc:
    // 0x3c21fc: 0xa0720000  sb          $s2, 0x0($v1)
    ctx->pc = 0x3c21fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 18));
label_3c2200:
    // 0x3c2200: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x3c2200u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3c2204:
    // 0x3c2204: 0x104a0003  beq         $v0, $t2, . + 4 + (0x3 << 2)
label_3c2208:
    if (ctx->pc == 0x3C2208u) {
        ctx->pc = 0x3C2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2204u;
        // 0x3c2208: 0x90a40001  lbu         $a0, 0x1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C220Cu;
        goto label_3c220c;
    }
    ctx->pc = 0x3C2204u;
    {
        const bool branch_taken_0x3c2204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x3C2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2204u;
        // 0x3c2208: 0x90a40001  lbu         $a0, 0x1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2204) {
            ctx->pc = 0x3C2214u;
            goto label_3c2214;
        }
    }
    ctx->pc = 0x3C220Cu;
label_3c220c:
    // 0x3c220c: 0x54490002  bnel        $v0, $t1, . + 4 + (0x2 << 2)
label_3c2210:
    if (ctx->pc == 0x3C2210u) {
        ctx->pc = 0x3C2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C220Cu;
        // 0x3c2210: 0xa0640001  sb          $a0, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2214u;
        goto label_3c2214;
    }
    ctx->pc = 0x3C220Cu;
    {
        const bool branch_taken_0x3c220c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x3c220c) {
            ctx->pc = 0x3C2210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C220Cu;
            // 0x3c2210: 0xa0640001  sb          $a0, 0x1($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2218u;
            goto label_3c2218;
        }
    }
    ctx->pc = 0x3C2214u;
label_3c2214:
    // 0x3c2214: 0xa0720001  sb          $s2, 0x1($v1)
    ctx->pc = 0x3c2214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 18));
label_3c2218:
    // 0x3c2218: 0x80a20002  lb          $v0, 0x2($a1)
    ctx->pc = 0x3c2218u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_3c221c:
    // 0x3c221c: 0x104a0003  beq         $v0, $t2, . + 4 + (0x3 << 2)
label_3c2220:
    if (ctx->pc == 0x3C2220u) {
        ctx->pc = 0x3C2220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C221Cu;
        // 0x3c2220: 0x90a40002  lbu         $a0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2224u;
        goto label_3c2224;
    }
    ctx->pc = 0x3C221Cu;
    {
        const bool branch_taken_0x3c221c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x3C2220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C221Cu;
        // 0x3c2220: 0x90a40002  lbu         $a0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c221c) {
            ctx->pc = 0x3C222Cu;
            goto label_3c222c;
        }
    }
    ctx->pc = 0x3C2224u;
label_3c2224:
    // 0x3c2224: 0x54490002  bnel        $v0, $t1, . + 4 + (0x2 << 2)
label_3c2228:
    if (ctx->pc == 0x3C2228u) {
        ctx->pc = 0x3C2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2224u;
        // 0x3c2228: 0xa0640002  sb          $a0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C222Cu;
        goto label_3c222c;
    }
    ctx->pc = 0x3C2224u;
    {
        const bool branch_taken_0x3c2224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x3c2224) {
            ctx->pc = 0x3C2228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2224u;
            // 0x3c2228: 0xa0640002  sb          $a0, 0x2($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2230u;
            goto label_3c2230;
        }
    }
    ctx->pc = 0x3C222Cu;
label_3c222c:
    // 0x3c222c: 0xa0720002  sb          $s2, 0x2($v1)
    ctx->pc = 0x3c222cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 18));
label_3c2230:
    // 0x3c2230: 0x80a20003  lb          $v0, 0x3($a1)
    ctx->pc = 0x3c2230u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_3c2234:
    // 0x3c2234: 0x104a0003  beq         $v0, $t2, . + 4 + (0x3 << 2)
label_3c2238:
    if (ctx->pc == 0x3C2238u) {
        ctx->pc = 0x3C2238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2234u;
        // 0x3c2238: 0x90a40003  lbu         $a0, 0x3($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C223Cu;
        goto label_3c223c;
    }
    ctx->pc = 0x3C2234u;
    {
        const bool branch_taken_0x3c2234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x3C2238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2234u;
        // 0x3c2238: 0x90a40003  lbu         $a0, 0x3($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2234) {
            ctx->pc = 0x3C2244u;
            goto label_3c2244;
        }
    }
    ctx->pc = 0x3C223Cu;
label_3c223c:
    // 0x3c223c: 0x54490002  bnel        $v0, $t1, . + 4 + (0x2 << 2)
label_3c2240:
    if (ctx->pc == 0x3C2240u) {
        ctx->pc = 0x3C2240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C223Cu;
        // 0x3c2240: 0xa0640003  sb          $a0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2244u;
        goto label_3c2244;
    }
    ctx->pc = 0x3C223Cu;
    {
        const bool branch_taken_0x3c223c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x3c223c) {
            ctx->pc = 0x3C2240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C223Cu;
            // 0x3c2240: 0xa0640003  sb          $a0, 0x3($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2248u;
            goto label_3c2248;
        }
    }
    ctx->pc = 0x3C2244u;
label_3c2244:
    // 0x3c2244: 0xa0720003  sb          $s2, 0x3($v1)
    ctx->pc = 0x3c2244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 18));
label_3c2248:
    // 0x3c2248: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3c2248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3c224c:
    // 0x3c224c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3c224cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_3c2250:
    // 0x3c2250: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
label_3c2254:
    if (ctx->pc == 0x3C2254u) {
        ctx->pc = 0x3C2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2250u;
        // 0x3c2254: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2258u;
        goto label_3c2258;
    }
    ctx->pc = 0x3C2250u;
    {
        const bool branch_taken_0x3c2250 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2250u;
        // 0x3c2254: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2250) {
            ctx->pc = 0x3C21E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c21e8;
        }
    }
    ctx->pc = 0x3C2258u;
label_3c2258:
    // 0x3c2258: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x3c2258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c225c:
    // 0x3c225c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3c225cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c2260:
    // 0x3c2260: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3c2260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c2264:
    // 0x3c2264: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3c2264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c2268:
    // 0x3c2268: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c2268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c226c:
    // 0x3c226c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3c226cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c2270:
    // 0x3c2270: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3c2270u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c2274:
    // 0x3c2274: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3c2274u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c2278:
    // 0x3c2278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c227c:
    // 0x3c227c: 0x3e00008  jr          $ra
label_3c2280:
    if (ctx->pc == 0x3C2280u) {
        ctx->pc = 0x3C2280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C227Cu;
        // 0x3c2280: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2284u;
        goto label_3c2284;
    }
    ctx->pc = 0x3C227Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C227Cu;
        // 0x3c2280: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C227Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2284u;
label_3c2284:
    // 0x3c2284: 0x0  nop
    ctx->pc = 0x3c2284u;
    // NOP
    ctx->pc = 0x3c2288u;
}
