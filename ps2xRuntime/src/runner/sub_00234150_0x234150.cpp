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

// Function: sub_00234150
// Address: 0x234150 - 0x234360
void sub_00234150_0x234150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234150_0x234150");
#endif

    switch (ctx->pc) {
        case 0x234150u: goto label_234150;
        case 0x234154u: goto label_234154;
        case 0x234158u: goto label_234158;
        case 0x23415cu: goto label_23415c;
        case 0x234160u: goto label_234160;
        case 0x234164u: goto label_234164;
        case 0x234168u: goto label_234168;
        case 0x23416cu: goto label_23416c;
        case 0x234170u: goto label_234170;
        case 0x234174u: goto label_234174;
        case 0x234178u: goto label_234178;
        case 0x23417cu: goto label_23417c;
        case 0x234180u: goto label_234180;
        case 0x234184u: goto label_234184;
        case 0x234188u: goto label_234188;
        case 0x23418cu: goto label_23418c;
        case 0x234190u: goto label_234190;
        case 0x234194u: goto label_234194;
        case 0x234198u: goto label_234198;
        case 0x23419cu: goto label_23419c;
        case 0x2341a0u: goto label_2341a0;
        case 0x2341a4u: goto label_2341a4;
        case 0x2341a8u: goto label_2341a8;
        case 0x2341acu: goto label_2341ac;
        case 0x2341b0u: goto label_2341b0;
        case 0x2341b4u: goto label_2341b4;
        case 0x2341b8u: goto label_2341b8;
        case 0x2341bcu: goto label_2341bc;
        case 0x2341c0u: goto label_2341c0;
        case 0x2341c4u: goto label_2341c4;
        case 0x2341c8u: goto label_2341c8;
        case 0x2341ccu: goto label_2341cc;
        case 0x2341d0u: goto label_2341d0;
        case 0x2341d4u: goto label_2341d4;
        case 0x2341d8u: goto label_2341d8;
        case 0x2341dcu: goto label_2341dc;
        case 0x2341e0u: goto label_2341e0;
        case 0x2341e4u: goto label_2341e4;
        case 0x2341e8u: goto label_2341e8;
        case 0x2341ecu: goto label_2341ec;
        case 0x2341f0u: goto label_2341f0;
        case 0x2341f4u: goto label_2341f4;
        case 0x2341f8u: goto label_2341f8;
        case 0x2341fcu: goto label_2341fc;
        case 0x234200u: goto label_234200;
        case 0x234204u: goto label_234204;
        case 0x234208u: goto label_234208;
        case 0x23420cu: goto label_23420c;
        case 0x234210u: goto label_234210;
        case 0x234214u: goto label_234214;
        case 0x234218u: goto label_234218;
        case 0x23421cu: goto label_23421c;
        case 0x234220u: goto label_234220;
        case 0x234224u: goto label_234224;
        case 0x234228u: goto label_234228;
        case 0x23422cu: goto label_23422c;
        case 0x234230u: goto label_234230;
        case 0x234234u: goto label_234234;
        case 0x234238u: goto label_234238;
        case 0x23423cu: goto label_23423c;
        case 0x234240u: goto label_234240;
        case 0x234244u: goto label_234244;
        case 0x234248u: goto label_234248;
        case 0x23424cu: goto label_23424c;
        case 0x234250u: goto label_234250;
        case 0x234254u: goto label_234254;
        case 0x234258u: goto label_234258;
        case 0x23425cu: goto label_23425c;
        case 0x234260u: goto label_234260;
        case 0x234264u: goto label_234264;
        case 0x234268u: goto label_234268;
        case 0x23426cu: goto label_23426c;
        case 0x234270u: goto label_234270;
        case 0x234274u: goto label_234274;
        case 0x234278u: goto label_234278;
        case 0x23427cu: goto label_23427c;
        case 0x234280u: goto label_234280;
        case 0x234284u: goto label_234284;
        case 0x234288u: goto label_234288;
        case 0x23428cu: goto label_23428c;
        case 0x234290u: goto label_234290;
        case 0x234294u: goto label_234294;
        case 0x234298u: goto label_234298;
        case 0x23429cu: goto label_23429c;
        case 0x2342a0u: goto label_2342a0;
        case 0x2342a4u: goto label_2342a4;
        case 0x2342a8u: goto label_2342a8;
        case 0x2342acu: goto label_2342ac;
        case 0x2342b0u: goto label_2342b0;
        case 0x2342b4u: goto label_2342b4;
        case 0x2342b8u: goto label_2342b8;
        case 0x2342bcu: goto label_2342bc;
        case 0x2342c0u: goto label_2342c0;
        case 0x2342c4u: goto label_2342c4;
        case 0x2342c8u: goto label_2342c8;
        case 0x2342ccu: goto label_2342cc;
        case 0x2342d0u: goto label_2342d0;
        case 0x2342d4u: goto label_2342d4;
        case 0x2342d8u: goto label_2342d8;
        case 0x2342dcu: goto label_2342dc;
        case 0x2342e0u: goto label_2342e0;
        case 0x2342e4u: goto label_2342e4;
        case 0x2342e8u: goto label_2342e8;
        case 0x2342ecu: goto label_2342ec;
        case 0x2342f0u: goto label_2342f0;
        case 0x2342f4u: goto label_2342f4;
        case 0x2342f8u: goto label_2342f8;
        case 0x2342fcu: goto label_2342fc;
        case 0x234300u: goto label_234300;
        case 0x234304u: goto label_234304;
        case 0x234308u: goto label_234308;
        case 0x23430cu: goto label_23430c;
        case 0x234310u: goto label_234310;
        case 0x234314u: goto label_234314;
        case 0x234318u: goto label_234318;
        case 0x23431cu: goto label_23431c;
        case 0x234320u: goto label_234320;
        case 0x234324u: goto label_234324;
        case 0x234328u: goto label_234328;
        case 0x23432cu: goto label_23432c;
        case 0x234330u: goto label_234330;
        case 0x234334u: goto label_234334;
        case 0x234338u: goto label_234338;
        case 0x23433cu: goto label_23433c;
        case 0x234340u: goto label_234340;
        case 0x234344u: goto label_234344;
        case 0x234348u: goto label_234348;
        case 0x23434cu: goto label_23434c;
        case 0x234350u: goto label_234350;
        case 0x234354u: goto label_234354;
        case 0x234358u: goto label_234358;
        case 0x23435cu: goto label_23435c;
        default: break;
    }

    ctx->pc = 0x234150u;

label_234150:
    // 0x234150: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x234150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_234154:
    // 0x234154: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x234154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_234158:
    // 0x234158: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x234158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23415c:
    // 0x23415c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23415cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_234160:
    // 0x234160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x234160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_234164:
    // 0x234164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x234164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_234168:
    // 0x234168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x234168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23416c:
    // 0x23416c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x23416cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
label_234170:
    // 0x234170: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x234170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_234174:
    // 0x234174: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x234174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_234178:
    // 0x234178: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x234178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_23417c:
    // 0x23417c: 0xc119b68  jal         func_466DA0
label_234180:
    if (ctx->pc == 0x234180u) {
        ctx->pc = 0x234184u;
        goto label_234184;
    }
    ctx->pc = 0x23417Cu;
    SET_GPR_U32(ctx, 31, 0x234184u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x23417Cu, 0x234184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234184u;
label_234184:
    // 0x234184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234188:
    // 0x234188: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_23418c:
    if (ctx->pc == 0x23418Cu) {
        ctx->pc = 0x234190u;
        goto label_234190;
    }
    ctx->pc = 0x234188u;
    {
        const bool branch_taken_0x234188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x234188) {
            ctx->pc = 0x2341F0u;
            goto label_2341f0;
        }
    }
    ctx->pc = 0x234190u;
label_234190:
    // 0x234190: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x234190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_234194:
    // 0x234194: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x234194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_234198:
    // 0x234198: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x234198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23419c:
    // 0x23419c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x23419cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2341a0:
    // 0x2341a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2341a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2341a4:
    // 0x2341a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2341a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2341a8:
    // 0x2341a8: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x2341a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2341ac:
    // 0x2341ac: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2341acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2341b0:
    // 0x2341b0: 0x1000000c  b           . + 4 + (0xC << 2)
label_2341b4:
    if (ctx->pc == 0x2341B4u) {
        ctx->pc = 0x2341B8u;
        goto label_2341b8;
    }
    ctx->pc = 0x2341B0u;
    {
        const bool branch_taken_0x2341b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2341b0) {
            ctx->pc = 0x2341E4u;
            goto label_2341e4;
        }
    }
    ctx->pc = 0x2341B8u;
label_2341b8:
    // 0x2341b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2341b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2341bc:
    // 0x2341bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2341bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2341c0:
    // 0x2341c0: 0xc0400e0  jal         func_100380
label_2341c4:
    if (ctx->pc == 0x2341C4u) {
        ctx->pc = 0x2341C8u;
        goto label_2341c8;
    }
    ctx->pc = 0x2341C0u;
    SET_GPR_U32(ctx, 31, 0x2341C8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2341C0u, 0x2341C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2341C8u;
label_2341c8:
    // 0x2341c8: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2341c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_2341cc:
    // 0x2341cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2341d0:
    if (ctx->pc == 0x2341D0u) {
        ctx->pc = 0x2341D4u;
        goto label_2341d4;
    }
    ctx->pc = 0x2341CCu;
    {
        const bool branch_taken_0x2341cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2341cc) {
            ctx->pc = 0x2341DCu;
            goto label_2341dc;
        }
    }
    ctx->pc = 0x2341D4u;
label_2341d4:
    // 0x2341d4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x2341d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2341d8:
    // 0x2341d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2341d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2341dc:
    // 0x2341dc: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x2341dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_2341e0:
    // 0x2341e0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2341e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2341e4:
    // 0x2341e4: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
label_2341e8:
    if (ctx->pc == 0x2341E8u) {
        ctx->pc = 0x2341ECu;
        goto label_2341ec;
    }
    ctx->pc = 0x2341E4u;
    {
        const bool branch_taken_0x2341e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x2341e4) {
            ctx->pc = 0x2341B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2341b8;
        }
    }
    ctx->pc = 0x2341ECu;
label_2341ec:
    // 0x2341ec: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2341ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2341f0:
    // 0x2341f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2341f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2341f4:
    // 0x2341f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2341f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2341f8:
    // 0x2341f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2341f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2341fc:
    // 0x2341fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2341fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_234200:
    // 0x234200: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x234200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_234204:
    // 0x234204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x234204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_234208:
    // 0x234208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x234208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23420c:
    // 0x23420c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x23420cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_234210:
    // 0x234210: 0x3e00008  jr          $ra
label_234214:
    if (ctx->pc == 0x234214u) {
        ctx->pc = 0x234218u;
        goto label_234218;
    }
    ctx->pc = 0x234210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234218u;
label_234218:
    // 0x234218: 0x0  nop
    ctx->pc = 0x234218u;
    // NOP
label_23421c:
    // 0x23421c: 0x0  nop
    ctx->pc = 0x23421cu;
    // NOP
label_234220:
    // 0x234220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_234224:
    // 0x234224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_234228:
    // 0x234228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x234228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23422c:
    // 0x23422c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23422cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_234230:
    // 0x234230: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x234230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_234234:
    // 0x234234: 0x8f84bb94  lw          $a0, -0x446C($gp)
    ctx->pc = 0x234234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949780)));
label_234238:
    // 0x234238: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x234238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23423c:
    // 0x23423c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x23423cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_234240:
    // 0x234240: 0x320f809  jalr        $t9
label_234244:
    if (ctx->pc == 0x234244u) {
        ctx->pc = 0x234248u;
        goto label_234248;
    }
    ctx->pc = 0x234240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x234248u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234240u, 0x234248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234248u;
label_234248:
    // 0x234248: 0x8f82bb94  lw          $v0, -0x446C($gp)
    ctx->pc = 0x234248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949780)));
label_23424c:
    // 0x23424c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_234250:
    if (ctx->pc == 0x234250u) {
        ctx->pc = 0x234254u;
        goto label_234254;
    }
    ctx->pc = 0x23424Cu;
    {
        const bool branch_taken_0x23424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23424c) {
            ctx->pc = 0x234270u;
            goto label_234270;
        }
    }
    ctx->pc = 0x234254u;
label_234254:
    // 0x234254: 0x8f84bb94  lw          $a0, -0x446C($gp)
    ctx->pc = 0x234254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949780)));
label_234258:
    // 0x234258: 0xc049b0c  jal         func_126C30
label_23425c:
    if (ctx->pc == 0x23425Cu) {
        ctx->pc = 0x234260u;
        goto label_234260;
    }
    ctx->pc = 0x234258u;
    SET_GPR_U32(ctx, 31, 0x234260u);
    ctx->pc = 0x126C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126C30u, 0x234258u, 0x234260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234260u;
label_234260:
    // 0x234260: 0x8f84bb94  lw          $a0, -0x446C($gp)
    ctx->pc = 0x234260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949780)));
label_234264:
    // 0x234264: 0xc119c5c  jal         func_467170
label_234268:
    if (ctx->pc == 0x234268u) {
        ctx->pc = 0x23426Cu;
        goto label_23426c;
    }
    ctx->pc = 0x234264u;
    SET_GPR_U32(ctx, 31, 0x23426Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x234264u, 0x23426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23426Cu;
label_23426c:
    // 0x23426c: 0xaf80bb94  sw          $zero, -0x446C($gp)
    ctx->pc = 0x23426cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949780), GPR_U32(ctx, 0));
label_234270:
    // 0x234270: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x234270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234274:
    // 0x234274: 0x1000001c  b           . + 4 + (0x1C << 2)
label_234278:
    if (ctx->pc == 0x234278u) {
        ctx->pc = 0x23427Cu;
        goto label_23427c;
    }
    ctx->pc = 0x234274u;
    {
        const bool branch_taken_0x234274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234274) {
            ctx->pc = 0x2342E8u;
            goto label_2342e8;
        }
    }
    ctx->pc = 0x23427Cu;
label_23427c:
    // 0x23427c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_234280:
    // 0x234280: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x234280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_234284:
    // 0x234284: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x234284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_234288:
    // 0x234288: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23428c:
    // 0x23428c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_234290:
    // 0x234290: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_234294:
    if (ctx->pc == 0x234294u) {
        ctx->pc = 0x234298u;
        goto label_234298;
    }
    ctx->pc = 0x234290u;
    {
        const bool branch_taken_0x234290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234290) {
            ctx->pc = 0x2342E4u;
            goto label_2342e4;
        }
    }
    ctx->pc = 0x234298u;
label_234298:
    // 0x234298: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x234298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_23429c:
    // 0x23429c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x23429cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2342a0:
    // 0x2342a0: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x2342a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2342a4:
    // 0x2342a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2342a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2342a8:
    // 0x2342a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2342a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2342ac:
    // 0x2342ac: 0xc049b18  jal         func_126C60
label_2342b0:
    if (ctx->pc == 0x2342B0u) {
        ctx->pc = 0x2342B4u;
        goto label_2342b4;
    }
    ctx->pc = 0x2342ACu;
    SET_GPR_U32(ctx, 31, 0x2342B4u);
    ctx->pc = 0x126C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126C60u, 0x2342ACu, 0x2342B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2342B4u;
label_2342b4:
    // 0x2342b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2342b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2342b8:
    // 0x2342b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2342b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2342bc:
    // 0x2342bc: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x2342bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2342c0:
    // 0x2342c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2342c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2342c4:
    // 0x2342c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2342c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2342c8:
    // 0x2342c8: 0xc119c5c  jal         func_467170
label_2342cc:
    if (ctx->pc == 0x2342CCu) {
        ctx->pc = 0x2342D0u;
        goto label_2342d0;
    }
    ctx->pc = 0x2342C8u;
    SET_GPR_U32(ctx, 31, 0x2342D0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2342C8u, 0x2342D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2342D0u;
label_2342d0:
    // 0x2342d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2342d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2342d4:
    // 0x2342d4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2342d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2342d8:
    // 0x2342d8: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x2342d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2342dc:
    // 0x2342dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2342dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2342e0:
    // 0x2342e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2342e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2342e4:
    // 0x2342e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2342e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2342e8:
    // 0x2342e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2342e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2342ec:
    // 0x2342ec: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2342ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2342f0:
    // 0x2342f0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2342f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2342f4:
    // 0x2342f4: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_2342f8:
    if (ctx->pc == 0x2342F8u) {
        ctx->pc = 0x2342FCu;
        goto label_2342fc;
    }
    ctx->pc = 0x2342F4u;
    {
        const bool branch_taken_0x2342f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2342f4) {
            ctx->pc = 0x23427Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23427c;
        }
    }
    ctx->pc = 0x2342FCu;
label_2342fc:
    // 0x2342fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2342fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_234300:
    // 0x234300: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x234300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_234304:
    // 0x234304: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_234308:
    if (ctx->pc == 0x234308u) {
        ctx->pc = 0x23430Cu;
        goto label_23430c;
    }
    ctx->pc = 0x234304u;
    {
        const bool branch_taken_0x234304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234304) {
            ctx->pc = 0x234328u;
            goto label_234328;
        }
    }
    ctx->pc = 0x23430Cu;
label_23430c:
    // 0x23430c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_234310:
    // 0x234310: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x234310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_234314:
    // 0x234314: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x234314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_234318:
    // 0x234318: 0xc08d0d8  jal         func_234360
label_23431c:
    if (ctx->pc == 0x23431Cu) {
        ctx->pc = 0x234320u;
        goto label_234320;
    }
    ctx->pc = 0x234318u;
    SET_GPR_U32(ctx, 31, 0x234320u);
    ctx->pc = 0x234360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234360u, 0x234318u, 0x234320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234320u;
label_234320:
    // 0x234320: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x234320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_234324:
    // 0x234324: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x234324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_234328:
    // 0x234328: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x234328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_23432c:
    // 0x23432c: 0xc08ec48  jal         func_23B120
label_234330:
    if (ctx->pc == 0x234330u) {
        ctx->pc = 0x234334u;
        goto label_234334;
    }
    ctx->pc = 0x23432Cu;
    SET_GPR_U32(ctx, 31, 0x234334u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x23432Cu, 0x234334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234334u;
label_234334:
    // 0x234334: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x234334u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_234338:
    // 0x234338: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23433c:
    // 0x23433c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23433cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234340:
    // 0x234340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x234340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_234344:
    // 0x234344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x234344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_234348:
    // 0x234348: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x234348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_23434c:
    // 0x23434c: 0x3e00008  jr          $ra
label_234350:
    if (ctx->pc == 0x234350u) {
        ctx->pc = 0x234354u;
        goto label_234354;
    }
    ctx->pc = 0x23434Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23434Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234354u;
label_234354:
    // 0x234354: 0x0  nop
    ctx->pc = 0x234354u;
    // NOP
label_234358:
    // 0x234358: 0x0  nop
    ctx->pc = 0x234358u;
    // NOP
label_23435c:
    // 0x23435c: 0x0  nop
    ctx->pc = 0x23435cu;
    // NOP
    ctx->pc = 0x234360u;
}
